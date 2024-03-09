// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilAmigo.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AProyectilAmigo : public AActor
{
	GENERATED_BODY()

private:
	float speed;
	float posicionX;
	float posicionY;
	float posicionZ;
	float damage;
	float radio;
	bool explosion=false;
public:

	//Getters
	FORCEINLINE float GetSpeed() const { return speed; }
	FORCEINLINE float GetPosicionX() const { return posicionX; }
	FORCEINLINE	float GetPosicionY() const { return posicionY; }
	FORCEINLINE float GetPosicionZ() const { return posicionZ; }
	FORCEINLINE float GetDamage() const { return damage; }
	FORCEINLINE float GetRadio() const { return radio; }
	FORCEINLINE bool GetExplosion() const { return explosion; }


	//Setters
	
	FORCEINLINE void SetSpeed(float _speed) { speed = _speed; }
	FORCEINLINE void SetPosicionX(float _posicionX) { posicionX = _posicionX; }
	FORCEINLINE void SetPosicionY(float _posicionY) { posicionY = _posicionY; }
	FORCEINLINE void SetPosicionZ(float _posicionZ) { posicionZ = _posicionZ; }
	FORCEINLINE void SetDamage(float _damage) { damage = _damage; }
	FORCEINLINE void SetRadio(float _radio) { radio = _radio; }
	FORCEINLINE void SetExplosion(bool _explosion) { explosion = _explosion; }

	//movilidad
	FORCEINLINE void DesplazamientoX();
	
	
public:	
	// Sets default values for this actor's properties
	AProyectilAmigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
