// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaDelta.h"

ANaveEnemigaCazaDelta::ANaveEnemigaCazaDelta()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaCazaDelta::Mover()
{
}

void ANaveEnemigaCazaDelta::Disparar()
{
}

void ANaveEnemigaCazaDelta::Destruirse()
{
}

void ANaveEnemigaCazaDelta::Escapar()
{
}
