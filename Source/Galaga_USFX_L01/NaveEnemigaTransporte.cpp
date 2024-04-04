// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Propios/e47287d381ca_b76070cea542_nave_del_3000__hech_fbx/b76070cea542_nave_del_3000__hech.b76070cea542_nave_del_3000__hech'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	/*speed = 1;
	SetActorLocation(FVector(GetActorLocation().X - speed, GetActorLocation().Y, GetActorLocation().Z));*/
}

void ANaveEnemigaTransporte::Disparar()
{
}

void ANaveEnemigaTransporte::Destruirse()
{
}

void ANaveEnemigaTransporte::Escapar()
{
}

