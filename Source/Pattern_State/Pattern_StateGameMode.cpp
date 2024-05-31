// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pattern_StateGameMode.h"
#include "CanionVali.h"

APattern_StateGameMode::APattern_StateGameMode()
{
    PrimaryActorTick.bCanEverTick = true;
   
}

void APattern_StateGameMode::BeginPlay()
{
    Super::BeginPlay();
   /* FRotator rotacionCanion = FRotator(0.0f, 0.0f, 0.0f);
    FVector PosicionInicialCanion = FVector(500.0f, 100.0f, 270.0f);
    FVector PosicionNaveActual = FVector(PosicionInicialCanion.X, PosicionInicialCanion.Y, PosicionInicialCanion.Z);
    CanionVali = GetWorld()->SpawnActor<ACanionVali>(PosicionInicialCanion, rotacionCanion);*/
    FRotator rotacionCanion = FRotator(0.0f, 0.0f, 0.0f);
    FVector PosicionInicialCanion = FVector(500.0f, 100.0f, 270.0f);
   
    // Distancia entre los cañones
    float distanciaEntreCaniones = 300.0f;

    // Crear 4 cañones en diferentes posiciones
    for (int i = 0; i < 4; i++)
    {
        FVector PosicionActualCanion = PosicionInicialCanion + FVector(0.0f, i * distanciaEntreCaniones, 0.0f);
        CanionVali = GetWorld()->SpawnActor<ACanionVali>(PosicionActualCanion, rotacionCanion);
    }






}


void APattern_StateGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    

}



