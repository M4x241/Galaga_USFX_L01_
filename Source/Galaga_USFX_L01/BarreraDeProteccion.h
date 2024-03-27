// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BarreraDeProteccion.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ABarreraDeProteccion : public AActor
{
	GENERATED_BODY()
	UStaticMeshComponent* barreramesh;
private:
	UPROPERTY(VisibleAnywhere)
	float tempo = 0;
	
public:	
	// Sets default values for this actor's properties
	ABarreraDeProteccion();
	FORCEINLINE void Destruir(float _tempo);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
