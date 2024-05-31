// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararHielo.h"
#include "ProyectilHielo.h"
#include "CanionVali.h"

// Sets default values
AStateDispararHielo::AStateDispararHielo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxProjectile = 1;
	/*NumberFired = 0;*/
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

void AStateDispararHielo::EstadoDispararHielo()
{
	//UE_LOG(LogTemp, Warning, TEXT("Disparando Hielo del state disparar hielo"));

	CanionVali = Cast<ACanionVali>(StaticClass());
	CanionVali->activarDispararHielo();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando Hielo"));

}


FString AStateDispararHielo::ObtenerEstado()
{
	return "Canion Proyectil Hielo";
}


