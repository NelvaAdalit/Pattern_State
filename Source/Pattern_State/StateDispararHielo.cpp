// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararHielo.h"

// Sets default values
AStateDispararHielo::AStateDispararHielo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStateDispararHielo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateDispararHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStateDispararHielo::EstablecerCanion(ACanionVali* _CanionVali)
{
}

void AStateDispararHielo::DispararHielo()
{
}

FString AStateDispararHielo::ObtenerEstado()
{
	return FString();
}

