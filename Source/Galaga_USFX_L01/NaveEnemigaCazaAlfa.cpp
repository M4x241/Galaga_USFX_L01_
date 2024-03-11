// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaAlfa.h"

ANaveEnemigaCazaAlfa::ANaveEnemigaCazaAlfa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	//habilitamos el tick
	PrimaryActorTick.bCanEverTick = true;
}

void ANaveEnemigaCazaAlfa::Mover()
{
}
 

void ANaveEnemigaCazaAlfa::Disparar()
{
}

void ANaveEnemigaCazaAlfa::Destruirse()
{
}

void ANaveEnemigaCazaAlfa::Escapar()
{
}
