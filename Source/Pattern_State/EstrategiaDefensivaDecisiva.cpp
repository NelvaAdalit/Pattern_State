// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaDefensivaDecisiva.h"
#include "Pattern_StatePawn.h"
#include "Kismet/GameplayStatics.h"
#include "PawnProyectilExtra.h"

// Sets default values
AEstrategiaDefensivaDecisiva::AEstrategiaDefensivaDecisiva()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxProjectile = 10;
	NumberFired = 0;
	bCanFire = true;


}

// Called when the game starts or when spawned
void AEstrategiaDefensivaDecisiva::BeginPlay()
{

	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaDefensivaDecisiva::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaDefensivaDecisiva::EjecutarE()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estrategia Defensiva Decisiva"));
	PawnJugador = Cast<APattern_StatePawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	if (bCanFire && NumberFired < MaxProjectile) {
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = PawnJugador->GetActorLocation() + FVector(0, 20, 200);

			FRotator Rotation = PawnJugador->GetActorRotation();

			FVector Location2 = PawnJugador->GetActorLocation() + FVector(100, 40, 270);

			FRotator Rotation2 = PawnJugador->GetActorRotation() +FRotator(20,20,270);


			World->SpawnActor<APawnProyectilExtra>(Location, Rotation);

			World->SpawnActor<APawnProyectilExtra>(Location2, Rotation2);
			NumberFired++;

			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AEstrategiaDefensivaDecisiva::FireAgain, 0.2f, false);


		}
	}

	PawnJugador->EnergyPawn -= 20;
}


void AEstrategiaDefensivaDecisiva::FireAgain()
{
	bCanFire = true;
	NumberFired = 0;

}

