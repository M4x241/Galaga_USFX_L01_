// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int rangoSonda;
public:
	FORCEINLINE int GetRangoSonda() const { return rangoSonda; }

	FORCEINLINE void SetRangoSonda(int _rangoSonda) { rangoSonda = _rangoSonda; }
	
protected:
	virtual void Mover();
	//virtual void Disparar();
	//virtual void Destruirse();
	virtual void Escapar();
};
