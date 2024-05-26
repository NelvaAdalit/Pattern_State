// Fill out your copyright notice in the Description page of Project Settings.


#include "CanionVali.h"
#include"StateDispararHielo.h"
#include "StateDispararBala.h"
#include "StateDispararLazer.h"
#include "StateDispararMisil.h"
#include "StateCambiarPosicionCanion.h"
#include "StateVolverPosicionIncialCanion.h"
#include "StateDesaparecerCanion.h"

// Sets default values
ACanionVali::ACanionVali()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	meshCanion = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CanonMesh"));
	meshCanion->SetupAttachment(RootComponent);
	RootComponent = meshCanion;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CanonMesh(TEXT("StaticMesh'/Game/Meshes/Shield.Shield'"));
	meshCanion->SetStaticMesh(CanonMesh.Object);
	SetActorRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));

}

// Called when the game starts or when spawned
void ACanionVali::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACanionVali::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACanionVali::StarStates(FString _States)
{
	if(_States.Equals("DispararHielo")){

		DispararHielo=GetWorld()->SpawnActor<AStateDispararHielo>(AStateDispararHielo::StaticClass());
		DispararHielo->EstablecerCanion (this);
		EstablecerState(DispararHielo);
    }
	if (_States.Equals("DispararBala")) {

		DispararBala = GetWorld()->SpawnActor<AStateDispararBala>(AStateDispararBala::StaticClass());
		DispararBala->EstablecerCanion(this);
		EstablecerState(DispararBala);
	}
	if (_States.Equals("DispararLazer")) {
		DispararLazer= GetWorld()->SpawnActor<AStateDispararLazer>(AStateDispararLazer::StaticClass());
		DispararLazer->EstablecerCanion(this);
		EstablecerState(DispararLazer);	
	
	}
	if (_States.Equals("DispararMisil")) {
		DispararMisil = GetWorld()->SpawnActor<AStateDispararMisil>(AStateDispararMisil::StaticClass());
		DispararMisil->EstablecerCanion(this);
		EstablecerState(DispararMisil);
	}	
	if (_States.Equals("CambiarPosicionCanion")) {
		CambiarPosicionCanion = GetWorld()->SpawnActor<AStateCambiarPosicionCanion>(AStateCambiarPosicionCanion::StaticClass());
		CambiarPosicionCanion->EstablecerCanion(this);
		EstablecerState(CambiarPosicionCanion);
	}
	if (_States.Equals("VolverPosicionIncialCanion")) {
		VolverPosiconInicialCanion = GetWorld()->SpawnActor<AStateVolverPosicionIncialCanion>(AStateVolverPosicionIncialCanion::StaticClass());
		VolverPosiconInicialCanion->EstablecerCanion(this);
		EstablecerState(VolverPosiconInicialCanion);
	}
	if (_States.Equals("DesaparecerCanion")) {
		DesaparecerCanion = GetWorld()->SpawnActor<AStateDesaparecerCanion>(AStateDesaparecerCanion::StaticClass());
		DesaparecerCanion->EstablecerCanion(this);
		EstablecerState(DesaparecerCanion);
	}
}

void ACanionVali::EstablecerState(IIState* _State)
{
	StateActual = _State;
}

void ACanionVali::CanionValiDispararHielo()
{
	StateActual->DispararHielo();

}

void ACanionVali::CanionValiDispararBala()
{
	StateActual->DispararBala();
}

void ACanionVali::CanionValiDispararLazer()
{
		StateActual->DispararLazer();
}

void ACanionVali::CanionValiDispararMisil()
{
		StateActual->DispararMisil();

}

void ACanionVali::CanionValiCambiarPosicionCanion()
{
	StateActual->CambiarPosicionCanion();
}

void ACanionVali::CanionValiVolverPosiconInicialCanion()
{
	StateActual->VolverPosicionInicialCanion();
}

void ACanionVali::CanionValiDesaparecerCanion()
{
	StateActual->DesaparecerCanion();
}

IIState* ACanionVali::C_ObtenerState()
{
	return StateActual;
}

IIState* ACanionVali::C_ObtenerDispararHielo()
{
	return DispararHielo;
}

IIState* ACanionVali::C_ObtenerDispararBala()
{
	return DispararBala;
}

IIState* ACanionVali::C_ObtenerDispararLazer()
{
	return DispararLazer;
}

IIState* ACanionVali::C_ObtenerDispararMisil()
{
	return DispararMisil;
}

IIState* ACanionVali::C_ObtenerCambiarPosicionCanion()
{
	return CambiarPosicionCanion;
}

IIState* ACanionVali::C_ObtenerVolverPosiconInicialCanion()
{
	return VolverPosiconInicialCanion;
}

IIState* ACanionVali::C_ObtenerDesaparecerCanion()
{
	return DesaparecerCanion;
}

FString ACanionVali::C_ObtenerNombreStateActual()
{
	if (StateActual) {
		return StateActual->ObtenerEstado();
	}
	else {
		return "No hay estado actual";
	
	
	}
}
