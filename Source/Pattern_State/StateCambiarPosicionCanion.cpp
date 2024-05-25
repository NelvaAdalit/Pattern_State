// Fill out your copyright notice in the Description page of Project Settings.


#include "StateCambiarPosicionCanion.h"

// Sets default values
AStateCambiarPosicionCanion::AStateCambiarPosicionCanion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStateCambiarPosicionCanion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateCambiarPosicionCanion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStateCambiarPosicionCanion::EstablecerCanion(ACanionVali* _CanionVali)
{
}

void AStateCambiarPosicionCanion::CambiarPosicionCanion()
{
}

FString AStateCambiarPosicionCanion::ObtenerEstado()
{
	return FString();
}

