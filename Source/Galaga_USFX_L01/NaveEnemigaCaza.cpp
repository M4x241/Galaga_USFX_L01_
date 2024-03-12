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

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	
	SetActorLocation(FVector(GetActorLocation().X - 1, GetActorLocation().Y, GetActorLocation().Z));

	//if (Super::GetPosicion().X == -1600.0f) {
	//	SetPosicion(FVector(200, 200, 250)); 
	//} 
    
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
