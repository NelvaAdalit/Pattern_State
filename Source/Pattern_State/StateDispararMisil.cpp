// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararMisil.h"
#include "Proyectil.h"

// Sets default values
AStateDispararMisil::AStateDispararMisil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CanonMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaCanion->SetStaticMesh(CanonMesh.Object);
	mallaCanion = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CanonMesh"));
	mallaCanion->SetupAttachment(RootComponent);
	RootComponent = mallaCanion;
	MaxProjectile = 8;
	NumberFired = 0;
	bCanFire = true;
	SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));

}

// Called when the game starts or when spawned
void AStateDispararMisil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStateDispararMisil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStateDispararMisil::EstablecerCanion(ACanionVali* _CanionVali)
{

}

void AStateDispararMisil::DispararMisil()
{
	// creador de proycetiles
	
	if (bCanFire && NumberFired < MaxProjectile) {
		bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

		// creador de proycetiles
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = GetActorLocation();
			FRotator Rotation = GetActorRotation();
			World->SpawnActor<AProyectil>(Location, Rotation);
			NumberFired++;

			// Establecer el temporizador para el próximo disparo
			FTimerHandle TimerHandle;
			GetWorldTimerManager().SetTimer(TimerHandle, this, &AStateDispararMisil::ResetFire, rand() % 6 + 1, false);






		}
	}
}

FString AStateDispararMisil::ObtenerEstado()
{
	return FString();
}




void AStateDispararMisil::ResetFire()
{
	if (NumberFired < MaxProjectile)
	{
		bCanFire = true;  // Permitir el siguiente disparo
		DispararMisil();         // Disparar automáticamente la siguiente bomba
	}
	else
	{
		NumberFired = 0;   // Reiniciar el contador de bombas para el próximo ciclo de disparos reabastecido
		bCanFire = false;
	}
}

