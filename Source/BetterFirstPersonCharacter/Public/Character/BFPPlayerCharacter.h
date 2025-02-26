// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BFPCharacter.h"
#include "BFPPlayerCharacter.generated.h"

USTRUCT(BlueprintType)
struct FHeadBobbing
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	bool bUseHeadBobbing = false;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShakeBase> IDLECameraShake = nullptr;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShakeBase> WalkCameraShake = nullptr;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShakeBase> SprintCameraShake = nullptr;
};

UCLASS()
class BETTERFIRSTPERSONCHARACTER_API ABFPPlayerCharacter : public ABFPCharacter
{
	GENERATED_BODY()

	// BEGIN - Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;
	// END - Components

public:
	ABFPPlayerCharacter();

	// BEGIN - Getters
	UFUNCTION(BlueprintPure)
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
	// END - Getters

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// BEGIN - Input Action Implementation (Protected)
	void Move(const FInputActionValue& Value); // Called for movement input
	void Look(const FInputActionValue& Value); // Called for looking input
	void StartSprint(const FInputActionValue& Value); // Called for sprinting input
	void StopSprint(const FInputActionValue& Value); // Called for sprinting input
	void LeanRight(const FInputActionValue& Value); // Called for sprinting input
	void LeanLeft(const FInputActionValue& Value); // Called for sprinting input
	void Interact(const FInputActionValue& Value); // Called for interacting with ambient elements.
	
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// END - Input Action Implementation (Protected)

	// BEGIN - Dynamic Change Focus
	UPROPERTY(EditDefaultsOnly, Category = "Player features1|ChangeFocus")
	bool bChangeFocus = false;
	UFUNCTION()
	void ChangeFocus();
	// END - Dynamic Change Focus

	// BEGIN - Head Bobbing
	UPROPERTY(EditDefaultsOnly, Category = "Player features|HeadBobbing")
	FHeadBobbing HeadBobbingData;
	UFUNCTION()
	void InitializeHeadBoobing();
	// END - Head Bobbing

	// BEGIN - Interact properties
	UPROPERTY(EditDefaultsOnly, Category = "Player features|Interact")
	bool bCanInteract = false;
	UPROPERTY(EditDefaultsOnly, Category = "Player features|Interact")
	float InteractReach;
	// END - Interact properties

private:
	// BEGIN - Input Action Implementation (Private)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction; // Jump Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction; // Move Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction; // Look Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* SprintAction; // Sprint Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* InteractAction; // Interact Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* LeanRightAction; // Lean Right Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* LeanLeftAction; // Lean Left Input Action
	// END - Input Action Implementation (Private)
};
