// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Galaga_USFX_L01Pawn.h"
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ActivacionBarrera.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UActivacionBarrera : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActivacionBarrera();
	//se levantara la baerra:
	UFUNCTION(BlueprintCallable, Category = Cookbook)
	void Spawn();
	UPROPERTY(EditAnywhere) 
	TSubclassOf<AActor> BarreraSpawn;  
	AGalaga_USFX_L01Pawn* NaveBuena;
	float tempo=3;
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
