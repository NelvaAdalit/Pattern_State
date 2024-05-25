// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararMisil.h"

// Sets default values
AStateDispararMisil::AStateDispararMisil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStateDispararMisil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateDispararMisil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStateDispararMisil::EstablecerCanion(ACanionVali* _CanionVali)
{
}

void AStateDispararMisil::DispararMisil()
{
}

FString AStateDispararMisil::ObtenerEstado()
{
	return FString();
}

