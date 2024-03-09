// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HighScore.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AHighScore : public AActor
{
	GENERATED_BODY()
private:
	int scoreMax;
	float posicionX;
	float posicionY;
	float posicionZ;
	float width;
	float heigth;

public:
	//Getters
	FORCEINLINE int GetScoreMax() const { return scoreMax; }
	FORCEINLINE float GetPosicionX() const { return posicionX; }
	FORCEINLINE float GetPosicionY() const { return posicionY; }
	FORCEINLINE float GetPosicionZ() const { return posicionZ; }
	FORCEINLINE float GetWidth() const { return width; }
	FORCEINLINE float GetHeigth() const { return heigth; }

	//setter
	FORCEINLINE void SetScoreMax(int _scoreMax) { scoreMax = _scoreMax; }
	FORCEINLINE void SetPosicionX(float _posicionX) { posicionX = _posicionX; }
	FORCEINLINE void SetPosicionY(float _posicionY) { posicionY = _posicionY; }
	FORCEINLINE void SetPosicionZ(float _posicionZ) { posicionZ = _posicionZ; }
	FORCEINLINE void SetWidth(float _width) { width = _width; }
	FORCEINLINE void SetHeigth(float _heigth) { heigth = _heigth; }
	
	//actualizar marcador;
	FORCEINLINE void ScoreNew(int _score) ;
	
public:	
	// Sets default values for this actor's properties
	AHighScore();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
