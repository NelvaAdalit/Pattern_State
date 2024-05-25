// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararBala.h"

// Sets default values
AStateDispararBala::AStateDispararBala()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStateDispararBala::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateDispararBala::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStateDispararBala::EstablecerCanion(ACanionVali* _CanionVali)
{
}

void AStateDispararBala::DispararBala()
{
}

FString AStateDispararBala::ObtenerEstado()
{
	return FString();
}

