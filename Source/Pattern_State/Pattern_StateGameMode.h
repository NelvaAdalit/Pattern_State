// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Pattern_StateGameMode.generated.h"

UCLASS(MinimalAPI)
class APattern_StateGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APattern_StateGameMode();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class ACanionVali* CanionVali;

	FTimerHandle ManejoTiempoCambio;
	int tiempoCambio;

	void CambioDeEstado();

	float tiempoCambioEstado1;
	float tiempoCambioEstado2;
	float tiempoCambioEstado3;
	float tiempoCambioEstado4;

	int contador;

};



