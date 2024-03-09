// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavesRestantes.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANavesRestantes : public AActor
{
	GENERATED_BODY()
private:
	float width;
	float heigth;
	float posicionX;
	float posicionY;
	float posicionZ;
	int totalNaves;
	int navesMax;

public:
	//Getters
	FORCEINLINE float GetWidth() const { return width; }
	FORCEINLINE float GetHeigth() const { return heigth; }
	FORCEINLINE float GetPosicionX() const { return posicionX; }
	FORCEINLINE float GetPosicionY() const { return posicionY; }
	FORCEINLINE float GetPosicionZ() const { return posicionZ; }
	FORCEINLINE int GetTotalNaves() const { return totalNaves; }
	FORCEINLINE int GetNavesMax() const { return navesMax; }

	//setter
	FORCEINLINE void SetWidth(float _width) { width = _width; }
	FORCEINLINE void SetHeigth(float _heigth) { heigth = _heigth; }
	FORCEINLINE void SetPosicionX(float _posicionX) { posicionX = _posicionX; }
	FORCEINLINE void SetPosicionY(float _posicionY) { posicionY = _posicionY; }
	FORCEINLINE void SetPosicionZ(float _posicionZ) { posicionZ = _posicionZ; }
	FORCEINLINE void SetTotalNaves(int _totalNaves) { totalNaves = _totalNaves; }
	FORCEINLINE void SetNavesMax(int _navesMax) { navesMax = _navesMax; }

	//generador y eliminador de las vidas
	FORCEINLINE void addNave(int _score);
	FORCEINLINE void deleteNave();
	


public:	
	// Sets default values for this actor's properties
	ANavesRestantes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
