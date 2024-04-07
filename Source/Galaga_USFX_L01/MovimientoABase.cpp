// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoABase.h"

// Sets default values for this component's properties
UMovimientoABase::UMovimientoABase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	objetivo= FVector(0, 0, 0);
	// ...
}

void UMovimientoABase::GoRegresion(bool _iniciar, FVector puntoObjetivo,float DeltaTime)
{
	iniciar = _iniciar;
	if (iniciar) {
		objetivo= puntoObjetivo;
		AActor* parent = GetOwner();
		int velocidadX = 1000;
		int velocidadY = 1000;
		if ((parent->GetActorLocation().X <= puntoObjetivo.X + 10 && parent->GetActorLocation().X >= puntoObjetivo.X - 10) 
			&& (parent->GetActorLocation().Y <= puntoObjetivo.Y + 10 && parent->GetActorLocation().Y >= puntoObjetivo.Y - 10)) {
			iniciar = false;
		}
		else
		{
			parent->GetActorLocation().X > puntoObjetivo.X ? velocidadX = -1000 : velocidadX = 1000;
			if ((parent->GetActorLocation().X <= puntoObjetivo.X + 10 && parent->GetActorLocation().X >= puntoObjetivo.X - 10)) velocidadX = 0;
			parent->GetActorLocation().Y > puntoObjetivo.Y ? velocidadY = -1000 : velocidadY = 1000; 
			if (parent->GetActorLocation().Y <= puntoObjetivo.Y + 10 && parent->GetActorLocation().Y >= puntoObjetivo.Y - 10) velocidadY = 0;
			parent->SetActorLocation(FVector(int(parent->GetActorLocation().X) + velocidadX*DeltaTime, int(parent->GetActorLocation().Y) + velocidadY* DeltaTime, int(parent->GetActorLocation().Z)));
			//RegresionInicial();
		}
		
	}
}


// Called when the game starts
void UMovimientoABase::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimientoABase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	GoRegresion(iniciar,objetivo,DeltaTime);
	// ...
}

