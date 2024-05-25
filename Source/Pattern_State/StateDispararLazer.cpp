// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararLazer.h"

// Sets default values
AStateDispararLazer::AStateDispararLazer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStateDispararLazer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateDispararLazer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStateDispararLazer::EstablecerCanion(ACanionVali* _CanionVali)
{
}

void AStateDispararLazer::DispararLazer()
{
}

FString AStateDispararLazer::ObtenerEstado()
{
	return FString();
}

