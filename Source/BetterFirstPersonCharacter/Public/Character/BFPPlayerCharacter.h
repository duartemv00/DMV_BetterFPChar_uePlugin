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
	UFUNCTION(BlueprintPure)
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

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

	// BEGIN - Default Input Actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction; // Jump Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction; // Move Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction; // Look Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Default Input", meta=(AllowPrivateAccess = "true"))
	UInputAction* SprintAction; // Sprint Input Action
	// END - Default Input Actions
};
