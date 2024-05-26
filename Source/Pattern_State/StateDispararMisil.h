// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IState.h"
#include "StateDispararMisil.generated.h"

UCLASS()
class PATTERN_STATE_API AStateDispararMisil : public AActor, public IIState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStateDispararMisil();

	UStaticMeshComponent* meshCanion;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "Disparar Proyectil Misil")
	class ACanionVali* CanionVali;

public:
	virtual void EstablecerCanion(class ACanionVali* _CanionVali) override;

	void activarDispararMisil() override;
	void DesactivarDisparoMisil() override;
	virtual  FString ObtenerEstado() override;



private:
	virtual void activarDispararBala() override {};
	virtual void activarDispararLazer() override {};
	virtual void activarDispararHielo() override {};
	virtual void activarCambiarPosicionCanion() override {};
	virtual void activarVolverPosiconInicialCanion() override {};
	virtual void activarDesaparecerCanion() override {};

	void InicializarCanion(FString _State) override {};


	virtual void DesactivarDisparoBala() override {};
	virtual void DesactivarDisparoLazer() override {};
	virtual void DesactivarDisparoHielo() override {};
	virtual void DesactivarCambiarPosicionCanion() override {};
	virtual void DesactivarVolverPosiconInicialCanion() override {};
	virtual void DesactivarDesaparecerCanion() override {};



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
