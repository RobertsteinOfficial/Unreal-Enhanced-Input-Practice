// Fill out your copyright notice in the Description page of Project Settings.


#include "TestInputModifier.h"

FInputActionValue UTestInputModifier::ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime)
{
	FVector InvertedValue = CurrentValue.Get<FVector>();

	if(InvertVertical)
	InvertedValue.Y *= -1.0f;

	if(InvertHorizontal)
	InvertedValue.X *= -1.0f;

	return InvertedValue;
}
