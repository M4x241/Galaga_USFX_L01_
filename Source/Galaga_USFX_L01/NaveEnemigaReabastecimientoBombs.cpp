// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoBombs.h"


void ANaveEnemigaReabastecimientoBombs::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaReabastecimientoBombs::Mover(float DeltaTime)
{
	/*ANaveEnemigaReabastecimiento::Mover(DeltaTime);
	SetActorLocation(FVector(GetActorLocation().X - 2, GetActorLocation().Y, GetActorLocation().Z )); 
	SetActorRotation(FRotator(bandera, 90, 90));
	if (bandera>=360) {
		bandera =0;
	}
	bandera++;
	if (GetActorLocation().X < -1800) {
		SetActorLocation(posicion);
	}*/

}

void ANaveEnemigaReabastecimientoBombs::Destruirse()
{
}

void ANaveEnemigaReabastecimientoBombs::Escapar()
{
}
