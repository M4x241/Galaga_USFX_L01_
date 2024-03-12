// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaAlfa.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaAlfa : public ANaveEnemigaCaza
{
	GENERATED_BODY()
private:
	int bandera=1;
public:
	virtual void Tick(float DeltaTime) override;
	ANaveEnemigaCazaAlfa();
	virtual void Mover(float DeltaTime) override;
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
