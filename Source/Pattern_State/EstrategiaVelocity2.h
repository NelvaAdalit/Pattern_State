// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IStrategyVelocity.h"
#include "EstrategiaVelocity2.generated.h"

UCLASS()
class PATTERN_STATE_API AEstrategiaVelocity2 : public AActor,public IIStrategyVelocity
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaVelocity2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	class APattern_StatePawn* PawnJugador;
	virtual void MoveE() override;

};
