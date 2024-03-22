// Fill out your copyright notice in the Description page of Project Settings.


#include "ActivacionBarrera.h"

// Sets default values for this component's properties
UActivacionBarrera::UActivacionBarrera()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	//barrera = CreateDefaultSubobject<USceneComponent>(TEXT("MySceneComponent"));
	//barrera->SetupAttachment(RootComponent);
	//RootComponent = barrera;
	
	// ...
}

void UActivacionBarrera::Spawn()
{
	UWorld* TheWorld = GetWorld();
	if (TheWorld!=nullptr) {
		FTransform TransformBarrera(this->GetComponentTransform());
		TheWorld->SpawnActor(BarreraSpawn, &TransformBarrera);
		DestroyComponent();
	}

}


// Called when the game starts
void UActivacionBarrera::BeginPlay()
{
	Super::BeginPlay();
	Spawn();
	// ...
	
}


// Called every frame
void UActivacionBarrera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

