// Copyright Epic Games, Inc. All Rights Reserved.

#include "boardgameGameMode.h"
#include "boardgameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AboardgameGameMode::AboardgameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
