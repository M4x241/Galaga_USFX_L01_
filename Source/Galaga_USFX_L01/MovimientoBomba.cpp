// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoBomba.h"

// Sets default values for this component's properties
UMovimientoBomba::UMovimientoBomba()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UMovimientoBomba::MovVertical(float DeltaTime)
{
	AActor* bombita = GetOwner();
	if (bombita) {
		bombita->SetActorLocation(bombita->GetActorLocation() + FVector(-800 * DeltaTime, 0, 0));
	}
}


// Called when the game starts
void UMovimientoBomba::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Called every frame
void UMovimientoBomba::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	MovVertical(DeltaTime);
	// ...
}

