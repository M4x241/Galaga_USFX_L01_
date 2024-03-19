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
private:
	bool dispersion;
	UPROPERTY(VisibleAnywhere)
	int aleX;
	int aleY;
	int ban = 51;
public:
	virtual void Tick(float DeltaTime)override;
	FORCEINLINE bool GetBlindaje() const { return dispersion; }

	FORCEINLINE void SetBlindaje(bool _dispersion) { dispersion = _dispersion; }
protected:
	virtual void Mover(float DeltaTime)override;
	virtual void Destruirse();
	virtual void Escapar();
	
};
