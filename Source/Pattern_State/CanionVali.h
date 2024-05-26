// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IState.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CanionVali.generated.h"

UCLASS()
class PATTERN_STATE_API ACanionVali : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties

	ACanionVali();
	UStaticMeshComponent* meshCanion;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void StarStates(FString _States);
	IIState* DispararHielo;
	IIState* DispararBala;
	IIState* DispararLazer;
	IIState* DispararMisil;
	IIState* CambiarPosicionCanion;
	IIState* VolverPosiconInicialCanion;
	IIState* DesaparecerCanion;
	IIState*StateActual;
	FORCEINLINE void EstablecerState(IIState* _State);
	

	void CanionValiDispararHielo();
	void CanionValiDispararBala();
	void CanionValiDispararLazer();
	void CanionValiDispararMisil();
	void CanionValiCambiarPosicionCanion();
	void CanionValiVolverPosiconInicialCanion();
	void CanionValiDesaparecerCanion();

	//funciones para obtener los estados
	FORCEINLINE IIState* C_ObtenerState();
	FORCEINLINE IIState* C_ObtenerDispararHielo();
	FORCEINLINE IIState* C_ObtenerDispararBala();
	FORCEINLINE IIState* C_ObtenerDispararLazer();
	FORCEINLINE IIState* C_ObtenerDispararMisil();
	FORCEINLINE IIState* C_ObtenerCambiarPosicionCanion();
	FORCEINLINE IIState* C_ObtenerVolverPosiconInicialCanion();
	FORCEINLINE IIState* C_ObtenerDesaparecerCanion();
	FORCEINLINE FString C_ObtenerNombreStateActual();

};
