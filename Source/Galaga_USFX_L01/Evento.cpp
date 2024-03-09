// Fill out your copyright notice in the Description page of Project Settings.


#include "Evento.h"

void AEvento::Anuncio()
{
	if (bonus) {
		//cout<<"Bonus level"<<endl;
	}
	else {
		//cout<<"Stage "<<level<<endl;
	}
}

// Sets default values
AEvento::AEvento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEvento::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEvento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

