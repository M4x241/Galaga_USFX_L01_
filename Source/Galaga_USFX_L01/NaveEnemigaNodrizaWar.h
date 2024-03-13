// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaWar.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaWar : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
public:
	int posicionale;
	bool ban = true;
	virtual void Tick(float DeltaTime)override;
protected:
	virtual void Mover(float DeltaTime)override;
	virtual void Disparar();
	virtual void Destruirse();
};
