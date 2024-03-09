// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEscolta.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEscolta : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	bool escudo;
public:
	FORCEINLINE bool GetEscudo() const { return escudo; }
	FORCEINLINE void SetEscudo(bool _escudo) { escudo = _escudo; }
};
