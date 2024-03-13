// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteLigero.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteLigero : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere)
	int aleX;
	int aleY;
	int ban = 51;
	virtual void Tick(float DeltaTime)override;
protected:
	virtual void Mover(float DeltaTime)override;
	virtual void Destruirse();
	virtual void Escapar();
	
};
