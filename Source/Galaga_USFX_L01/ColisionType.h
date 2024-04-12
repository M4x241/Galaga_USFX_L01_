// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ColisionType.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UColisionType : public UActorComponent
{
	GENERATED_BODY()
private:
	int typeControl=0;
	AActor* ActorObjetivo;
	int firstPerson = 1;

public:	
	// Sets default values for this component's properties
	UColisionType();
	FORCEINLINE void SetTypeControl(int _typeControl) { typeControl = _typeControl; }
	FORCEINLINE void IncrementarTypeControl() { typeControl++; ActorObjetivo = nullptr;}
	FORCEINLINE void SetActorObjetivo(AActor* _ActorObjetivo) { ActorObjetivo = _ActorObjetivo; }
	FORCEINLINE void DestruccionZombie(float DeltaTime);
	FORCEINLINE void ControlZombie(float DeltaTime);
	FORCEINLINE void AutoDestruccion(float DeltaTime);
	FORCEINLINE void Invecible(float DeltaTime);
	FORCEINLINE void DefectColision(float DeltaTime);
	FORCEINLINE void CamaraFirstPerson(float DeltaTime, int _firstPerson);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
