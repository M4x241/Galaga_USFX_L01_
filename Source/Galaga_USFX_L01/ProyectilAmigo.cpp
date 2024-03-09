// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilAmigo.h"

void AProyectilAmigo::DesplazamientoX()
{
	posicionX = posicionX + speed;
}

// Sets default values
AProyectilAmigo::AProyectilAmigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProyectilAmigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectilAmigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

