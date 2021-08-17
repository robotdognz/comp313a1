// Fill out your copyright notice in the Description page of Project Settings.


#include "StopCamera.h"

bool UStopCamera::StopCamera(APlayerController *pc) {

	// prevents the camera from being reoriented when the controller is depossessed
	pc->bAutoManageActiveCameraTarget = false;
	pc->SetControlRotation(FRotator(0.0f, 180.0f, 0.0f));
	pc->UnPossess();

	return true;
}

