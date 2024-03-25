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
	int cantidadBombas;
	int vueltas=0;
	UPROPERTY(VisibleAnywhere)
	int banderaA=3;
	UPROPERTY(VisibleAnywhere);
	FVector posicionalfa;
public:
	virtual void Tick(float DeltaTime) override;
	ANaveEnemigaCazaAlfa();
	FORCEINLINE int GetCantidadBombas()const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
protected:
	virtual void Mover(float DeltaTime) override;
	virtual void Disparar(FVector FireDirection);
	virtual void Destruirse();
	virtual void Escapar();

	
};
