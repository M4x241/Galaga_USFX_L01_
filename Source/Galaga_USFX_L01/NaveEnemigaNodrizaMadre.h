// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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
public:
	FORCEINLINE int GetTiposNaves() const { return TiposNaves; }
	FORCEINLINE void SetTiposNaves(int _TiposNaves) { TiposNaves = _TiposNaves; }
	virtual void Tick(float DeltaTime)override;
protected:
	virtual void Mover(float DeltaTime)override;
	virtual void Disparar();
	virtual void Destruirse();
};
