// Copyright Epic Games, Inc. All Rights Reserved.

#include "PracticeRunGameMode.h"
#include "PracticeRunCharacter.h"
#include "UObject/ConstructorHelpers.h"

APracticeRunGameMode::APracticeRunGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
