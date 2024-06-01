// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IState.h"
#include "StateDispararHielo.generated.h"

UCLASS()
class PATTERN_STATE_API AStateDispararHielo : public AActor, public IIState
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStateDispararHielo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(VisibleAnywhere, Category = "Disparar Proyectil Hielo")
	class ACanionVali* CanionVali;

public:
	virtual void EstablecerCanion(class ACanionVali* _CanionVali) override;

	void DispararHielo() override;

	virtual  FString ObtenerEstado() override;

	void DesactivarDisparoHielo() override ;




private:
	//cambiar protecteed
	virtual void DispararBala() override {};
	virtual void DispararLazer() override {};
	virtual void DispararMisil() override {};

	void InicializarCanion(FString _State) override {};

	virtual void DesactivarDisparoBala() override {};
	virtual void DesactivarDisparoLazer() override {};
	virtual void DesactivarDisparoMisil() override {};





public:
	int cantidadProyectiles;
	uint32 bCanFire : 1;
	float FireRate;
	int MaxProjectile;
	int NumberFired;
	float velocidad = 8;
	FTimerHandle TimerHandle_ShotTimerExpired;

};
