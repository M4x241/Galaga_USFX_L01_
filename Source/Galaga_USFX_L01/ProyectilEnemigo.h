// Fill out your copyright notice in the Description page of Project Settings.
#include "Logros.h"
#pragma once
#include "Galaga_USFX_L01Pawn.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AProyectilEnemigo : public AActor
{
	GENERATED_BODY()
	UStaticMeshComponent* mallabala;
private:
	float speed;
	FVector posicionproyectil;
	float damage;
	float radio;
	bool explosion = false;
	//creando nave aliada y logros
	ALogros* logro1;  
	AGalaga_USFX_L01Pawn* naveAliada;
public:

	//Getters
	FORCEINLINE float GetSpeed() const { return speed; }
	FORCEINLINE FVector GetPosicionProyectil() const { return posicionproyectil; }
	FORCEINLINE float GetDamage() const { return damage; }
	FORCEINLINE float GetRadio() const { return radio; }
	FORCEINLINE bool GetExplosion() const { return explosion; }


	//Setters

	FORCEINLINE void SetSpeed(float _speed) { speed = _speed; }
	FORCEINLINE void SetPosicionX(FVector _posicionproyectil) { posicionproyectil = _posicionproyectil; }
	FORCEINLINE void SetDamage(float _damage) { damage = _damage; }
	FORCEINLINE void SetRadio(float _radio) { radio = _radio; }
	FORCEINLINE void SetExplosion(bool _explosion) { explosion = _explosion; }
	FORCEINLINE void colision();

	
public:	
	// Sets default values for this actor's properties
	AProyectilEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
