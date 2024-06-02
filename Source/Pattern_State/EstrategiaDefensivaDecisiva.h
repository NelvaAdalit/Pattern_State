// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IStrategy.h"
#include "EstrategiaDefensivaDecisiva.generated.h"

UCLASS()
class PATTERN_STATE_API AEstrategiaDefensivaDecisiva : public AActor, public IIStrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaDefensivaDecisiva();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	class APattern_StatePawn* PawnJugador;
	virtual void EjecutarE() override;

public:
	int cantidadProyectiles;
	uint32 bCanFire : 1;
	int MaxProjectile;
	int NumberFired;
	float velocidad = 8;
	FTimerHandle TimerHandle_ShotTimerExpired;
	void FireAgain();


};
