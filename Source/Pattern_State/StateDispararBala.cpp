// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararBala.h"
#include "ProyectilBala.h"
// Sets default values
AStateDispararBala::AStateDispararBala()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxProjectile = 8;
	NumberFired = 0;
	bCanFire = true;
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
	CanionVali = _CanionVali;

}

void AStateDispararBala::DispararBala()
{
	if (bCanFire && NumberFired < MaxProjectile) {
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = GetActorLocation();
			FRotator Rotation = GetActorRotation();
			World->SpawnActor<AProyectilBala>(Location, Rotation);
			NumberFired++;

			// Establecer el temporizador para el próximo disparo
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AStateDispararBala::DejarDeDisparar, rand() % 6 + 1, false);






		}
	}
}

void AStateDispararBala::DejarDeDisparar()
{
	if (NumberFired < MaxProjectile)
	{
		bCanFire = true;
		DispararBala();
	}
	else
	{
		NumberFired = 0;
		bCanFire = false;
	}

}

FString AStateDispararBala::ObtenerEstado()
{
	return "Canion con Proyectil Bala";
}

