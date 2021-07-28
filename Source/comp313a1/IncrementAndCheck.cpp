// Fill out your copyright notice in the Description page of Project Settings.


#include "IncrementAndCheck.h"

bool UIncrementAndCheck::ScoreCheck(int score, int max) {
	if (score >= max) {
		return true;
	}
	else {
		return false;
	}
}