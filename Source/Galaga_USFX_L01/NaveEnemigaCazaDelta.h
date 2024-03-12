// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaDelta.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaDelta : public ANaveEnemigaCaza
{
	GENERATED_BODY()
	int bandera=1;
public:
	virtual void Tick(float DeltaTime) override;
	ANaveEnemigaCazaDelta();
	virtual void Mover(float DeltaTime) override;
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
