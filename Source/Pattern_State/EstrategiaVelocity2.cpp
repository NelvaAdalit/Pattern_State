// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaVelocity2.h"
#include "Pattern_StatePawn.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
AEstrategiaVelocity2::AEstrategiaVelocity2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaVelocity2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaVelocity2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaVelocity2::MoveE(){
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, FString::Printf(TEXT("Estrategia Velocity 2")));
	
	PawnJugador = Cast<APattern_StatePawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	PawnJugador->LifePawn += 5;
	PawnJugador->EnergyPawn -= 15;

}

