// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * nodriza madre, nodriza war algunos niveles sera de destruir a la nave creadora y en otras a la nave de guerra
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	float escudo;
	float aumentoTamanio;

public:
	ANaveEnemigaNodriza();
	FORCEINLINE int GetEscudo() const { return escudo; }
	FORCEINLINE int GetAumentoTamanio() const { return aumentoTamanio; }

	FORCEINLINE void SetEscudo(int _escudo) { escudo = _escudo; }
	FORCEINLINE void SetAumentoTamanio(int _aumentoTamanio) { aumentoTamanio = _aumentoTamanio; }
	virtual void Tick(float DeltaTime)override;

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	//virtual void Escapar();

};
