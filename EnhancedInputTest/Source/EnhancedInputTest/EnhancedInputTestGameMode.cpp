// Copyright Epic Games, Inc. All Rights Reserved.

#include "EnhancedInputTestGameMode.h"
#include "EnhancedInputTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEnhancedInputTestGameMode::AEnhancedInputTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
