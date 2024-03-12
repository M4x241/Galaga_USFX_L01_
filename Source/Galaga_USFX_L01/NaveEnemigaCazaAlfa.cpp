// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaAlfa.h"

void ANaveEnemigaCazaAlfa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

ANaveEnemigaCazaAlfa::ANaveEnemigaCazaAlfa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	posicion = FVector(1200,-1000,250);

	//****************************##############################################ERROR
	//PrimaryActorTick.bCanEverTick = true; ///esta cosa al activarla en la hija de la hija es que no se puede 
}

void ANaveEnemigaCazaAlfa::Mover(float DeltaTime)
{
	ANaveEnemigaCaza::Mover(DeltaTime); 
	speed = 3;
	SetActorLocation(FVector(GetActorLocation().X - speed, GetActorLocation().Y - speed*bandera, GetActorLocation().Z)); 
	if (GetActorLocation().Y < -1200 || GetActorLocation().Y > -800) {
		bandera *= -1;
	}
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
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
