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
    FRotator rotacionCanion = FRotator(0.0f, 0.0f, 0.0f);
    FVector PosicionInicialCanion = FVector(500.0f, 100.0f, 270.0f);
    FVector PosicionNaveActual = FVector(PosicionInicialCanion.X, PosicionInicialCanion.Y, PosicionInicialCanion.Z);
    CanionVali = GetWorld()->SpawnActor<ACanionVali>(PosicionInicialCanion, rotacionCanion);

    contador = 0;
    tiempoCambio = 5;

    GetWorldTimerManager().SetTimer(ManejoTiempoCambio, this, &APattern_StateGameMode::CambioDeEstado, tiempoCambio, true);





}


void APattern_StateGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    tiempoCambioEstado2 += DeltaTime;

}

void APattern_StateGameMode::CambioDeEstado()
{


    if (CanionVali)
    {
        if (contador == 0)
        {
            CanionVali->InicializarCanion("Dispararhielo");
            GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT(" El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual()));
            UE_LOG(LogTemp, Warning, TEXT("El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual());
            CanionVali->activarDispararHielo();

        }
        if (contador == 1)
        {
            CanionVali->InicializarCanion("DispararBala");
            GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT(" El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual()));
            UE_LOG(LogTemp, Warning, TEXT("El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual());

            CanionVali->activarDispararBala();
        }
        if (contador == 2)
        {
            CanionVali->InicializarCanion("DispararLazer");
            GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT(" El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual()));
            UE_LOG(LogTemp, Warning, TEXT("El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual());

            CanionVali->activarDispararLazer();
        }
        if (contador == 3)
        {
            CanionVali->InicializarCanion("DispararMisil");
            GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT(" El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual()));
            UE_LOG(LogTemp, Warning, TEXT("El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual());

            CanionVali->activarDispararMisil();

            contador = -1;
        }
    
        

        

    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("No se pudo crear el canion")));
    }

    contador++;

}

