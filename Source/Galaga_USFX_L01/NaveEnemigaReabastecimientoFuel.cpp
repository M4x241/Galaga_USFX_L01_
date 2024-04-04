// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoFuel.h"


void ANaveEnemigaReabastecimientoFuel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaReabastecimientoFuel::Mover(float DeltaTime)
{
	/*speed = -5;
	ANaveEnemigaReabastecimiento::Mover(DeltaTime);
	SetActorLocation(FVector(GetActorLocation().X -2 , GetActorLocation().Y, GetActorLocation().Z + 1 * bandera));
	if (GetActorLocation().Z>800 || GetActorLocation().Z<0) {
		bandera *= -1;
	}
	if (GetActorLocation().X < -1800) {
		SetActorLocation(posicion);
	}*/
}

void ANaveEnemigaReabastecimientoFuel::Destruirse()
{
}

void ANaveEnemigaReabastecimientoFuel::Escapar()
{
}
