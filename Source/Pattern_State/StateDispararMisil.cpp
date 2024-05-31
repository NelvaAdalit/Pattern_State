// Fill out your copyright notice in the Description page of Project Settings.


#include "StateDispararMisil.h"
#include "Proyectil.h"
#include "CanionVali.h"

// Sets default values
AStateDispararMisil::AStateDispararMisil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//meshCanion = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CanonMesh"));
	//meshCanion->SetupAttachment(RootComponent);
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> CanonMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	//meshCanion->SetStaticMesh(CanonMesh.Object);
	//RootComponent = meshCanion;

	MaxProjectile = 1;
	bCanFire = true;

//SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));

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
	CanionVali = Cast<ACanionVali>(_CanionVali);//castear sirve para convertir un tipo de dato a otro
	CanionVali->setDispararMisil(this);//se le asigna el estado al canion
	CanionVali->GetActorLocation();
}

void AStateDispararMisil::EstadoDispararMisil()
{
	CanionVali=Cast<ACanionVali>(StaticClass());
	CanionVali->activarDispararMisil();
}



FString AStateDispararMisil::ObtenerEstado()
{
	return "Canion con Proyectil Misil";
}





