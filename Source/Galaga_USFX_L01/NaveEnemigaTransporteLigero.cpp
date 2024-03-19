// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteLigero.h"


void ANaveEnemigaTransporteLigero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaTransporteLigero::Mover(float DeltaTime)
{
	ANaveEnemigaTransporte::Mover(DeltaTime);
	ban++;
	if (ban>100) {
		aleX = rand() % 1600;
		aleY = rand() % 1600;
		ban = 0;
	}

	else {
		SetActorLocation(FVector(aleX,aleY , GetActorLocation().Z));
	}
}

void ANaveEnemigaTransporteLigero::Destruirse()
{
}

void ANaveEnemigaTransporteLigero::Escapar()
{
}
