// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "IStrategy.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StrategyDefensivaExtrema.generated.h"

UCLASS()
class PATTERN_STATE_API AStrategyDefensivaExtrema : public AActor, public IIStrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStrategyDefensivaExtrema();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void EjecutarE()override;
public:
	class APattern_StatePawn* PawnJugador; 

	void DesactivarDisparoExtra() ;
	
public:
	int cantidadProyectiles;
	uint32 bCanFire : 1;
	float FireRate;
	int MaxProjectile;
	int NumberFired;
	float velocidad = 8;
	FTimerHandle TimerHandle_ShotTimerExpired;

};
