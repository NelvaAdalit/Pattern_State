// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IStrategyVelocity.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIStrategyVelocity : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PATTERN_STATE_API IIStrategyVelocity
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void MoveE() = 0;
};