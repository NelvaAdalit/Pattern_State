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
	void activarVolverPosiconInicialCanion() override;
	virtual  FString ObtenerEstado() override;
	void DesactivarVolverPosiconInicialCanion() override;
private:
	virtual void activarDispararBala() override {};
	virtual void activarDispararLazer() override {};
	virtual void activarDispararHielo() override {};
	virtual void activarCambiarPosicionCanion() override {};
	virtual void activarDispararMisil() override {};
	virtual void activarDesaparecerCanion() override {};

	virtual void InicializarCanion(FString _State) override {};


	virtual void DesactivarDisparoBala() override {};
	virtual void DesactivarDisparoLazer() override {};
	virtual void DesactivarDisparoHielo() override {};
	virtual void DesactivarCambiarPosicionCanion() override {};
	virtual void DesactivarDisparoMisil() override {};
	virtual void DesactivarDesaparecerCanion() override {};

};
