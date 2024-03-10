// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * naves hijas, espia scout, iniciara la deteccion de nave, envia la posicion del jugador a la nave central
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int rangoSondeo;
public:
	ANaveEnemigaEspia();
	FORCEINLINE int GetRangoSondeo() const { return rangoSondeo; }

	FORCEINLINE void SetRangoSonda(int _rangoSondeo) { rangoSondeo = _rangoSondeo; }
	
protected:
	virtual void Mover();
	//virtual void Disparar();
	//virtual void Destruirse();
	virtual void Escapar();
};
