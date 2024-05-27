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
	SetActorRelativeScale3D(FVector(4.0f, 4.0f,4.0f));

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

void ACanionVali::EstablecerState(IIState* _State)
{

		StateActual = _State;

}

void ACanionVali::activarDispararHielo()
{
	StateActual->activarDispararHielo();

}

void ACanionVali::activarDispararBala()
{
		StateActual->activarDispararBala();
}

void ACanionVali::activarDispararLazer()
{
	StateActual->activarDispararLazer();
}

void ACanionVali::activarDispararMisil()
{
	StateActual->activarDispararMisil();
	
}

void ACanionVali::activarCambiarPosicionCanion()
{
	StateActual->activarCambiarPosicionCanion();
}

void ACanionVali::activarVolverPosiconInicialCanion()
{
	StateActual->activarVolverPosiconInicialCanion();
}

void ACanionVali::activarDesaparecerCanion()
{
	StateActual->activarDesaparecerCanion();
}



void ACanionVali::InicializarCanion(FString _State)

{

	if (_State.Equals("Dispararhielo")) {
		StateDispararHielo= GetWorld()->SpawnActor<AStateDispararHielo>(AStateDispararHielo::StaticClass());
		StateDispararHielo->EstablecerCanion(this);
		EstablecerState(StateDispararHielo);
	}
	if (_State.Equals("DispararBala")) {
		StateDispararBala = GetWorld()->SpawnActor<AStateDispararBala>(AStateDispararBala::StaticClass());
		StateDispararBala->EstablecerCanion(this);
		EstablecerState(StateDispararBala);
	}
	if (_State.Equals("DispararLazer")) {
		StateDispararLazer = GetWorld()->SpawnActor<AStateDispararLazer>(AStateDispararLazer::StaticClass());
		StateDispararLazer->EstablecerCanion(this);
		EstablecerState(StateDispararLazer);
	}
	if (_State.Equals("DispararMisil")) {
		StateDispararMisil = GetWorld()->SpawnActor<AStateDispararMisil>(AStateDispararMisil::StaticClass());
		StateDispararMisil->EstablecerCanion(this);
		EstablecerState(StateDispararMisil);
	}
	if (_State.Equals("CambiarPosicionCanion")) {
		StateCambiarPosicionCanion = GetWorld()->SpawnActor<AStateCambiarPosicionCanion>(AStateCambiarPosicionCanion::StaticClass());
		StateCambiarPosicionCanion->EstablecerCanion(this);
		EstablecerState(StateCambiarPosicionCanion);
	}	
	if (_State.Equals("VolverPosicionInicialCanion")) {
		StateVolverPosiconInicialCanion = GetWorld()->SpawnActor<AStateVolverPosicionIncialCanion>(AStateVolverPosicionIncialCanion::StaticClass());
		StateVolverPosiconInicialCanion->EstablecerCanion(this);
		EstablecerState(StateVolverPosiconInicialCanion);
	}
	if (_State.Equals("DesaparecerCanion")) {
		StateDesaparecerCanion = GetWorld()->SpawnActor<AStateDesaparecerCanion>(AStateDesaparecerCanion::StaticClass());
		StateDesaparecerCanion->EstablecerCanion(this);
		EstablecerState(StateDesaparecerCanion);
	}

	//StateDispararHielo = GetWorld()->SpawnActor<AStateDispararHielo>(AStateDispararHielo::StaticClass());
    //   StateDispararHielo->EstablecerCanion(this);
	//StateDispararBala = GetWorld()->SpawnActor<AStateDispararBala>(AStateDispararBala::StaticClass());
	//StateDispararBala->EstablecerCanion(this);
	//StateDispararLazer = GetWorld()->SpawnActor<AStateDispararLazer>(AStateDispararLazer::StaticClass());
	//StateDispararLazer->EstablecerCanion(this);
	//StateDispararMisil = GetWorld()->SpawnActor<AStateDispararMisil>(AStateDispararMisil::StaticClass());
	//StateDispararMisil->EstablecerCanion(this);
	//StateCambiarPosicionCanion = GetWorld()->SpawnActor<AStateCambiarPosicionCanion>(AStateCambiarPosicionCanion::StaticClass());
	//StateCambiarPosicionCanion->EstablecerCanion(this);
	//StateVolverPosiconInicialCanion = GetWorld()->SpawnActor<AStateVolverPosicionIncialCanion>(AStateVolverPosicionIncialCanion::StaticClass());
	//StateVolverPosiconInicialCanion->EstablecerCanion(this);
	


}

void ACanionVali::DesactivarDisparoHielo()
{
	StateActual->DesactivarDisparoHielo();
}

void ACanionVali::DesactivarDisparoBala()
{
	StateActual->DesactivarDisparoBala();
}

void ACanionVali::DesactivarDisparoLazer()
{
}

void ACanionVali::DesactivarDisparoMisil()
{
	StateActual->DesactivarDisparoMisil();
}

void ACanionVali::DesactivarCambiarPosicionCanion()
{
	StateActual->DesactivarCambiarPosicionCanion();
}

void ACanionVali::DesactivarVolverPosiconInicialCanion()
{
	StateActual->DesactivarVolverPosiconInicialCanion();
}

void ACanionVali::DesactivarDesaparecerCanion()
{
	StateActual->DesactivarDesaparecerCanion();
}

IIState* ACanionVali::C_ObtenerEstado()
{
	return StateActual;
}

IIState* ACanionVali::C_ObtenerStateDispararHielo()
{
	return StateDispararHielo; 

}

IIState* ACanionVali::C_ObtenerStateDispararBala()
{
	return StateDispararBala;
}

IIState* ACanionVali::C_ObtenerStateDispararLazer()
{
	return StateDispararLazer;
}

IIState* ACanionVali::C_ObtenerStateDispararMisil()
{
	return StateDispararMisil;
}

IIState* ACanionVali::C_ObtenerStateCambiarPosicionCanion()
{
	return StateCambiarPosicionCanion;
}

IIState* ACanionVali::C_ObtenerStateVolverPosiconInicialCanion()
{
	return StateVolverPosiconInicialCanion;
}

IIState* ACanionVali::C_ObtenerStateDesaparecerCanion()
{
	return StateDesaparecerCanion;
}

FString ACanionVali::C_ObtenerEstadoActual()
{
	if (StateActual) {
		return "El estado actual del canion es: " +StateActual->ObtenerEstado();
	}
	else {
		return "No hay estado actual";
	
	}
}

