// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaScout.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaScout : public ANaveEnemigaEspia
{
	GENERATED_BODY()
protected:
	virtual void Mover();
	virtual void Escapar();
};
