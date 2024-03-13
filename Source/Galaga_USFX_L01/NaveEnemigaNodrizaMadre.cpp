// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodrizaMadre.h"
#include <time.h>
using namespace std;

void ANaveEnemigaNodrizaMadre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaNodrizaMadre::Mover(float DeltaTime)
{
	ANaveEnemigaNodriza::Mover(DeltaTime);
	if (ban) {
		posicionale= rand() % 1600;
		ban = false;
	}
	
	else {
		if (posicionale>GetActorLocation().X) {
			SetActorLocation(FVector(GetActorLocation().X+1, GetActorLocation().Y, GetActorLocation().Z)); 
		}
		else if(posicionale < GetActorLocation().X){
			SetActorLocation(FVector(GetActorLocation().X-1, GetActorLocation().Y, GetActorLocation().Z));
		}
		else {
			ban = true;
		}
	}
}

void ANaveEnemigaNodrizaMadre::Disparar()
{
}

void ANaveEnemigaNodrizaMadre::Destruirse()
{
}
