// Fill out your copyright notice in the Description page of Project Settings.


#include "StateVolverPosicionIncialCanion.h"
#include "CanionVali.h"

// Sets default values
AStateVolverPosicionIncialCanion::AStateVolverPosicionIncialCanion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStateVolverPosicionIncialCanion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateVolverPosicionIncialCanion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStateVolverPosicionIncialCanion::EstablecerCanion(ACanionVali* _CanionVali)
{
	CanionVali = Cast<ACanionVali>(_CanionVali);//castear sirve para convertir un tipo de dato a otro
	CanionVali->setVolverPosiconInicialCanion(this);//se le asigna el estado al canion
}

void AStateVolverPosicionIncialCanion::activarVolverPosiconInicialCanion()
{

}



FString AStateVolverPosicionIncialCanion::ObtenerEstado()
{
	return FString();
}

void AStateVolverPosicionIncialCanion::DesactivarVolverPosiconInicialCanion()
{
}

