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
	virtual void DispararHielo()=0;
	virtual void DispararBala()=0;
	virtual void DispararLazer()=0;
	virtual void DispararMisil()=0;
	virtual void InicializarCanion(FString _State)=0;
	virtual FString ObtenerEstado() = 0;


	virtual void DesactivarDisparoHielo()=0;
	virtual void DesactivarDisparoBala()=0;
	virtual void DesactivarDisparoLazer()=0;
	virtual void DesactivarDisparoMisil()=0;



	int NumberFired;




};
