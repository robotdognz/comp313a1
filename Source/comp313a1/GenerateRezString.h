// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenerateRezString.generated.h"

/**
 * 
 */
UCLASS()
class COMP313A1_API UGenerateRezString : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintPure, meta = (DisplayName = "To Resolution", CompactNodeTitle = "To Resolution"), Category = "Marco")
		static FString GetRez(float value);
};
