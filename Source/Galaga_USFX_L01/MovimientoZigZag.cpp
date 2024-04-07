// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoZigZag.h"

// Sets default values for this component's properties
UMovimientoZigZag::UMovimientoZigZag()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	//Parent = GetOwner();

	

	// ...
}


// Called when the game starts
void UMovimientoZigZag::BeginPlay()
{
	Super::BeginPlay(); 
	// ...
	Parent = GetOwner();
	inicio = Parent->GetActorLocation();
	
}

void UMovimientoZigZag::Iniciando(FVector Ubi)
{
	inicio = Ubi;

}


// Called every frame
void UMovimientoZigZag::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Parent = GetOwner();
	if (Parent) {
		Parent->SetActorLocation(Parent->GetActorLocation() + FVector(0, Right, 0) * Speed*DeltaTime);
		if(Parent->GetActorLocation().Y >inicio.Y + 250 || Parent->GetActorLocation().Y < inicio.Y - 250) {
			Right *= -1;
		}
		
	}
	// ...
}

