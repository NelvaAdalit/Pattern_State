// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IState.h"
#include "StateVolverPosicionIncialCanion.generated.h"

UCLASS()
class PATTERN_STATE_API AStateVolverPosicionIncialCanion : public AActor, public IIState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStateVolverPosicionIncialCanion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "Volver Posicion Inicial ")
	class ACanionVali* CanionVali;

public:

	void EstablecerCanion(class ACanionVali* _CanionVali) override;
	void VolverPosicionInicialCanion() override;
	FORCEINLINE FString ObtenerEstado() override;




private:
	void DispararHielo() override {};
	void DispararBala() override {};
	void DispararLazer() override {};
	void DispararMisil() override {};
	void CambiarPosicionCanion() override {};
	void DejarDeDisparar() override {};
	void DesaparecerCanion() override {};

};
