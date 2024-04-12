// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimientoBombs.h"
#include "Bomba.h"
class ABomba;

void ANaveEnemigaReabastecimientoBombs::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	
	
	
}

void ANaveEnemigaReabastecimientoBombs::soltarBomba(bool _soltar)
{
	soltar = _soltar;
}

void ANaveEnemigaReabastecimientoBombs::Mover(float DeltaTime)
{
	if (GetActorLocation().X <= AleX + 50 && GetActorLocation().X >= AleX - 50 && GetActorLocation().Y <= AleY + 50 && GetActorLocation().Y >= AleY - 50) {
		AleX = rand() % 3600 - 1800;
		AleY = rand() % 3600 - 1800;
		UWorld* const World = GetWorld();
		if (World) {
			//tmpBomb += GetWorld()->DeltaTimeSeconds;
			//if (tmpBomb >= tmpSuelto) {
			ABomba* bomb;
			FVector posicin = GetActorLocation() + FVector(-50, 0, -50);
			FRotator rotat = FRotator(0, 0, 0);
			bomb = GetWorld()->SpawnActor<ABomba>(posicin, rotat);
			tmpBomb = 0;
			tmpSuelto = rand() % 3 + 3;
			//}
		}
	}
	else {
		if(GetActorLocation().X > AleX)
			SetActorLocation(GetActorLocation() + FVector(-400*DeltaTime, 0, 0));
		else if (GetActorLocation().X < AleX)
			SetActorLocation(GetActorLocation() + FVector(400*DeltaTime, 0, 0));
		if (GetActorLocation().Y > AleY)
			SetActorLocation(GetActorLocation() + FVector(0, -400*DeltaTime, 0));
		else if (GetActorLocation().Y < AleY)
			SetActorLocation(GetActorLocation() + FVector(0, 400*DeltaTime, 0));
		
	}

}

void ANaveEnemigaReabastecimientoBombs::Destruirse()
{
}

void ANaveEnemigaReabastecimientoBombs::Escapar()
{
}
