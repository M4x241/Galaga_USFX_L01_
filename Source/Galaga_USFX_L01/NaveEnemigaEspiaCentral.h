// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaCentral.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaCentral : public ANaveEnemigaEspia
{
	GENERATED_BODY()
protected:
	virtual void Mover();
	virtual void Escapar();
};
