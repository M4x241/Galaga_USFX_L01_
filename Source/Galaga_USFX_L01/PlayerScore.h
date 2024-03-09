// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerScore.generated.h"

UCLASS()
class GALAGA_USFX_L01_API APlayerScore : public AActor
{
	GENERATED_BODY()
private:
	int scoreActual;
	float posicionX;
	float posicionY;
	float posicionZ;
	float width;
	float heigth;


public:
	//Getters
	FORCEINLINE int GetScoreActual() const { return scoreActual; }
	FORCEINLINE float GetPosicionX() const { return posicionX; }
	FORCEINLINE float GetPosicionY() const { return posicionY; }
	FORCEINLINE float GetPosicionZ() const { return posicionZ; }
	FORCEINLINE float GetWidth() const { return width; }
	FORCEINLINE float GetHeigth() const { return heigth; }

	//setter
	FORCEINLINE void SetScoreActual(int _scoreActual) { scoreActual = _scoreActual; }
	FORCEINLINE void SetPosicionX(float _posicionX) { posicionX = _posicionX; }
	FORCEINLINE void SetPosicionY(float _posicionY) { posicionY = _posicionY; }
	FORCEINLINE void SetPosicionZ(float _posicionZ) { posicionZ = _posicionZ; }
	FORCEINLINE void SetWidth(float _width) { width = _width; }
	FORCEINLINE void SetHeigth(float _heigth) { heigth = _heigth; }

	//actualizar datos
	FORCEINLINE void ScoreNew(float _scoreNaveEnemiga);

public:	
	// Sets default values for this actor's properties
	APlayerScore();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
