// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * nodriza creadora, nodriza destructora
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	float escudo;
	float aumentoTamanio;

public:
	FORCEINLINE int GetEscudo() const { return escudo; }
	FORCEINLINE int GetAumentoTamanio() const { return aumentoTamanio; }

	FORCEINLINE void SetEscudo(int _escudo) { escudo = _escudo; }
	FORCEINLINE void SetAumentoTamanio(int _aumentoTamanio) { aumentoTamanio = _aumentoTamanio; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	//virtual void Escapar();

};
