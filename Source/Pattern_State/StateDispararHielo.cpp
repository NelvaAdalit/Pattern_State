// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararHielo.h"
#include "ProyectilHielo.h"
#include "CanionVali.h"

// Sets default values
AStateDispararHielo::AStateDispararHielo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxProjectile = 4;
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

	CanionVali =Cast<ACanionVali>( _CanionVali);//castear sirve para convertir un tipo de dato a otro
	CanionVali->setDispararHielo(this);//se le asigna el estado al canion
	CanionVali->GetActorLocation();
	//UE_LOG(LogTemp, Warning, TEXT("Disparando Hielo"));

}

void AStateDispararHielo::activarDispararHielo()
{
	//UE_LOG(LogTemp, Warning, TEXT("Disparando Hielo del state disparar hielo"));

	if (bCanFire && NumberFired < MaxProjectile) {
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = CanionVali->GetActorLocation() + FVector(0,0,200);

			FRotator Rotation = CanionVali->GetActorRotation();

			World->SpawnActor<AProyectilHielo>(Location, Rotation);
			NumberFired++;

			//UE_LOG(LogTemp, Warning, TEXT("Ubicacion de la bala %s"), *Location.ToString());

			// Establecer el temporizador para el próximo disparo
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AStateDispararHielo::DesactivarDisparoHielo, rand() % 6 + 1, false);






		}
	}

}






FString AStateDispararHielo::ObtenerEstado()
{
	return "Canion Proyectil Hielo";
}

void AStateDispararHielo::DesactivarDisparoHielo()
{
	if (NumberFired < MaxProjectile)
	{
		bCanFire = true;
		activarDispararHielo();
	}
	else
	{
		NumberFired = 0;
		bCanFire = false;
	}

}

