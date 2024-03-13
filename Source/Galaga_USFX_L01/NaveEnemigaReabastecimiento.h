// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"


UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	bool almacenamientovacio=false;
public:
	ANaveEnemigaReabastecimiento();
	FORCEINLINE bool GetAlmacenamientoVacio() const { return almacenamientovacio; }

	FORCEINLINE void SetAlmacenamientoVacio(bool _almacenamientovacio) { almacenamientovacio = _almacenamientovacio; }
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar(); //los transportistas no dispararan
	virtual void Destruirse();
	virtual void Escapar();
	
};
