// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IState.h"
#include "StateDispararBala.generated.h"

UCLASS()
class PATTERN_STATE_API AStateDispararBala : public AActor, public IIState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStateDispararBala();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "Disparar Proyectil Bala")
	class ACanionVali* CanionVali;

public:
	//establecer el canion
	void EstablecerCanion(class ACanionVali* _CanionVali) override;
	void DispararBala() override;
	void DesactivarDisparoBala() override ;
	FORCEINLINE FString ObtenerEstado() override;




private:
	void DispararHielo() override {};
	void DispararLazer() override {};
	void DispararMisil() override {};



	void InicializarCanion(FString _Estados) override {};

	void DesactivarDisparoHielo() override {};
	void DesactivarDisparoLazer() override {};
	void DesactivarDisparoMisil() override {};




public:

	int cantidadProyectiles;
	uint32 bCanFire : 1;
	float FireRate;
	int MaxProjectile;
	float velocidad = 8;
	int NumberFired;
	FTimerHandle TimerHandle_ShotTimerExpired;


};
