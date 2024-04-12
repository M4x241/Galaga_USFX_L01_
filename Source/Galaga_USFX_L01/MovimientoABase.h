// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovimientoABase.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UMovimientoABase : public UActorComponent
{
	GENERATED_BODY()

private:
	bool iniciar = false;
	FVector objetivo;

	//salto
	bool salto = false;
	bool altMax = false;
public:	
	// Sets default values for this component's properties
	UMovimientoABase();
	void GoRegresion(bool _iniciar,FVector puntoObjetivo, float DeltaTime);
	void jumpPressed();
	void ActionJump(float DeltaTime);
	//void MovimientoDiagonal(float Deltatime);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
