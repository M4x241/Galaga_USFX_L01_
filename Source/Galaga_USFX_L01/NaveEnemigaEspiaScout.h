// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaScout.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaScout : public ANaveEnemigaEspia
{
	GENERATED_BODY()
public:
	bool naveEncontrada=false;
	int bandera;
public:
	FORCEINLINE bool GetNaveEncontrada() const { return naveEncontrada; }

	FORCEINLINE void SetNaveEncontrada(bool _naveEncontrada) { naveEncontrada = _naveEncontrada; }
	virtual void Tick(float DeltaTime)override;
	
protected:
	virtual void Mover(float DeltaTime)override;
	virtual void Escapar();
};
