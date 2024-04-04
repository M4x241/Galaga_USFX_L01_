// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransportePesado.h"


void ANaveEnemigaTransportePesado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

/*ANaveEnemigaTransportePesado::ANaveEnemigaTransportePesado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel2.EnemyLevel2'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}*/

void ANaveEnemigaTransportePesado::Mover(float DeltaTime)
{
	/*ANaveEnemigaTransporte::Mover(DeltaTime);
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z));*/
}

void ANaveEnemigaTransportePesado::Destruirse()
{
}

void ANaveEnemigaTransportePesado::Escapar()
{
}
