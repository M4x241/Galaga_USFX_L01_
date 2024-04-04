// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorNaves.h"

// Sets default values for this component's properties
UGeneradorNaves::UGeneradorNaves()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}

void UGeneradorNaves::generarNave(UClass* claseEnemiga, FVector posicion)
{
	UWorld* world = GetWorld();
	claseEnemiga = ANaveEnemiga::StaticClass();

	if (world) {
		for (int32 i = 1; i <= 6; i++) {
			FVector spawnLocation = FVector(0, 150 * 1, 0) + posicion;
			FRotator spawnRotation = FRotator(0, 0, 0);
			//ANaveEnemiga* nave = world->SpawnActor<claseEnemiga->get>( posicion, spawnRotation);  
		}
		
	}
	
}


// Called when the game starts
void UGeneradorNaves::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGeneradorNaves::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

