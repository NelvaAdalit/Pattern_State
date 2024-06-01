// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararMisil.h"
#include "Proyectil.h"
#include "CanionVali.h"

// Sets default values
AStateDispararMisil::AStateDispararMisil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxProjectile = 1;
	NumberFired = 0;
	bCanFire = true;

//SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));

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
	CanionVali = Cast<ACanionVali>(_CanionVali);//castear sirve para convertir un tipo de dato a otro
	CanionVali->setDispararMisil(this);//se le asigna el estado al canion
	CanionVali->GetActorLocation();
}

void AStateDispararMisil::DispararMisil()
{
	// creador de proycetiles
	
	if (bCanFire && NumberFired < MaxProjectile) {
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = CanionVali->GetActorLocation() + FVector(0, 0, 300);
			FRotator Rotation = CanionVali->GetActorRotation();
			World->SpawnActor<AProyectil>(Location, Rotation);
			NumberFired++;

			// Establecer el temporizador para el próximo disparo
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AStateDispararMisil::DesactivarDisparoMisil, rand() % 6 + 1, false);






		}
	}
}

void AStateDispararMisil::DesactivarDisparoMisil()
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

FString AStateDispararMisil::ObtenerEstado()
{
	return "Canion con Proyectil Misil";
}





