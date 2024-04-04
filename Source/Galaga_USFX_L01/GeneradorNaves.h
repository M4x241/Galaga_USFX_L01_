// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NaveEnemiga.h"
#include "GeneradorNaves.generated.h"
class ANaveEnemiga;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UGeneradorNaves : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGeneradorNaves();
	FORCEINLINE void generarNave(UClass* claseEnemiga, FVector posicion);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
