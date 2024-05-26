// Fill out your copyright notice in the Description page of Project Settings.


#include "StateCambiarPosicionCanion.h"
#include "CanionVali.h"
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
	CanionVali = Cast<ACanionVali>(_CanionVali);//castear sirve para convertir un tipo de dato a otro
	CanionVali->setCambiarPosicionCanion(this);//se le asigna el estado al canion
	CanionVali->GetActorLocation();
}

void AStateCambiarPosicionCanion::activarCambiarPosicionCanion()
{
}



FString AStateCambiarPosicionCanion::ObtenerEstado()
{
	return FString();
}

void AStateCambiarPosicionCanion::DesactivarCambiarPosicionCanion()
{
}

