// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaAgresivo.h"
#include "Pattern_StatePawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEstrategiaAgresivo::AEstrategiaAgresivo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaAgresivo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaAgresivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

void AEstrategiaAgresivo::EmplearE()
{
	PawnJugador = Cast<APattern_StatePawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La nave se volvio agresiva"));

	PawnJugador->MoveSpeed += 1000;



}

