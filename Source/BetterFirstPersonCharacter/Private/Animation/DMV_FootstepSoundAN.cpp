// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/DMV_FootstepSoundAN.h"

#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

void UDMV_FootstepSoundAN::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	// Super::Notify(MeshComp, Animation);

	if(IsValid(MeshComp))
	{
		if(IsValid(MeshComp->GetAnimInstance()))
		{
			// 1. GET THE FOOT (left or right) THAT IS USED
			FName AttachPointName = GetUsedFoot();
			
			// 2. GET THE MATERIAL OF THE FLOOR (and if it doesn't exist, use the default one)
			EPhysicalSurface SurfaceType;
			if(FindFloorMaterial(MeshComp, AttachPointName).PhysMaterial.IsValid())
			{
				SurfaceType = FindFloorMaterial(MeshComp, AttachPointName).PhysMaterial->SurfaceType;
			} else { SurfaceType = EPhysicalSurface::SurfaceType_Default; }
			
			if(FootstepSoundsLibrary.Contains(SurfaceType))
			{
				USoundBase* SoundToPlay = *FootstepSoundsLibrary.Find(SurfaceType);
				// 4. PLAY THE SOUND
				UAudioComponent* UsedAudioComp = UGameplayStatics::SpawnSoundAttached(SoundToPlay, MeshComp, AttachPointName);
				// ... and set the parameter index to play the correct sound according to the footstep type (ground, grass, etc.)
				UsedAudioComp->SetIntParameter("index", static_cast<int32>(FootstepType));
			}
		}
	}
}

/*
 * Get the foot that is used
 */
FName UDMV_FootstepSoundAN::GetUsedFoot() const
{
	switch(FootstepSide)
	{
	case EFootstepSide::Left:
		return LeftAttachPointName;
	case EFootstepSide::Right:
		return RightAttachPointName;
	default:
		return NAME_None;
	}
}

/*
 * Find the material of the floor
 */
FHitResult UDMV_FootstepSoundAN::FindFloorMaterial(USkeletalMeshComponent* MeshComp, FName BoneName)
{
	FVector RayStart = MeshComp->GetBoneLocation(BoneName);
	FVector RayEnd = RayStart - FVector(0, 0, 150);

	FHitResult HitResult;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(MeshComp->GetOwner());

	// Perform the line trace
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		RayStart,
		RayEnd,
		ECC_Visibility,
		CollisionParams
	);
	
	if (bHit) { return HitResult; }
	
	return FHitResult();
}
