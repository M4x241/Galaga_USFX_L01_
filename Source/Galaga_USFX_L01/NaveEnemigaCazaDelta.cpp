// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaDelta.h"

void ANaveEnemigaCazaDelta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	//Destruirse();

}

ANaveEnemigaCazaDelta::ANaveEnemigaCazaDelta()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel3.EnemyLevel3'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaCazaDelta::Mover(float DeltaTime)
{
	ANaveEnemigaCaza::Mover(DeltaTime);
	SetActorRotation(FRotator(0, 180, 0));
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
	if (GetActorLocation().X < -1000) {
		Destroy();
	}
}

void ANaveEnemigaCazaDelta::Escapar()
{
}
