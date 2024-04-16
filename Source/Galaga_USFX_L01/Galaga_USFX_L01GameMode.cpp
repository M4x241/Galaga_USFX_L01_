// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "Logros.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCazaAlfa.h"
#include "NaveEnemigaCazaDelta.h"
#include "NaveEnemigaTransporteLigero.h"
#include "NaveEnemigaTransportePesado.h"
#include "NaveEnemigaEspiaScout.h"
#include "NaveEnemigaEspiaCentral.h"
#include "NaveEnemigaReabastecimientoBombs.h"
#include "NaveEnemigaReabastecimientoFuel.h"  
#include "NaveEnemigaNodrizaMadre.h"
#include "NaveEnemigaNodrizaWar.h"
#include <ctime>
#include "ProyectilEnemigo.h"
#include "Kismet/GameplayStatics.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
	GeneradorNaves01 = CreateDefaultSubobject<UGeneradorNaves>(TEXT("GeneradorNaves01")); 
	//GeneradorNaves01 = CreateDefaultSubobject<UGeneradorNaves>(TEXT("GeneradorNaves01"));
}

void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//set the game state to playing
	float x=1200;
	float y=-1000;
	FVector ubicacionNave01 = FVector(x, y, 250.0f);
	FVector ubicacionNave02 = FVector(x, y + 200, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{

		logro1 = World->SpawnActor<ALogros>(FVector(200, 200, 250), FRotator(0, 0, 0));  
		AGalaga_USFX_L01Pawn* LogroGalaga = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(this, 0)); 
		LogroGalaga->SetLogro(logro1);
		/*logro1->ModificarVida("escudo", escudo);
		logro1->InsertarVida("corazon");*/
		

		// xc, yc, zc;
		//quiero inicializar las naves enemigas


		

		///spwn proyectil
		ANaveEnemigaReabastecimientoBombs* NaveEnemigaTBoms;
		proyectil = World->SpawnActor<AProyectilEnemigo>(FVector(-1600,-500,250), rotacionNave);
		NaveEnemigaTBoms = World->SpawnActor<ANaveEnemigaReabastecimientoBombs>(FVector(300, -900, 1500), rotacionNave);

		
		//se generan aleatoriamente las naves enemigas
		GeneradorNaves01->generarNave(); 
		
	}
}

