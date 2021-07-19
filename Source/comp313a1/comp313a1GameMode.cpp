// Copyright Epic Games, Inc. All Rights Reserved.

#include "comp313a1fuckGameMode.h"
#include "comp313a1fuckCharacter.h"
#include "UObject/ConstructorHelpers.h"

Acomp313a1fuckGameMode::Acomp313a1fuckGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
