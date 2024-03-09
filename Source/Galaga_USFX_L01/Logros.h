// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Logros.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ALogros : public AActor
{
	GENERATED_BODY()
private:

	//enum Medallas { ONE, FIVE, TEEN, FIFTEEN, HUNDRED };
	FVector posicion;
	//Medallas tipoMedalla=ONE;
public:
	//getters
	FORCEINLINE FVector GetPosicion() { return posicion; }
	
	//setters
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }


	//generar medallas;
	//FORCEINLINE void MedallasActuales(int _level);
	
	
public:	
	// Sets default values for this actor's properties
	ALogros();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
