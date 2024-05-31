// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararLazer.h"
#include "ProyectilLazer.h"
#include "CanionVali.h"

// Sets default values
AStateDispararLazer::AStateDispararLazer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxProjectile = 1;
	/*NumberFired = 0;*/
	bCanFire = true;
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
	CanionVali = Cast<ACanionVali>(_CanionVali);//castear sirve para convertir un tipo de dato a otro
	CanionVali->setDispararLazer(this);//se le asigna el estado al canion
	CanionVali->GetActorLocation();

}


void AStateDispararLazer::EstadoDispararLazer()
{
	CanionVali = Cast<ACanionVali>(StaticClass());
	CanionVali -> activarDispararLazer();
}



FString AStateDispararLazer::ObtenerEstado()
{
	return "Canion con Proyectil Lazer";
}

