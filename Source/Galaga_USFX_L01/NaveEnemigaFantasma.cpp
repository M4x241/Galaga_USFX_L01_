// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaFantasma.h"

ANaveEnemigaFantasma::ANaveEnemigaFantasma()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/Meshes/PlayerShip1.PlayerShip1'"));
	mallaNaveEnemiga->SetStaticMesh(Mesh.Object);
	movimientoRombo= CreateDefaultSubobject<UMovimientoRombo>(TEXT("Movimiento Rombo"));
}
