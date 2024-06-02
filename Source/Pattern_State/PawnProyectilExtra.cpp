// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnProyectilExtra.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "Pattern_StateProjectile.h"
#include "Pattern_StateGameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APawnProyectilExtra::APawnProyectilExtra()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Food.Food'"));
    mallaProyectil = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    mallaProyectil->SetStaticMesh(ProjectileMeshAsset.Object);
    mallaProyectil->SetupAttachment(RootComponent);
    velocidadDisparo = -800;
    Disparodano = 20;
    mallaProyectil->SetRelativeScale3D(FVector(0.8f, 0.8f, 0.8f));

}

// Called when the game starts or when spawned
void APawnProyectilExtra::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawnProyectilExtra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    Super::Tick(DeltaTime);
    Colision += GetWorld()->DeltaTimeSeconds;
    TiempoDisparo(Colision);
    movimento(DeltaTime);

}

void APawnProyectilExtra::movimento(float DeltaTime)
{
   

    FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidadDisparo * GetWorld()->GetDeltaSeconds();
    SetActorLocation(NewLocation);


}

void APawnProyectilExtra::TiempoDisparo(float _Colision)
{
    if (Colision >= 2.0f)
    {
        Destroy();
    }
}

