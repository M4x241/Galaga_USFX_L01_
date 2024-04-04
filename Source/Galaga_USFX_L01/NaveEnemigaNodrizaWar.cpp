// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaWar.h"


ANaveEnemigaNodrizaWar::ANaveEnemigaNodrizaWar()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Propios/5a9314e15a15_687ef6163624_CREA_UNA_NAVE_NODRI_fbx/687ef6163624_CREA_UNA_NAVE_NODRI.687ef6163624_CREA_UNA_NAVE_NODRI'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaNodrizaWar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaNodrizaWar::Mover(float DeltaTime)
{
	/*ANaveEnemigaNodriza::Mover(DeltaTime);
	if (ban) {
		posicionale = rand() % 1600;
		ban = false;
	}

	else {
		if (posicionale > GetActorLocation().Y) {
			SetActorLocation(FVector(GetActorLocation().X , GetActorLocation().Y + 1, GetActorLocation().Z));
		}
		else if (posicionale < GetActorLocation().Y) {
			SetActorLocation(FVector(GetActorLocation().X , GetActorLocation().Y - 1, GetActorLocation().Z));
		}
		else {
			ban = true;
		}
	}*/
}

void ANaveEnemigaNodrizaWar::Disparar()
{
}

void ANaveEnemigaNodrizaWar::Destruirse()
{
}
