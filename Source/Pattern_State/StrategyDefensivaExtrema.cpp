// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyDefensivaExtrema.h"
#include "Pattern_StatePawn.h"
#include "Kismet/GameplayStatics.h"
#include "PawnProyectilExtra.h"


// Sets default values
AStrategyDefensivaExtrema::AStrategyDefensivaExtrema()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxProjectile = 10;
	NumberFired = 0;
	bCanFire = true;


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

	if (bCanFire && NumberFired < MaxProjectile) {
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = PawnJugador->GetActorLocation() + FVector(0, 20, 200);

			FRotator Rotation = PawnJugador->GetActorRotation();

			World->SpawnActor<APawnProyectilExtra>(Location, Rotation);
			NumberFired++;

			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AStrategyDefensivaExtrema::DesactivarDisparoExtra, 0.2f, false);






		}
	}
}

void AStrategyDefensivaExtrema::DesactivarDisparoExtra()
{
	bCanFire = true;
	NumberFired = 0;
	
}

