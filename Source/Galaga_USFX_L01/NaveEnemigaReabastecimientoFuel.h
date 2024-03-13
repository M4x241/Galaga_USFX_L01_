// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoFuel.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimientoFuel : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
public:
	int VolumenCombustible;
	int bandera = 1;
public:
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE int GetVolumenCombustible() const { return VolumenCombustible; }

	FORCEINLINE void SetVolumenCombustible(int _VolumenCombustible) { VolumenCombustible = _VolumenCombustible; }
protected:
	virtual void Mover(float DeltaTime) override;
	virtual void Destruirse();
	virtual void Escapar();
};
