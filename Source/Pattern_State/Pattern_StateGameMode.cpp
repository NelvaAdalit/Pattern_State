// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pattern_StateGameMode.h"
#include "CanionVali.h"
#include "Pattern_StatePawn.h"
#include "StrategyFastFurious.h"
#include "StrategyDefensivaExtrema.h"

APattern_StateGameMode::APattern_StateGameMode()
{
    PrimaryActorTick.bCanEverTick = true;
    TiempoDeJuego = 0;
}

void APattern_StateGameMode::BeginPlay()
{

    Super::BeginPlay();
    FRotator rotacionCanion = FRotator(0.0f, 0.0f, 0.0f);
    FVector PosicionInicialCanion = FVector(500.0f, 200.0f, 270.0f);

    for (int i = 0; i < 4; i++)
    {
        FVector PosicionNaveActual = FVector(PosicionInicialCanion.X+100, PosicionInicialCanion.Y*i+600, PosicionInicialCanion.Z);

         CanionVali = GetWorld()->SpawnActor<ACanionVali>(PosicionNaveActual,rotacionCanion);
        // You can also set other properties or initialize components here
    }



   PawnJugador = GetWorld()->SpawnActor<APattern_StatePawn>(APattern_StatePawn::StaticClass());
    FastFurious=GetWorld()->SpawnActor<AStrategyFastFurious>(AStrategyFastFurious::StaticClass());

    _DefensivaExtrema=GetWorld()->SpawnActor<AStrategyDefensivaExtrema>(AStrategyDefensivaExtrema::StaticClass());



}


void APattern_StateGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TiempoDeJuego += DeltaTime;
    if (TiempoDeJuego >=5.0f)
    {
        PawnJugador->CambiarEstrategia(FastFurious);
        PawnJugador->EjecutarEstrategia();
    
    }
    if (TiempoDeJuego >= 10.0f)
    {
        PawnJugador->CambiarEstrategia(_DefensivaExtrema);
        PawnJugador->EjecutarEstrategia();
    }
    if (TiempoDeJuego >= 15.0f) {
        TiempoDeJuego = 0;
    }

}
