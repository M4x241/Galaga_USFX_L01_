// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaGeneral.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaGeneral : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	bool escudo;
	int mulProyectil;
public:
	FORCEINLINE bool GetEscudo() const { return escudo; }
	FORCEINLINE int GetMulProyectil() const { return mulProyectil; }

	FORCEINLINE void SetEscudo(bool _escudo) { escudo = _escudo; }
	FORCEINLINE void SetMulProyectil(int _mulProyectil) { mulProyectil = _mulProyectil; }
};
