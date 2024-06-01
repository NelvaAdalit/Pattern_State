// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDesaparecerCanion.h"
#include "CanionVali.h"
// Sets default values
AStateDesaparecerCanion::AStateDesaparecerCanion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStateDesaparecerCanion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateDesaparecerCanion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStateDesaparecerCanion::EstablecerCanion(ACanionVali* _CanionVali)
{

	CanionVali = Cast<ACanionVali>(_CanionVali);//castear sirve para convertir un tipo de dato a otro
	CanionVali->setDesaparecerCanion(this);
	CanionVali->GetActorLocation();
}

void AStateDesaparecerCanion::activarDesaparecerCanion()
{
}



FString AStateDesaparecerCanion::ObtenerEstado()
{
	return FString();
}

void AStateDesaparecerCanion::DesactivarDesaparecerCanion()
{

}
