// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaWar.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaWar : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
private:
	int numCanones;
	int posicionale;
	bool ban = true;
public:
	FORCEINLINE int GetNumCanones() const { return numCanones; }
	FORCEINLINE void SetAumentoTamanio(int _numCanones) { numCanones =_numCanones; }

	virtual void Tick(float DeltaTime)override;
protected:
	virtual void Mover(float DeltaTime)override;
	virtual void Disparar();
	virtual void Destruirse();
};
