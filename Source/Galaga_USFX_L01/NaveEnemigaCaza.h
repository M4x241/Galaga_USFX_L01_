// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * caza alfa, caza delta, difentes tipos de bombas de calor y explosivas
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantidadBombas;

public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas()const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
