// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pattern_StateGameMode.h"
//#include "Pattern_StatePawn.h"
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
    FVector PosicionNaveActual= FVector(PosicionInicialCanion.X, PosicionInicialCanion.Y  * 300, PosicionInicialCanion.Z);
    CanionVali = GetWorld()->SpawnActor<ACanionVali>(PosicionInicialCanion,rotacionCanion);

    CanionVali->StarStates("DispararHielo");
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("%s"), *CanionVali->C_ObtenerNombreStateActual()));
    CanionVali->CanionValiDispararHielo();

    //Cambiamos estado a disparar bala
    CanionVali->StarStates("DispararBala");
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("%s"), *CanionVali->C_ObtenerNombreStateActual()));
    CanionVali->CanionValiDispararBala();
    //Cambiamos estado a disparar lazer
    CanionVali->StarStates("DispararLazer");
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("%s"), *CanionVali->C_ObtenerNombreStateActual()));
    CanionVali->CanionValiDispararLazer();
    //Cambiamos estado a disparar misil
    CanionVali->StarStates("DispararMisil");
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("%s"), *CanionVali->C_ObtenerNombreStateActual()));
    CanionVali->CanionValiDispararMisil();
    //Cambiamos estado a cambiar posicion canion
    CanionVali->StarStates("CambiarPosicionCanion");
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("%s"), *CanionVali->C_ObtenerNombreStateActual()));
    CanionVali->CanionValiCambiarPosicionCanion();
    //Cambiamos estado a volver posicion inicial canion
    CanionVali->StarStates("VolverPosicionInicialCanion");
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("%s"), *CanionVali->C_ObtenerNombreStateActual()));
    CanionVali->CanionValiVolverPosiconInicialCanion();
    //Cambiamos estado a desaparecer canion
    CanionVali->StarStates("DesaparecerCanion");
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("%s"), *CanionVali->C_ObtenerNombreStateActual()));
    CanionVali->CanionValiDesaparecerCanion();

}


void APattern_StateGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

