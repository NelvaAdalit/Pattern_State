// Fill out your copyright notice in the Description page of Project Settings.


#include "CanionVali.h"
#include"StateDispararHielo.h"
#include "StateDispararBala.h"
#include "StateDispararLazer.h"
#include "StateDispararMisil.h"


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
	SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
	SetActorRelativeScale3D(FVector(4.0f, 4.0f,4.0f));


}

// Called when the game starts or when spawned
void ACanionVali::BeginPlay()
{
	Super::BeginPlay();
	contador = 0;
	tiempoCambio = 2;
	GetWorldTimerManager().SetTimer(ManejoTiempoCambio, this, &ACanionVali::CambioDeEstado, tiempoCambio, true);

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
	StateActual->DispararHielo();

	//UE_LOG(LogTemp, Warning, TEXT("Disparando Hielo del canonvali"));

}

void ACanionVali::activarDispararBala()
{
	StateActual->DispararBala();
	UE_LOG(LogTemp, Warning, TEXT("Disparando Bala del canonvali"));
}

void ACanionVali::activarDispararLazer()
{
	StateActual->DispararLazer();
}

void ACanionVali::activarDispararMisil()
{
	StateActual->DispararMisil();
}


void ACanionVali::InicializarCanion(FString _State)
{

	if (_State.Equals("Dispararhielo")) {
		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Se creo el estado DispararHielo")));
	    StateDispararHielo = GetWorld()->SpawnActor<AStateDispararHielo>(AStateDispararHielo::StaticClass());	
		StateDispararHielo->EstablecerCanion(this);
		EstablecerState(StateDispararHielo);
		
	}
	else if (_State.Equals("DispararBala")) {
		StateDispararBala = GetWorld()->SpawnActor<AStateDispararBala>(AStateDispararBala::StaticClass());
		StateDispararBala->EstablecerCanion(this);
		EstablecerState(StateDispararBala);

	}
	else if (_State.Equals("DispararLazer")) {
		StateDispararLazer = GetWorld()->SpawnActor<AStateDispararLazer>(AStateDispararLazer::StaticClass());
		StateDispararLazer->EstablecerCanion(this);
		EstablecerState(StateDispararLazer);

	}
	else if (_State.Equals("DispararMisil")) {
		StateDispararMisil = GetWorld()->SpawnActor<AStateDispararMisil>(AStateDispararMisil::StaticClass());
		StateDispararMisil->EstablecerCanion(this);
		EstablecerState(StateDispararMisil);

	
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("No se pudo crear el estado")));
	}

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


FString ACanionVali::C_ObtenerEstadoActual()
{
	if (StateActual) {
		return "El estado actual del canion es: " +StateActual->ObtenerEstado();
	}
	else {
		return "No hay estado actual";
	
	}
}

void ACanionVali::CambioDeEstado()
{
	
		if (contador == 0)
		{
			InicializarCanion("Dispararhielo");
			
			
			activarDispararHielo();

		}
		if (contador == 1)
		{
			InicializarCanion("DispararBala");
			
			//UE_LOG(LogTemp, Warning, TEXT("El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual());

			activarDispararBala();
		}
		if (contador == 2)
		{
			InicializarCanion("DispararLazer");
			
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Se creo el estado DispararLazer")));
			//UE_LOG(LogTemp, Warning, TEXT("El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual());

			activarDispararLazer();
		}
		if (contador == 3)
		{
		    InicializarCanion("DispararMisil");
			
			//UE_LOG(LogTemp, Warning, TEXT("El estado actual es: %s"), *CanionVali->C_ObtenerEstadoActual());

			activarDispararMisil();

			contador = -1;
		}

	     contador ++;

		

}

	
	

