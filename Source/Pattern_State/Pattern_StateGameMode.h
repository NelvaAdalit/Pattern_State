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
	
	class ACanionVali* CanionVali;

};



