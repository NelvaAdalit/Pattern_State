// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pattern_StateGameMode.h"
#include "CanionVali.h"

APattern_StateGameMode::APattern_StateGameMode()
{
	// set default pawn class to our character class
	/*DefaultPawnClass = APattern_StatePawn::StaticClass()*/;
}

void APattern_StateGameMode::BeginPlay()
{
	Super::BeginPlay();
    FRotator rotacionCanion = FRotator(0.0f, 0.0f, 0.0f);
    FVector PosicionInicialCanion = FVector(500.0f, 100.0f, 270.0f);
    FVector PosicionNaveActual= FVector(PosicionInicialCanion.X, PosicionInicialCanion.Y , PosicionInicialCanion.Z);
    CanionVali =Cast<ACanionVali> (GetWorld()->SpawnActor<ACanionVali>(PosicionNaveActual, rotacionCanion));
   /* CanionVali->getDispararHielo();
    CanionVali->getDispararBala();
    CanionVali->getDispararLazer();
    CanionVali->getDispararMisil();
    CanionVali->getCambiarPosicionCanion();
    CanionVali->getVolverPosiconInicialCanion();
    CanionVali->getDesaparecerCanion();*/


   

}


void APattern_StateGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

