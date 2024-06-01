// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyDefensivaExtrema.h"
#include "Pattern_StatePawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AStrategyDefensivaExtrema::AStrategyDefensivaExtrema()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrategyDefensivaExtrema::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategyDefensivaExtrema::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrategyDefensivaExtrema::EjecutarE()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estrategia Defensiva Extrema"));
	PawnJugador = Cast<APattern_StatePawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	PawnJugador->MoveSpeed -= 300;

}

