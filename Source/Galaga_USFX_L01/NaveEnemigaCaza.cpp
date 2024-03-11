// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

    PrimaryActorTick.bCanEverTick = true;
}

void ANaveEnemigaCaza::Mover()
{
    /*  
	Super::SetPosicion(FVector(GetPosicion().X - speed, GetPosicion().Y, GetPosicion().Z));

	if (Super::GetPosicion().X == -1600.0f) {
		SetPosicion(FVector(200, 200, 250));
	} */

    // Obtener la posición actual de la nave
    FVector PosicionActual = Super::GetPosicion();

    // Mover la nave restando la velocidad de la coordenada X
    FVector NuevaPosicion = FVector(PosicionActual.X - speed, PosicionActual.Y, PosicionActual.Z);

    // Establecer la nueva posición de la nave
    Super::SetPosicion(NuevaPosicion);

    // Verificar si la posición X ha alcanzado un cierto valor
    if (NuevaPosicion.X == -1600.0f) {
        // Si es así, reubicar la nave
        Super::SetPosicion(FVector(200, 200, 250));
    }
}

void ANaveEnemigaCaza::Disparar()
{
}

void ANaveEnemigaCaza::Destruirse()
{
}

void ANaveEnemigaCaza::Escapar()
{
}
/*
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(); 

}*/
