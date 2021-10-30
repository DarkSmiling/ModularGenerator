// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModularGeneratorGameMode.h"
#include "ModularGeneratorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AModularGeneratorGameMode::AModularGeneratorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
