// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstrategias.h"
#include "EstrategiaFuerza.generated.h"
UCLASS()
class PATTERN_STATE_API AEstrategiaFuerza : public AActor,public IIEstrategias
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaFuerza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void EmplearE() override;
	class APattern_StatePawn* PawnJugador;
	


};
