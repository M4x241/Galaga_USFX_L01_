// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaDelta.h"

void ANaveEnemigaCazaDelta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

ANaveEnemigaCazaDelta::ANaveEnemigaCazaDelta()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	posicion = FVector(1200, -1000+200, 250);
}

void ANaveEnemigaCazaDelta::Mover(float DeltaTime)
{
	ANaveEnemigaCaza::Mover(DeltaTime);
	speed = 3;
	SetActorLocation(FVector(GetActorLocation().X - speed, GetActorLocation().Y + speed * bandera, GetActorLocation().Z));
	if (GetActorLocation().Y < -1000 || GetActorLocation().Y > -600) {
		bandera *= -1;
	}
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
	}
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
