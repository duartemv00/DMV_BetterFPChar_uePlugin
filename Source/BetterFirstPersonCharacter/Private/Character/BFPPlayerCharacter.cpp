// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/BFPPlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SpotLightComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Player/BFPPlayerController.h"

ABFPPlayerCharacter::ABFPPlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
	
	GetMesh()->SetOnlyOwnerSee(true);
	GetMesh()->bCastDynamicShadow = false;
	GetMesh()->CastShadow = false;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetMesh(), FName(TEXT("HeadSocket")));
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
}

void ABFPPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABFPPlayerCharacter::Move);
		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABFPPlayerCharacter::Look);
		// Sprinting
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Triggered, this, &ABFPPlayerCharacter::StartSprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &ABFPPlayerCharacter::StopSprint);
		// Interacting
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &ABFPPlayerCharacter::Interact);
		// Lean Right
		EnhancedInputComponent->BindAction(LeanRightAction, ETriggerEvent::Triggered, this, &ABFPPlayerCharacter::LeanRight);
		// Lean Left
		EnhancedInputComponent->BindAction(LeanLeftAction, ETriggerEvent::Triggered, this, &ABFPPlayerCharacter::LeanLeft);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ABFPPlayerCharacter::ChangeFocus()
{
	FVector StartPoint = GetFirstPersonCameraComponent()->GetComponentLocation();
	FVector EndPoint = StartPoint + (GetFirstPersonCameraComponent()->GetForwardVector() * 100000.0f);

	FHitResult HitResult;
	UKismetSystemLibrary::LineTraceSingle(GetWorld(), StartPoint, EndPoint,
		UEngineTypes::ConvertToTraceType(ECC_Visibility), false,
		TArray<AActor*>(), EDrawDebugTrace::None, HitResult, true);

	if (HitResult.bBlockingHit)
	{
		float FocusLocation = UKismetMathLibrary::VSize(HitResult.Location - GetFirstPersonCameraComponent()->GetComponentLocation());
		FPostProcessSettings NewPostProcessSettings;
		NewPostProcessSettings.bOverride_DepthOfFieldFocalDistance = true;
		NewPostProcessSettings.DepthOfFieldFocalDistance = FocusLocation;
		GetFirstPersonCameraComponent()->PostProcessSettings = NewPostProcessSettings;
	}
	
}

void ABFPPlayerCharacter::InitializeHeadBoobing()
{
	float CurrentVelocity = UKismetMathLibrary::VSize(GetVelocity());
	if(!Cast<ABFPPlayerController>(GetController())) { return; }
	ABFPPlayerController* ControllerRef = Cast<ABFPPlayerController>(GetController());
	if(CurrentVelocity > 0.0f && CanJump())
	{
		if(CurrentVelocity <= 400.f) {
			// WALK
			if(IsValid(HeadBobbingData.WalkCameraShake)) {
				ControllerRef->ClientStartCameraShake(
				HeadBobbingData.WalkCameraShake, 1.0f, ECameraShakePlaySpace::CameraLocal, FRotator::ZeroRotator);
			}
		} else {
			// SPRINT
			if(IsValid(HeadBobbingData.SprintCameraShake))
			{
				ControllerRef->ClientStartCameraShake(
				HeadBobbingData.SprintCameraShake, 1.0f, ECameraShakePlaySpace::CameraLocal, FRotator::ZeroRotator);
			}
		}
	} else {
		// IDLE
		if(IsValid(HeadBobbingData.IDLECameraShake)) {
			ControllerRef->ClientStartCameraShake(
			HeadBobbingData.IDLECameraShake, 1.0f, ECameraShakePlaySpace::CameraLocal, FRotator::ZeroRotator);
		}
	}
}

/**
 * @brief Interact with the elements in the environment by calling interfaces.
 */
void ABFPPlayerCharacter::Interact(const FInputActionValue& Value)
{
	if(!bCanInteract) { return; }
	
	FHitResult OutHitData;
	FVector StartPoint = GetFirstPersonCameraComponent()->GetComponentLocation();
	FVector EndPoint = StartPoint + (GetFirstPersonCameraComponent()->GetForwardVector() * InteractReach);
	ActorLineTraceSingle(OutHitData, StartPoint, EndPoint, ECC_Visibility, FCollisionQueryParams());
	if(OutHitData.bBlockingHit)
	{
		// TODO: Call the interact method from the interface
		// if(OutHitData.GetActor()->GetClass()->ImplementsInterface(UInteractable::StaticClass()))
		// {
		// 	IInteractable::Execute_Interact(OutHitData.GetActor());
		// }
	}
}

void ABFPPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	CurrentPlayerState = EPlayerState::Idle;
}

void ABFPPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bChangeFocus){ ChangeFocus(); }
	if(HeadBobbingData.bUseHeadBobbing){ InitializeHeadBoobing(); }
}

void ABFPPlayerCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();
	
	if (Controller != nullptr)
	{
		CurrentPlayerState = EPlayerState::Walk;
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void ABFPPlayerCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ABFPPlayerCharacter::StartSprint(const FInputActionValue& Value)
{
	CurrentPlayerState = EPlayerState::Sprint;
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
}

void ABFPPlayerCharacter::StopSprint(const FInputActionValue& Value)
{
	CurrentPlayerState = EPlayerState::Idle;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void ABFPPlayerCharacter::LeanRight(const FInputActionValue& Value)
{
	
}

void ABFPPlayerCharacter::LeanLeft(const FInputActionValue& Value)
{
	
}

