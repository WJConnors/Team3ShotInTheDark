// Copyright Epic Games, Inc. All Rights Reserved.

#include "Team3ShotInTheDarkGameMode.h"
#include "Team3ShotInTheDarkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeam3ShotInTheDarkGameMode::ATeam3ShotInTheDarkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
