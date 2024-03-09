// Fill out your copyright notice in the Description page of Project Settings.


#include "NavesRestantes.h"

void ANavesRestantes::addNave(int _score)
{
	totalNaves++;
	if (totalNaves <= navesMax) {
		if (_score % 50000*totalNaves == 0) {
			//crear nuevo objeto alado
		}

	}
	else {
		//cout << totalNaves;
	}
}

void ANavesRestantes::deleteNave()
{
	totalNaves--;
	if (totalNaves <= navesMax) {
		//borrar nave objeto

	}
}

// Sets default values
ANavesRestantes::ANavesRestantes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANavesRestantes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANavesRestantes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

