// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
class AGalaga_USFX_L01Pawn;
#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaMadre.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaMadre : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
private:
	int TiposNaves;
	UPROPERTY( VisibleAnywhere)
	int posicionale;
	bool ban = 1;

	//nave enemiga destrucion
	//FVector NaveAliada;
	

public:
	FORCEINLINE int GetTiposNaves() const { return TiposNaves; }
	FORCEINLINE void SetTiposNaves(int _TiposNaves) { TiposNaves = _TiposNaves; }
	virtual void Tick(float DeltaTime)override;
	ANaveEnemigaNodrizaMadre();
protected:
	virtual void Mover(float DeltaTime)override;
	virtual void Disparar();
	virtual void Destruirse();
};
