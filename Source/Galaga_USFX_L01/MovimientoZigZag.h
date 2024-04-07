// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NaveEnemiga.h"
#include "MovimientoZigZag.generated.h"
class ANaveEnemiga;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UMovimientoZigZag : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMovimientoZigZag();
private:
	AActor* Parent;
	UPROPERTY(VisibleAnywhere)
	FVector inicio;
	int Right = 1;
	int Speed = 180;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	void Iniciando(FVector ubi); 
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
