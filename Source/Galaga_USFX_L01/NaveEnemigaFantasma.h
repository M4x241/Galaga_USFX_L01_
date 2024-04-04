// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "MovimientoRombo.h"
#include "NaveEnemigaFantasma.generated.h"
class UMovimientoRombo;
/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaFantasma : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int tiempoInvisible;
	UMovimientoRombo* movimientoRombo;

public:
	ANaveEnemigaFantasma(); 
	FORCEINLINE int GetTiempoInvisible() const { return tiempoInvisible; }
	FORCEINLINE void SetTiempoInvisble(int _tiempoInvisible) { tiempoInvisible = _tiempoInvisible; }
};
