// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyFastFurious.h"
#include "Pattern_StatePawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AStrategyFastFurious::AStrategyFastFurious()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrategyFastFurious::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategyFastFurious::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrategyFastFurious::EjecutarE()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, FString::Printf(TEXT("EstrategiaFastAndFurious")));
	PawnJugador= Cast<APattern_StatePawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	PawnJugador->MoveSpeed +=20;

}

