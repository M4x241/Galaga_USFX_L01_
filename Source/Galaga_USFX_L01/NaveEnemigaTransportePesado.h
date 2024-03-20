// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransportePesado.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransportePesado : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
private:
	int blindaje;
public:
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE int GetBlindaje() const { return blindaje; }

	FORCEINLINE void SetBlindaje(int _blindaje) { blindaje = _blindaje; }
	//ANaveEnemigaTransportePesado();
protected:
	virtual void Mover(float DeltaTime) override;
	virtual void Destruirse();
	virtual void Escapar();
	
};
