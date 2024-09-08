// Copyright Epic Games, Inc. All Rights Reserved.


#include "Player/BFPPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"
#include "Engine/LocalPlayer.h"

void ABFPPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);

		// if(IsValid(PlayerHUDClass))
		// {
		// 	PlayerHUD = CreateWidget<UUserWidget>(this, PlayerHUDClass, "PlayerHUD");
		// 	if(IsValid(PlayerHUD))
		// 	{
		// 		PlayerHUD->AddToViewport();
		// 	}
		// }
	}
}
