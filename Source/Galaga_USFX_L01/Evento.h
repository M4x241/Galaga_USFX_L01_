// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Evento.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEvento : public AActor
{
	GENERATED_BODY()
private:
	bool bonus = false;
	int level;
	FVector posicion;
public:
	//getter
	FORCEINLINE bool GetBonus() { return bonus; }
	FORCEINLINE int GetLevel() { return level; }
	FORCEINLINE FVector GetPosicion() { return posicion; }


	//setter
	FORCEINLINE void SetBonus(bool _bonus) { bonus = _bonus; }
	FORCEINLINE void SetLevel(int _level) { level = _level; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }

	//mostrar mensaje;
	FORCEINLINE void Anuncio();
	
public:	
	// Sets default values for this actor's properties
	AEvento();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
