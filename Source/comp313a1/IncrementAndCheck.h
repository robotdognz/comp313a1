// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IncrementAndCheck.generated.h"

/**
 * 
 */
UCLASS()
class COMP313A1_API UIncrementAndCheck : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Check Score", CompactNodeTitle = "Check Score"), Category = "Marco")
		static bool ScoreCheck(int score, int max);
};
