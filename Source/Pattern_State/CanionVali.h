// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IState.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CanionVali.generated.h"

UCLASS()
class PATTERN_STATE_API ACanionVali : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties

	ACanionVali();
	UStaticMeshComponent* meshCanion;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	
	IIState* StateDispararHielo;
	IIState* StateDispararBala;
	IIState* StateDispararLazer;
	IIState* StateDispararMisil;
	IIState* StateActual;


public:

	IIState* getState() { return StateActual; }
	FORCEINLINE void EstablecerState(IIState* _State);//SET
	
	IIState*getDispararHielo() { return StateDispararHielo; }
	IIState*getDispararBala() { return StateDispararBala; }
	IIState*getDispararLazer() { return StateDispararLazer; }
	IIState*getDispararMisil() { return StateDispararMisil; }


	void setDispararHielo(IIState* _StateDispararHielo) { StateDispararHielo = _StateDispararHielo; }
	void setDispararBala(IIState* _StateDispararBala) { StateDispararBala = _StateDispararBala; }
	void setDispararLazer(IIState* _StateDispararLazer) { StateDispararLazer = _StateDispararLazer; }
	void setDispararMisil(IIState* _StateDispararMisil) { StateDispararMisil = _StateDispararMisil; }



	void activarDispararHielo();
	void activarDispararBala();
	void activarDispararLazer();
	void activarDispararMisil();
   void InicializarCanion(FString _State) ;

	void DesactivarDisparoHielo();
	void DesactivarDisparoBala();
	void DesactivarDisparoLazer();
	void DesactivarDisparoMisil();


	FORCEINLINE IIState* C_ObtenerEstado();
	FORCEINLINE IIState* C_ObtenerStateDispararHielo();
	FORCEINLINE IIState* C_ObtenerStateDispararBala();
	FORCEINLINE IIState* C_ObtenerStateDispararLazer();
	FORCEINLINE IIState* C_ObtenerStateDispararMisil();
	FORCEINLINE FString C_ObtenerEstadoActual();
	



public:

	FTimerHandle ManejoTiempoCambio;
	int tiempoCambio;

	void CambioDeEstado();



	int contador;
};
