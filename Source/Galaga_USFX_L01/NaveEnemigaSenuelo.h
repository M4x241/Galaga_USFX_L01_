// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaSenuelo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaSenuelo : public ANaveEnemiga
{
	GENERATED_BODY()
public:
	int numBalines;
private:
	//esta nave al ser destruida detonara 6 balines hacia la nave amiga
	FORCEINLINE int GetNumBalines() const { return numBalines; }
	FORCEINLINE void SetNumBalines(int _numBalines) { numBalines = _numBalines; }
	
};
