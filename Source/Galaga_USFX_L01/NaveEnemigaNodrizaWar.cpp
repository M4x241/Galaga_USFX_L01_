// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaWar.h"


ANaveEnemigaNodrizaWar::ANaveEnemigaNodrizaWar()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza5.Nodriza5'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	SetActorScale3D(FVector(0.5,0.5,0.5));
}

void ANaveEnemigaNodrizaWar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaNodrizaWar::Mover(float DeltaTime)
{
	ANaveEnemigaNodriza::Mover(DeltaTime);
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
	}
}

void ANaveEnemigaNodrizaWar::Disparar()
{
}

void ANaveEnemigaNodrizaWar::Destruirse()
{
}
