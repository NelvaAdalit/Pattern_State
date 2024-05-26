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
	void activarCambiarPosicionCanion() override;
	virtual FString ObtenerEstado() override;
	void DesactivarCambiarPosicionCanion() override;

private:
	virtual void activarDispararBala() override {};
	virtual void activarDispararLazer() override {};
	virtual void activarDispararHielo() override {};
	virtual void activarDispararMisil() override {};
	virtual void activarVolverPosiconInicialCanion() override {};
	virtual void activarDesaparecerCanion() override {};

	void InicializarCanion(FString _State) override {};


	virtual void DesactivarDisparoBala() override {};
	virtual void DesactivarDisparoLazer() override {};
	virtual void DesactivarDisparoHielo() override {};
	virtual void DesactivarDisparoMisil() override {};
	virtual void DesactivarVolverPosiconInicialCanion() override {};
	virtual void DesactivarDesaparecerCanion() override {};
};
