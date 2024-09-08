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

	// ***** INPUT ACTIONS ***** //
	// Jump Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction;
	// Move Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;
	// Sprint Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SprintAction;
	// Flashlight Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* FlashlightAction;
};
