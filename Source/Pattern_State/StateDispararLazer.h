// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IState.h"
#include "StateDispararLazer.generated.h"

UCLASS()
class PATTERN_STATE_API AStateDispararLazer : public AActor, public IIState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStateDispararLazer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "Disparar Proyectil Lazer")
	class ACanionVali* CanionVali;

public:
	//establecer el canion
	void EstablecerCanion(class ACanionVali* _CanionVali) override;
	void DispararLazer() override;
	void DejarDeDisparar() override;
	FORCEINLINE FString ObtenerEstado() override;




private:
	void DispararHielo() override {};
	void DispararBala() override {};
	void DispararMisil() override {};
	void CambiarPosicionCanion() override {};
	void VolverPosicionInicialCanion() override {};
	void DesaparecerCanion() override {};

public:
	int dureza;
	int cantidadProyectiles;
	uint32 bCanFire : 1;//entero de 32 bits
	float FireRate;
	int MaxProjectile;
	int NumberFired;
	int direccion = 1;
	float velocidad = 8;
	FTimerHandle TimerHandle_ShotTimerExpired;
};
