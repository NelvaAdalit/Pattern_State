// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pattern_StateGameMode.h"
#include "Pattern_StatePawn.h"
#include "CanionVali.h"

APattern_StateGameMode::APattern_StateGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APattern_StatePawn::StaticClass();
}

void APattern_StateGameMode::BeginPlay()
{
	Super::BeginPlay();
    CanionVali = GetWorld()->SpawnActor<ACanionVali>(ACanionVali::StaticClass());
    CanionVali->StarStates("DispararHielo");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("%s"), *CanionVali->C_ObtenerState()));
    CanionVali->CanionValiDispararHielo();
}


void APattern_StateGameMode::Tick(float DeltaTime)
{
}

