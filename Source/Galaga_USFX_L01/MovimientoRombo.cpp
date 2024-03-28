// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoRombo.h"

// Sets default values for this component's properties
UMovimientoRombo::UMovimientoRombo()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	MoveRadio = 5;
	// ...
}


// Called when the game starts
void UMovimientoRombo::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimientoRombo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	AActor* Parent = GetOwner();
	if (Parent) {
		auto NewPos = Parent->GetActorLocation() +
			FVector(FMath::FRandRange(-1, 1) * MoveRadio,
				FMath::FRandRange(-1, 1) * MoveRadio,
				FMath::FRandRange(-1, 1) * MoveRadio);
		//actualizar la posicion
		Parent->SetActorLocation(NewPos);

	}
}

