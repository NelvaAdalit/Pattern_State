// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararLazer.h"
#include "ProyectilLazer.h"

// Sets default values
AStateDispararLazer::AStateDispararLazer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxProjectile = 8;
	NumberFired = 0;
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
	CanionVali = _CanionVali;
}

void AStateDispararLazer::DispararLazer()
{
	if (bCanFire && NumberFired < MaxProjectile) {
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = GetActorLocation();
			FRotator Rotation = GetActorRotation();
			World->SpawnActor<AProyectilLazer>(Location, Rotation);
			NumberFired++;

			// Establecer el temporizador para el próximo disparo
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AStateDispararLazer::DejarDeDisparar, rand() % 6 + 1, false);






		}
	}
}

void AStateDispararLazer::DejarDeDisparar()
{
	if (NumberFired < MaxProjectile)
	{
		bCanFire = true;  
		DispararLazer(); 
	}
	else
	{
		NumberFired = 0;  
		bCanFire = false;
	}
}


FString AStateDispararLazer::ObtenerEstado()
{
	return "Canion con Proyectil Lazer";
}

