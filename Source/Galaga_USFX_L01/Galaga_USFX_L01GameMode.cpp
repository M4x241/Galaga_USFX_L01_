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


		ANaveEnemigaCazaAlfa* NaveEnemigaTAlfa;
		ANaveEnemigaCazaDelta* NaveEnemigaTDelta;
		ANaveEnemigaTransporteLigero* NaveEnemigaTLigero;
		ANaveEnemigaTransportePesado* NaveEnemigaTPesado;
		ANaveEnemigaEspiaScout* NaveEnemigaTScout ;
		ANaveEnemigaEspiaCentral* NaveEnemigaTCentral ;
		ANaveEnemigaNodrizaMadre* NaveEnemigaTMadre;
		ANaveEnemigaNodrizaWar* NaveEnemigaTWar ;
		ANaveEnemigaReabastecimientoFuel* NaveEnemigaTFuel ;
		ANaveEnemigaReabastecimientoBombs* NaveEnemigaTBoms;

		///spwn proyectil
		proyectil = World->SpawnActor<AProyectilEnemigo>(FVector(-1600,-500,250), rotacionNave);

		FVector posicionNave = FVector(rand() % 1000-500, rand() % 1000-500, 200);
		//se generan aleatoriamente las naves enemigas
		int tipNave = 0;
		for (int i = 0; i < 4;i++) {
			tipNave = rand() % 9;
			
			switch (tipNave) {
			case 0:
				 
				//quiero enviar el tipo de actor como parametro
				//GeneradorNaves01->generarNave(NaveEnemigaTAlfa->GetClass(), posicionNave);
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTAlfa = World->SpawnActor<ANaveEnemigaCazaAlfa>(posicionNave+FVector(150 *i,200*j,0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTAlfa);
				}
				 
				break;
			case 1:
				//NaveEnemigaTDelta = World->SpawnActor<ANaveEnemigaCazaDelta>(posicionNave, rotacionNave); 
				//GeneradorNaves01->generarNave(NaveEnemigaTDelta->GetClass(), posicionNave);
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTDelta = World->SpawnActor<ANaveEnemigaCazaDelta>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTDelta);
				}
				break;
			case 2:
				//NaveEnemigaTLigero = World->SpawnActor<ANaveEnemigaTransporteLigero>(posicionNave, rotacionNave); 
				//GeneradorNaves01->generarNave(NaveEnemigaTLigero->GetClass(), posicionNave);
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTLigero = World->SpawnActor<ANaveEnemigaTransporteLigero>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTLigero);
				}
				break;
			case 3:
				//NaveEnemigaTPesado = World->SpawnActor<ANaveEnemigaTransportePesado>(posicionNave, rotacionNave); 
				//GeneradorNaves01->generarNave(NaveEnemigaTPesado->GetClass() , posicionNave);
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTPesado = World->SpawnActor<ANaveEnemigaTransportePesado>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTPesado);
				}
				break;
			case 4:
				//NaveEnemigaTScout = World->SpawnActor<ANaveEnemigaEspiaScout>(posicionNave, rotacionNave);  
				//GeneradorNaves01->generarNave(NaveEnemigaTScout->GetClass() , posicionNave);
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTScout = World->SpawnActor<ANaveEnemigaEspiaScout>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTScout);
				}
				break;
			case 5:
				//NaveEnemigaTCentral = World->SpawnActor<ANaveEnemigaEspiaCentral>(posicionNave, rotacionNave); 
				//GeneradorNaves01->generarNave(NaveEnemigaTCentral->GetClass(), posicionNave);
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTCentral = World->SpawnActor<ANaveEnemigaEspiaCentral>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTCentral);
				}
				break;
			case 6:
				//NaveEnemigaTMadre = World->SpawnActor<ANaveEnemigaNodrizaMadre>(posicionNave, rotacionNave);
				//GeneradorNaves01->generarNave(NaveEnemigaTMadre->GetClass(), posicionNave);
				//TANaveEnemigamix.Push(NaveEnemigaTMadre);
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTMadre = World->SpawnActor<ANaveEnemigaNodrizaMadre>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTMadre);
				}
				break;
			case 7:
				//NaveEnemigaTWar = World->SpawnActor<ANaveEnemigaNodrizaWar>(posicionNave, rotacionNave);
				//GeneradorNaves01->generarNave(NaveEnemigaTWar->GetClass(), posicionNave);
				//TANaveEnemigamix.Push(NaveEnemigaTWar);
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTWar = World->SpawnActor<ANaveEnemigaNodrizaWar>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTWar);
				}
				break;
			case 8:
				//NaveEnemigaTFuel = World->SpawnActor<ANaveEnemigaReabastecimientoFuel>(posicionNave, rotacionNave); 
				//GeneradorNaves01->generarNave(NaveEnemigaTFuel->GetClass() , posicionNave);
				//TANaveEnemigamix.Push(NaveEnemigaTFuel);
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTFuel = World->SpawnActor<ANaveEnemigaReabastecimientoFuel>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTFuel);
				}
				break;
			case 9:
				//NaveEnemigaTBoms = World->SpawnActor<ANaveEnemigaReabastecimientoBombs>(posicionNave, rotacionNave);
				//GeneradorNaves01->generarNave(NaveEnemigaTBoms->GetClass(), posicionNave);
				//TANaveEnemigamix.Push(NaveEnemigaTBoms); 
				for (int j = 0; j < 6; j++) {
					NaveEnemigaTBoms = World->SpawnActor<ANaveEnemigaReabastecimientoBombs>(posicionNave + FVector(150 * i, 200 * j, 0), rotacionNave);
					TANaveEnemigamix.Push(NaveEnemigaTBoms);
				}
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

