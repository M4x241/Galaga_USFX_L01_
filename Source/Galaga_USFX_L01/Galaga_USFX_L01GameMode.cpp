// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
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

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
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
	FVector ubicacionInicioNaveEnemigaCaza = FVector(200, 200, 250);
	FVector ubicacionInicioNaveEnemigaTransporte = FVector(-200, 200, 250);

	FVector ubicacionNave01 = FVector(x, y, 250.0f);
	FVector ubicacionNave02 = FVector(x, y + 200, 250.0f);
	FVector ubicacionNave03 = FVector(x, y + 400, 250.0f); 
	FVector ubicacionNave04 = FVector(x, y + 600, 250.0f);
	FVector ubicacionNave05 = FVector(x, y + 800, 250.0f);
	x = 1000;
	FVector ubicacionNave06 = FVector(x, y + 800, 250.0f);
	FVector ubicacionNave07 = FVector(x, y + 600, 250.0f);
	FVector ubicacionNave08 = FVector(x, y + 400, 250.0f);
	FVector ubicacionNave09 = FVector(x, y + 200, 250.0f);
	FVector ubicacionNave10 = FVector(x, y, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		/*
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(FVector(200,200,250), rotacionNave);
		NaveEnemigaCazaAlfa01 = World->SpawnActor<ANaveEnemigaCazaAlfa>(ubicacionNave01, rotacionNave); 
		NaveEnemigaCazaDelta01 = World->SpawnActor<ANaveEnemigaCazaDelta>(ubicacionNave02, rotacionNave);
		NaveEnemigaTransporteLigero01 = World->SpawnActor<ANaveEnemigaTransporteLigero>(ubicacionNave03, rotacionNave);
		NaveEnemigaTransportePesado01 = World->SpawnActor<ANaveEnemigaTransportePesado>(ubicacionNave04, rotacionNave);
		NaveEnemigaEspiaScout01 = World->SpawnActor<ANaveEnemigaEspiaScout>(ubicacionNave05, rotacionNave);
		NaveEnemigaEspiaCentral01 = World->SpawnActor<ANaveEnemigaEspiaCentral>(ubicacionNave06, rotacionNave);
		NaveEnemigaReabastecimientoBombs01 = World->SpawnActor<ANaveEnemigaReabastecimientoBombs>(ubicacionNave07, rotacionNave);
		NaveEnemigaReabastecimientoFuel01 = World->SpawnActor<ANaveEnemigaReabastecimientoFuel>(ubicacionNave08, rotacionNave);
		NaveEnemigaNodrizaMadre01 = World->SpawnActor<ANaveEnemigaNodrizaMadre>(ubicacionNave09, rotacionNave);  
		NaveEnemigaNodrizaWar01 = World->SpawnActor<ANaveEnemigaNodrizaWar>(ubicacionNave10, rotacionNave);  

		float xc = 200, yc = 200, zc = 250;
		for (int i = 0; i < 5; i++) {
			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(FVector(xc, yc, 250), rotacionNave); 
			TANaveEnemigaCaza.Push(NaveEnemigaCazaTemporal);

			ANaveEnemigaCazaAlfa* NaveEnemigaCazaAlfaTemporal = World->SpawnActor<ANaveEnemigaCazaAlfa>(FVector(xc*2, yc, 250), rotacionNave);
			TANaveEnemigaCazaAlfa.Push(NaveEnemigaCazaAlfaTemporal);

			ANaveEnemigaCazaDelta* NaveEnemigaCazaDeltaTemporal = World->SpawnActor<ANaveEnemigaCazaDelta>(FVector(xc * 4, yc, 250), rotacionNave);
			TANaveEnemigaCazaDelta.Push(NaveEnemigaCazaDeltaTemporal);
			yc += 200;
		}*/
		

		// xc, yc, zc;
		ANaveEnemigaCazaAlfa* NaveEnemigaTAlfa;
		ANaveEnemigaCazaDelta* NaveEnemigaTDelta;
		ANaveEnemigaTransporteLigero* NaveEnemigaTLigero;
		ANaveEnemigaTransportePesado* NaveEnemigaTPesado;
		ANaveEnemigaEspiaScout* NaveEnemigaTScout;
		ANaveEnemigaEspiaCentral* NaveEnemigaTCentral;
		ANaveEnemigaNodrizaMadre* NaveEnemigaTMadre;
		ANaveEnemigaNodrizaWar* NaveEnemigaTWar;
		ANaveEnemigaReabastecimientoFuel* NaveEnemigaTFuel;
		ANaveEnemigaReabastecimientoBombs* NaveEnemigaTBoms;






		int tipNave = 0;
		for (int i = 0; i < 30;i++) {
			tipNave = rand() % 9;
			FVector posicionNave = FVector(rand() % 1000, rand() % 1000, 250);
			switch (tipNave) {
			case 0:
				NaveEnemigaTAlfa = World->SpawnActor<ANaveEnemigaCazaAlfa>(posicionNave, rotacionNave); 
				TANaveEnemigamix.Push(NaveEnemigaTAlfa); 
				break;
			case 1:
				NaveEnemigaTDelta = World->SpawnActor<ANaveEnemigaCazaDelta>(posicionNave, rotacionNave); 
				TANaveEnemigamix.Push(NaveEnemigaTDelta);
				break;
			case 2:
				NaveEnemigaTLigero = World->SpawnActor<ANaveEnemigaTransporteLigero>(posicionNave, rotacionNave); 
				TANaveEnemigamix.Push(NaveEnemigaTLigero);
				break;
			case 3:
				NaveEnemigaTPesado = World->SpawnActor<ANaveEnemigaTransportePesado>(posicionNave, rotacionNave); 
				TANaveEnemigamix.Push(NaveEnemigaTPesado);
				break;
			case 4:
				NaveEnemigaTScout = World->SpawnActor<ANaveEnemigaEspiaScout>(posicionNave, rotacionNave);  
				TANaveEnemigamix.Push(NaveEnemigaTScout);
				break;
			case 5:
				NaveEnemigaTCentral = World->SpawnActor<ANaveEnemigaEspiaCentral>(posicionNave, rotacionNave); 
				TANaveEnemigamix.Push(NaveEnemigaTCentral);
				break;
			case 6:
				NaveEnemigaTMadre = World->SpawnActor<ANaveEnemigaNodrizaMadre>(posicionNave, rotacionNave);
				TANaveEnemigamix.Push(NaveEnemigaTMadre);
				break;
			case 7:
				NaveEnemigaTWar = World->SpawnActor<ANaveEnemigaNodrizaWar>(posicionNave, rotacionNave);
				TANaveEnemigamix.Push(NaveEnemigaTWar);
				break;
			case 8:
				NaveEnemigaTFuel = World->SpawnActor<ANaveEnemigaReabastecimientoFuel>(posicionNave, rotacionNave); 
				TANaveEnemigamix.Push(NaveEnemigaTFuel);
				break;
			case 9:
				NaveEnemigaTBoms = World->SpawnActor<ANaveEnemigaReabastecimientoBombs>(posicionNave, rotacionNave);
				TANaveEnemigamix.Push(NaveEnemigaTBoms); 
				break;
			default: break;

			}
		}
		TiempoTranscurrido = 0;
		
		
	}

	//NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	//NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
	//NaveEnemigaCazaAlfa01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	//NaveEnemigaCazaDelta01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	//NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
}

