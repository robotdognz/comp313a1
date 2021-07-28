// Copyright Epic Games, Inc. All Rights Reserved.

#include "comp313a1GameMode.h"
#include "comp313a1Character.h"
#include "UObject/ConstructorHelpers.h"

Acomp313a1GameMode::Acomp313a1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
