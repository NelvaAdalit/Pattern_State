// Fill out your copyright notice in the Description page of Project Settings.


#include "CanionVali.h"

// Sets default values
ACanionVali::ACanionVali()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACanionVali::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACanionVali::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACanionVali::StarStates(FString _States)
{
}

void ACanionVali::EstablecerState(IIState* _State)
{
}

void ACanionVali::CanionValiDispararHielo()
{


}

void ACanionVali::CanionValiDispararBala()
{
}

void ACanionVali::CanionValiDispararLazer()
{
}

void ACanionVali::CanionValiDispararMisil()
{
}

void ACanionVali::CanionValiCambiarPosicionCanion()
{
}

void ACanionVali::CanionValiVolverPosiconInicialCanion()
{
}

void ACanionVali::CanionValiDesaparecerCanion()
{
}

IIState* ACanionVali::C_ObtenerState()
{
	return nullptr;
}

IIState* ACanionVali::C_ObtenerDispararHielo()
{
	return nullptr;
}

IIState* ACanionVali::C_ObtenerDispararBala()
{
	return nullptr;
}

IIState* ACanionVali::C_ObtenerDispararLazer()
{
	return nullptr;
}

IIState* ACanionVali::C_ObtenerDispararMisil()
{
	return nullptr;
}

IIState* ACanionVali::C_ObtenerCambiarPosicionCanion()
{
	return nullptr;
}

IIState* ACanionVali::C_ObtenerVolverPosiconInicialCanion()
{
	return nullptr;
}

IIState* ACanionVali::C_ObtenerDesaparecerCanion()
{
	return nullptr;
}

FString ACanionVali::C_ObtenerNombreStateActual()
{
	return FString();
}
