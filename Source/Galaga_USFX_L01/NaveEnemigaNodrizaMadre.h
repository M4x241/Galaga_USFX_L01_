// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaMadre.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaMadre : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
};
