// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StopCamera.generated.h"

/**
 * 
 */
UCLASS()
class COMP313A1_API UStopCamera : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Stop Camera", CompactNodeTitle = "Stop Camera"), Category = "Marco")
		static bool StopCamera(APlayerController *pc);
	
};
