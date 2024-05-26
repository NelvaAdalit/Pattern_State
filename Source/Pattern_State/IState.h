// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IState.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIState : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PATTERN_STATE_API IIState
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

    virtual void EstablecerCanion(class ACanionVali* _CanionVali)=0;

	

	virtual void activarDispararHielo()=0;
	virtual void activarDispararBala()=0;
	virtual void activarDispararLazer()=0;
	virtual void activarDispararMisil()=0;
	virtual void activarCambiarPosicionCanion()=0;
	virtual void activarVolverPosiconInicialCanion()=0;
	virtual void activarDesaparecerCanion()=0;
	virtual void InicializarCanion(FString _State)=0;
	virtual void DesactivarDisparoHielo()=0;
	virtual void DesactivarDisparoBala()=0;
	virtual void DesactivarDisparoLazer()=0;
	virtual void DesactivarDisparoMisil()=0;
	virtual void DesactivarCambiarPosicionCanion()=0;
	virtual void DesactivarVolverPosiconInicialCanion()=0;
	virtual void DesactivarDesaparecerCanion()=0;



	virtual FString ObtenerEstado() = 0;
};
