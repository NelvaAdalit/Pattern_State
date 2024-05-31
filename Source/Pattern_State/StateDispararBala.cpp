// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararBala.h"
#include "ProyectilBala.h"
#include "CanionVali.h"
// Sets default values
AStateDispararBala::AStateDispararBala()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxProjectile = 1;
	/*NumberFired = 0;*/
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
	CanionVali = Cast<ACanionVali>(_CanionVali);//castear sirve para convertir un tipo de dato a otro
	CanionVali->setDispararBala(this);//se le asigna el estado al canion
	CanionVali->GetActorLocation();//se obtiene la posicion del canion
	UE_LOG(LogTemp, Warning, TEXT("Disparando Bala"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando Bala"));
}

void AStateDispararBala::EstadoDispararBala()
{
	CanionVali = Cast<ACanionVali>(StaticClass());
	CanionVali->activarDispararBala();
	
}


FString AStateDispararBala::ObtenerEstado()
{
	return "Canion con Proyectil Bala";
}

