// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaAlfa.h"

void ANaveEnemigaCazaAlfa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

ANaveEnemigaCazaAlfa::ANaveEnemigaCazaAlfa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel4.EnemyLevel4'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	posicionalfa = GetActorLocation();
	//posicion = FVector(1200, -1000, 250);

	//****************************##############################################ERROR
	//PrimaryActorTick.bCanEverTick = true; ///esta cosa al activarla en la hija de la hija es que no se puede 
}

void ANaveEnemigaCazaAlfa::Mover(float DeltaTime)
{
	ANaveEnemigaCaza::Mover(DeltaTime); 
	speed = 3;
	SetActorRotation(FRotator(0, 180, vueltas)); 
	vueltas+=2;
	SetActorLocation(FVector(GetActorLocation().X -speed, GetActorLocation().Y + speed*banderaA, GetActorLocation().Z));
	posicionalfa = GetActorLocation();
	if (GetActorLocation().Y > GetPosicion().Y+500 || GetActorLocation().Y < GetPosicion().Y - 500) {
		banderaA *= -1;
	}
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
	}
	if (vueltas > 360) {
		vueltas = 0;
	}
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
