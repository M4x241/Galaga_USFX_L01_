// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoBombs.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimientoBombs : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
private:
	int CantidadBombas;
	float tmpSuelto = 3;
	float tmpBomb=0;
	bool soltar = false;
	UPROPERTY(VisibleAnywhere)
	int AleX;
	UPROPERTY(VisibleAnywhere)
	int AleY;
public:
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE int GetCantidadBombas() const { return CantidadBombas; }
	void soltarBomba(bool _soltar);
	

	 

	FORCEINLINE void SetCantidadBombas(int _CantidadBombas) { CantidadBombas = _CantidadBombas; }
protected:
	virtual void Mover(float DeltaTime) override;
	virtual void Destruirse();
	virtual void Escapar();
};
