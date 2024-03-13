// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransportePesado.h"


void ANaveEnemigaTransportePesado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaTransportePesado::Mover(float DeltaTime)
{
	ANaveEnemigaTransporte::Mover(DeltaTime);
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z));
}

void ANaveEnemigaTransportePesado::Destruirse()
{
}

void ANaveEnemigaTransportePesado::Escapar()
{
}
