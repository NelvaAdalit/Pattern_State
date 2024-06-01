// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IState.h"
#include "StateDesaparecerCanion.generated.h"

UCLASS()
class PATTERN_STATE_API AStateDesaparecerCanion : public AActor, public IIState
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStateDesaparecerCanion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "Desaparecer Canion")
	class ACanionVali* CanionVali;

public:

	void EstablecerCanion(class ACanionVali* _CanionVali) override;
	void activarDesaparecerCanion() override;
	virtual FString ObtenerEstado() override;
	void DesactivarDesaparecerCanion() override;




private:

	virtual void activarDispararMisil() override {};
	virtual void activarDispararBala() override {};
	virtual void activarDispararLazer() override {};
	virtual void activarDispararHielo() override {};
	virtual void activarCambiarPosicionCanion() override {};
	virtual void activarVolverPosiconInicialCanion() override {};
	
	void InicializarCanion(FString _State) override {};

	virtual void DesactivarDisparoBala() override {};
	virtual void DesactivarDisparoLazer() override {};
	virtual void DesactivarDisparoHielo() override {};
	virtual void DesactivarCambiarPosicionCanion() override {};
	virtual void DesactivarVolverPosiconInicialCanion() override {};
	virtual void DesactivarDisparoMisil() override {};
};
