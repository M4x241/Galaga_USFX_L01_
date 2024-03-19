// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaCentral.h"



void ANaveEnemigaEspiaCentral::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaEspiaCentral::Mover(float DeltaTime)
{
	ANaveEnemigaEspia::Mover(DeltaTime);
	bandera++;
	if (bandera<300 && bandera >0) {
		
		SetActorLocation(FVector(GetActorLocation().X + GetSpeed(), GetActorLocation().Y, GetActorLocation().Z));
	}
	else if(bandera>300){
		bandera = -100;
	}
	else {
		SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y + GetSpeed(), GetActorLocation().Z)); 
	}
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
	}
	
}

void ANaveEnemigaEspiaCentral::Escapar()
{
}
