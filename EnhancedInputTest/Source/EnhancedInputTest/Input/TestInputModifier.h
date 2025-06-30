// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "TestInputModifier.generated.h"

/**
 * 
 */
UCLASS()
class ENHANCEDINPUTTEST_API UTestInputModifier : public UInputModifier
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = Settings, Config)
	bool InvertHorizontal;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = Settings, Config)
	bool InvertVertical;

protected:

	FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) override;

};
