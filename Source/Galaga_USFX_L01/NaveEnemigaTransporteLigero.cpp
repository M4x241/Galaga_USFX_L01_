// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteLigero.h"
#include "Galaga_USFX_L01Pawn.h"
#include "Kismet/GameplayStatics.h"


void ANaveEnemigaTransporteLigero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

ANaveEnemigaTransporteLigero::ANaveEnemigaTransporteLigero()
{
	naveobjetivo = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(this, 0));

}

void ANaveEnemigaTransporteLigero::Mover(float DeltaTime)
{
	ANaveEnemigaTransporte::Mover(DeltaTime);
	ban++;
	if (ban>100) {
		aleX = rand() % 1600;
		aleY = rand() % 1600;
		ban = 0;
	}

	else {
		SetActorLocation(FVector(aleX,aleY , GetActorLocation().Z));
	}

	//esto hace que las nave ligera se mueva a la posicion del pawn
	/*
	if (naveobjetivo!=nullptr) {
		ban++;
		if (ban < 100) {
			aleX = rand() % 1600;
			aleY = rand() % 1600;

		}

		else {
			SetActorLocation(naveobjetivo->GetPosicionNave());
			ban = 0;
		}
	}*/
	
	
	
}

void ANaveEnemigaTransporteLigero::Destruirse()
{
}

void ANaveEnemigaTransporteLigero::Escapar()
{
}
