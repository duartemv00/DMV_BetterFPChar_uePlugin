// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "DMV_FootstepSoundAN.generated.h"

UENUM(BlueprintType)
enum class EFootstepType : uint8
{
	WalkRun,
	Sprint,
	Jump,
	Land,
	Crouch
};

UENUM(BlueprintType)
enum class EFootstepSide : uint8
{
	Left,
	Right
};

/**
 * 
 */
UCLASS()
class BETTERFIRSTPERSONCHARACTER_API UDMV_FootstepSoundAN : public UAnimNotify
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	EFootstepType FootstepType;

	UPROPERTY(EditAnywhere)
	EFootstepSide FootstepSide;

	UPROPERTY(EditAnywhere)
	FName LeftAttachPointName;

	UPROPERTY(EditAnywhere)
	FName RightAttachPointName;

	UPROPERTY(EditAnywhere)
	float VolumeMultiplier = 1.0f;

	UPROPERTY(EditAnywhere)
	float PitchMultiplier = 1.0f;

	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EPhysicalSurface>, USoundBase*> FootstepSoundsLibrary;

	// BEGIN - Footstep sound implementation
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	FName GetUsedFoot() const;
	FHitResult FindFloorMaterial(USkeletalMeshComponent* MeshComp, FName BoneName);
	// END - Footstep sound implementation
};
