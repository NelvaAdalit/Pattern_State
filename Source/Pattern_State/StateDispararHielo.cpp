// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararHielo.h"
#include "ProyectilHielo.h"
// Sets default values
AStateDispararHielo::AStateDispararHielo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxProjectile = 8;
	NumberFired = 0;
	bCanFire = true;

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

	CanionVali = _CanionVali;
}

void AStateDispararHielo::DispararHielo()
{
	if (bCanFire && NumberFired < MaxProjectile) {
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = GetActorLocation();
			FRotator Rotation = GetActorRotation();
			World->SpawnActor<AProyectilHielo>(Location, Rotation);
			NumberFired++;

			// Establecer el temporizador para el próximo disparo
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AStateDispararHielo::DejarDeDisparar, rand() % 6 + 1, false);






		}
	}
}

void AStateDispararHielo::DejarDeDisparar()
{
	if (NumberFired < MaxProjectile)
	{
		bCanFire = true;  // Permitir el siguiente disparo
		DispararMisil();         // Disparar automáticamente la siguiente bomba
	}
	else
	{
		NumberFired = 0;   // Reiniciar el contador de bombas para el próximo ciclo de disparos reabastecido
		bCanFire = false;
	}
}

FString AStateDispararHielo::ObtenerEstado()
{
	return "Canion Proyectil Hielo";
}

