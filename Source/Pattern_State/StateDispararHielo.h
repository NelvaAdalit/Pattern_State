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
protected:
	UPROPERTY(VisibleAnywhere, Category = "Disparar Proyectil Hielo")
	class ACanionVali* CanionVali;

public:
	//establecer el canion
	void EstablecerCanion(class ACanionVali* _CanionVali) override;
	void DispararHielo() override;
	FORCEINLINE FString ObtenerEstado() override;




private:
	 void DispararBala() override {};
	 void DispararLazer() override {};
	 void DispararMisil() override {};
	 void CambiarPosicionCanion() override {};
	 void VolverPosicionInicialCanion() override {};
	 void DejarDeDisparar() override {};
	 void DesaparecerCanion() override {};


};
