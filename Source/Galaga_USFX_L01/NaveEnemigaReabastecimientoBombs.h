// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoBombs.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimientoBombs : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
private:
	float bandera = 1;
public:
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void Mover(float DeltaTime) override;
	virtual void Destruirse();
	virtual void Escapar();
};
