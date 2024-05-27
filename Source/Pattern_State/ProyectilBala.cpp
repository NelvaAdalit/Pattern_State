// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilBala.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Pattern_StatePawn.h"

// Sets default values
AProyectilBala::AProyectilBala()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Creando la malla del proyectil
	Projectil_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectil_Mesh"));
	RootComponent = Projectil_Mesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletEnemyLevel1.BulletEnemyLevel1'"));
	if (MeshAsset.Succeeded())
	{
		Projectil_Mesh->SetStaticMesh(MeshAsset.Object);

	}
	//SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));
	// Inicializar el sistema de partículas para la explosión
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		Explosion_Particles = ParticleAsset.Object;
	}

	// Inicializar el sonido de la colisión
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (SoundAsset.Succeeded())
	{
		Projectil_Sound = SoundAsset.Object;
	}

	// Controlando el movimiento del proyectil
	Projectil_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectil_Movement"));
	Projectil_Movement->InitialSpeed = 750.0f;
	Projectil_Movement->MaxSpeed = 850.0f;
	Projectil_Movement->bRotationFollowsVelocity = true;
	Projectil_Movement->bShouldBounce = false;
	Projectil_Movement->ProjectileGravityScale = 0.0f;

	// Creando el componente de colisión del proyectil
	Projectil_Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Projectil_Collision"));
	Projectil_Collision->SetupAttachment(RootComponent);

	// Estableciendo el tiempo de vida inicial del proyectil
	InitialLifeSpan = 5.f;

	// Daño predeterminado del proyectil
	DanioProvocado = 10.f;
	//Configurando el proyectil para que genere eventos de colision
	Projectil_Collision->SetCapsuleHalfHeight(160.0f);
	Projectil_Collision->SetCapsuleRadius(160.0f);
	OscillationFrequency = 5.0f;
	OscillationAmplitude = 100.0f;

}

// Called when the game starts or when spawned
void AProyectilBala::BeginPlay()
{
	Super::BeginPlay();
	//InitialLocation = GetActorLocation();
}

// Called every frame
void AProyectilBala::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Calcular el nuevo desplazamiento oscilatorio
	/*FVector NewLocation = InitialLocation;
	float Time = GetWorld()->GetTimeSeconds();
	NewLocation.X += OscillationAmplitude * FMath::Sin(OscillationFrequency * Time);*/

	// Establecer la nueva posición del proyectil
	//SetActorLocation(NewLocation);

}

void AProyectilBala::Set_Danio(float Danio)
{
	DanioProvocado = Danio;
}

void AProyectilBala::NotifyActorBeginOverlap(AActor* OtherActor)
{
	APattern_StatePawn* Jugador = Cast<APattern_StatePawn>(OtherActor);

	if (Jugador)
	{
		DestroyPROYECTIL();
		Jugador->Damage(DanioProvocado);
	}
}

void AProyectilBala::DestroyPROYECTIL()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Projectil_Sound, GetActorLocation());
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Particles, GetActorLocation());
	Destroy();

}

