// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pattern_StateGameMode.h"
#include "Pattern_StatePawn.h"

APattern_StateGameMode::APattern_StateGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APattern_StatePawn::StaticClass();
}

