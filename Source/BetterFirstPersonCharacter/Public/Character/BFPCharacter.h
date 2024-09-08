// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "BFPCharacter.generated.h"

class USpotLightComponent;
class USpringArmComponent;
class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UENUM()
enum class EPlayerState : uint8
{
	Idle,
	Walk,
	Sprint
};

UCLASS(config=Game)
class BETTERFIRSTPERSONCHARACTER_API ABFPCharacter : public ACharacter
{
	GENERATED_BODY()
	
public:
	ABFPCharacter();

	UPROPERTY(EditDefaultsOnly, Category = Movement)
	float SprintSpeed;
	UPROPERTY(EditDefaultsOnly, Category = Movement)
	float WalkSpeed;
	
	// ***** GETTERS ***** //
	// Returns current player state
	UFUNCTION(BlueprintCallable)
	EPlayerState GetCurrentPlayerState() const { return CurrentPlayerState; }

protected:
	virtual void BeginPlay();
	
	UPROPERTY()
	EPlayerState CurrentPlayerState;
	
};

