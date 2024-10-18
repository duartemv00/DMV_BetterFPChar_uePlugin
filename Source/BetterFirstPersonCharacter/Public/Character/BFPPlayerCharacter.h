// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BFPCharacter.h"
#include "BFPPlayerCharacter.generated.h"

UCLASS()
class BETTERFIRSTPERSONCHARACTER_API ABFPPlayerCharacter : public ABFPCharacter
{
	GENERATED_BODY()

public:
	ABFPPlayerCharacter();

	// ***** GETTERS ***** //
	// Returns FirstPersonCameraComponent subobject
	UFUNCTION(BlueprintPure)
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
	// UFUNCTION(BlueprintCallable, Category = "Player features")
	// bool GetUseHeadBobbing() const { return bUseHeadBobbing; }
	// UFUNCTION(BlueprintCallable, Category = "Player features")
	// bool GetUseFocusChange() const { return bChangeFocus; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// ***** INPUT ACTION EVENTS ***** //
	// Called for movement input
	void Move(const FInputActionValue& Value);
	// Called for looking input
	void Look(const FInputActionValue& Value);
	// Called for sprinting input
	void StartSprint(const FInputActionValue& Value);
	// Called for sprinting input
	void StopSprint(const FInputActionValue& Value);
	// Called for flashlight input
	void ToggleFlashlight(const FInputActionValue& Value);
	
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	UPROPERTY(EditDefaultsOnly, Category = "Player features")
	bool bChangeFocus = false;
	UFUNCTION()
	void ChangeFocus();

	UPROPERTY(EditDefaultsOnly, Category = "Player features")
	TSubclassOf<UCameraShakeBase> IDLECameraShake;
	UPROPERTY(EditDefaultsOnly, Category = "Player features")
	TSubclassOf<UCameraShakeBase> WalkCameraShake;
	UPROPERTY(EditDefaultsOnly, Category = "Player features")
	TSubclassOf<UCameraShakeBase> SprintCameraShake;
	UPROPERTY(EditDefaultsOnly, Category = "Player features")
	bool bUseHeadBobbing = false;
	UFUNCTION()
	void InitializeHeadBoobing();

private:

	// First person camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	bool bFlashLightOn = false;

	// Flashlight
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Flashlight, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* FlashlightSpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Flashlight, meta = (AllowPrivateAccess = "true"))
	USpotLightComponent* FlashlightSpotLight;

	// BEGIN - Default Input Actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction; // Jump Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction; // Move Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction; // Look Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* SprintAction; // Sprint Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* FlashlightAction; // Flashlight Input Action
	// END - Default Input Actions

	// BEGIN - InspectItem input actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "InspectItem Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* ToggleRotationInput;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InspectItem Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* RotateItemHorizontalInput;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InspectItem Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* RotateItemVerticalInput;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InspectItem Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* ItemScaleUpInput;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InspectItem Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* ItemScaleDownInput;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InspectItem Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* ResetItemTransformsInput;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InspectItem Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* ToggleReadingInput;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InspectItem Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* CloseInteractionInput;
	// END - InspectItem input actions
	
};
