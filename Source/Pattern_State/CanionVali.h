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
	
	class AStateDispararHielo* StateDispararHielo;
	class AStateDispararBala* StateDispararBala;
	class AStateDispararLazer* StateDispararLazer;
	class AStateDispararMisil* StateDispararMisil;
	IIState* StateActual;


public:

	IIState* getState() { return StateActual; }
	FORCEINLINE void EstablecerState(IIState* _State);//SET
	
	class AStateDispararHielo* getDispararHielo() { return StateDispararHielo; }
	class AStateDispararBala* getDispararBala() { return StateDispararBala; }
	class AStateDispararLazer* getDispararLazer() { return StateDispararLazer; }
	class AStateDispararMisil* getDispararMisil() { return StateDispararMisil; }



	void setDispararHielo(class AStateDispararHielo* _StateDispararHielo) { StateDispararHielo = _StateDispararHielo; }
	void setDispararBala(class AStateDispararBala* _StateDispararBala) { StateDispararBala = _StateDispararBala; }
	void setDispararLazer(class AStateDispararLazer* _StateDispararLazer) { StateDispararLazer = _StateDispararLazer; }
	void setDispararMisil(class AStateDispararMisil* _StateDispararMisil) { StateDispararMisil = _StateDispararMisil; }



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
public:
	int cantidadProyectiles;
	uint32 bCanFire : 1;//entero de 32 bits
	float FireRate;
	int MaxProjectile;
	float velocidad = 8;
	int NumberFired;
	FTimerHandle TimerHandle_ShotTimerExpired;
};
