// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaAcrobata.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaAcrobata : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	float posicionXrandom;
	float posicionYrandom;
public:
	FORCEINLINE float GetposicionXrandom() const { return posicionXrandom; }
	FORCEINLINE float GetposicionYrandom() const { return posicionYrandom; }

	FORCEINLINE void SetposicionXrandom(float _posicionXrandoml) { posicionXrandom = _posicionXrandoml; }
	FORCEINLINE void SetposicionYrandom(float _posicionYrandom) { posicionYrandom = _posicionYrandom; }
};
