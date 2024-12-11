// Copyright Epic Games, Inc. All Rights Reserved.

#include "PortfolioPiece1GameMode.h"
#include "PortfolioPiece1Character.h"
#include "UObject/ConstructorHelpers.h"

APortfolioPiece1GameMode::APortfolioPiece1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
