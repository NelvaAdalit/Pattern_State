// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IState.h"
#include "StateCambiarPosicionCanion.generated.h"

UCLASS()
class PATTERN_STATE_API AStateCambiarPosicionCanion : public AActor, public IIState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStateCambiarPosicionCanion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "Cambiar Posicion Canion")
	class ACanionVali* CanionVali;

public:

	void EstablecerCanion(class ACanionVali* _CanionVali) override;
	void CambiarPosicionCanion() override;
	FORCEINLINE FString ObtenerEstado() override;




private:
	void DispararHielo() override {};
	void DispararBala() override {};
	void DispararLazer() override {};
	void DispararMisil() override {};
	void VolverPosicionInicialCanion() override {};
	void DejarDeDisparar() override {};
	void DesaparecerCanion() override {};

};
