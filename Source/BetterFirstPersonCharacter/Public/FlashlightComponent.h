// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SpotLightComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "FlashlightComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BETTERFIRSTPERSONCHARACTER_API UFlashlightComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFlashlightComponent();

protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	bool ConstructFlighlight();

	UFUNCTION()
	bool AddSpringArm();

	UFUNCTION()
	bool AddSpotLight();

	UFUNCTION(BlueprintCallable)
	void ToggleFlashlight();

private:
	UPROPERTY()
	UActorComponent* SpringArm;
	UPROPERTY()
	UActorComponent* SpotLight;
	UPROPERTY()
	bool bFlashLightOn = false;
};
