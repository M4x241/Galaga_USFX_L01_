// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaScout.h"


void ANaveEnemigaEspiaScout::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}



void ANaveEnemigaEspiaScout::Mover(float DeltaTime)
{
	/*ANaveEnemigaEspia::Mover(DeltaTime);
	SetActorLocation(FVector(GetActorLocation().X + GetSpeed()+1, GetActorLocation().Y- GetSpeed(), GetActorLocation().Z));*/
}

void ANaveEnemigaEspiaScout::Escapar()
{
}
