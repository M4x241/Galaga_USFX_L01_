// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEscenario : public AActor
{
	GENERATED_BODY()
private:
	int numEscenario;
	FVector posicion;
public:
	//setter
	FORCEINLINE int GetNumEscenario() { return numEscenario; }
	FORCEINLINE FVector GetPosicion() { return posicion; }

	//getter
	FORCEINLINE void SetEscenario(int _numEscenario) { numEscenario = _numEscenario; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	
public:	
	// Sets default values for this actor's properties
	AEscenario();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
