// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
class AGalaga_USFX_L01Pawn;
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
	UPROPERTY(VisibleAnywhere)
	int ban = 0;
	FVector ubicacionE;
	UPROPERTY(VisibleAnywhere)
	AGalaga_USFX_L01Pawn* naveobjetivo;

public:
	virtual void Tick(float DeltaTime)override;
	FORCEINLINE bool GetBlindaje() const { return dispersion; }

	FORCEINLINE void SetBlindaje(bool _dispersion) { dispersion = _dispersion; }
	//me da la ubiacion del enemigo
	FORCEINLINE void SetposicionEnemiga(FVector _ubicacionE) { ubicacionE =_ubicacionE; }
	FORCEINLINE FVector GetposicionEnemiga() { return ubicacionE; }
	ANaveEnemigaTransporteLigero(); 
protected:
	virtual void Mover(float DeltaTime)override;
	virtual void Destruirse();
	virtual void Escapar();
	
};
