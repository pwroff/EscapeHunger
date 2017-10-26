// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "EscapeHungerGameMode.h"
#include "EscapeHungerHUD.h"
#include "EscapeHungerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEscapeHungerGameMode::AEscapeHungerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEscapeHungerHUD::StaticClass();
}
