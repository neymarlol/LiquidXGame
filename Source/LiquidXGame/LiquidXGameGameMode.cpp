// Copyright Epic Games, Inc. All Rights Reserved.

#include "LiquidXGameGameMode.h"
#include "LiquidXGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALiquidXGameGameMode::ALiquidXGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
