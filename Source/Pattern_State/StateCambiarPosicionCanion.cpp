// Fill out your copyright notice in the Description page of Project Settings.


#include "StateCambiarPosicionCanion.h"
#include "CanionVali.h"
// Sets default values
AStateCambiarPosicionCanion::AStateCambiarPosicionCanion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    // Called every frame
	TimeElapsed = 0.0f;
	Radius = 200.0f; // Radio del círculo
	Speed = 1.0f;

}

// Called when the game starts or when spawned
void AStateCambiarPosicionCanion::BeginPlay()
{
	Super::BeginPlay();
	//InitialLocation = CanionVali->GetActorLocation();
}

// Called every frame
void AStateCambiarPosicionCanion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//TimeElapsed += DeltaTime;

	//// Movimiento circular
	//float NewX = InitialLocation.X + Radius * FMath::Cos(Speed * TimeElapsed);
	//float NewY = InitialLocation.Y + Radius * FMath::Sin(Speed * TimeElapsed);

	//FVector NewLocation = FVector(NewX, NewY, InitialLocation.Z);
	//CanionVali->SetActorLocation(NewLocation);

}

void AStateCambiarPosicionCanion::EstablecerCanion(ACanionVali* _CanionVali)
{
	CanionVali = Cast<ACanionVali>(_CanionVali);//castear sirve para convertir un tipo de dato a otro
	CanionVali->setCambiarPosicionCanion(this);//se le asigna el estado al canion
	CanionVali->GetActorLocation();
}

void AStateCambiarPosicionCanion::activarCambiarPosicionCanion()
{

}



FString AStateCambiarPosicionCanion::ObtenerEstado()
{
	return "Canion Posiscion Cambiar ";
}

void AStateCambiarPosicionCanion::DesactivarCambiarPosicionCanion()
{
}

