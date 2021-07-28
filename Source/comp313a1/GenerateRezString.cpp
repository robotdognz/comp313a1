// Fill out your copyright notice in the Description page of Project Settings.


#include "GenerateRezString.h"

FString UGenerateRezString::GetRez(float value) {
	FString resolution;

	if (value < 0.5) {
		resolution = "640x480";
	}
	else if (value == 0.5) {
		resolution = "1280x720";
	}
	else {
		resolution = "1920x1080";
	}
	return resolution;
}