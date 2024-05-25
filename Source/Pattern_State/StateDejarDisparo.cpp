// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDejarDisparo.h"

// Sets default values
AStateDejarDisparo::AStateDejarDisparo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStateDejarDisparo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateDejarDisparo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void AStateDejarDisparo::EstablecerCanion(ACanionVali* _CanionVali)
{
}

void AStateDejarDisparo::DejarDeDisparar()
{
}

FString AStateDejarDisparo::ObtenerEstado()
{
	return FString();
}

