// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 * clases hijas abastecimiento de bombas y de combustible;
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int capacidadAlmacenamiento;
public:
	FORCEINLINE int GetCapacidadAlmacenamiento() const { return capacidadAlmacenamiento; }

	FORCEINLINE void SetCapacidadAlmacenamiento(int _capacidadAlmacenamiento) { capacidadAlmacenamiento = _capacidadAlmacenamiento; }

protected:
	virtual void Mover();
	//virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
