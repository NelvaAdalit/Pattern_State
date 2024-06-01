// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaFuerza.h"
#include "Pattern_StatePawn.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AEstrategiaFuerza::AEstrategiaFuerza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaFuerza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaFuerza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaFuerza::EmplearE()
{
	PawnJugador = Cast<APattern_StatePawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	PawnJugador->MoveSpeed += 300;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La nave obtuvo mas fuerza"));

	PawnJugador->LifePawn += 10;

   GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La nave Mantendra su vida"));


}

