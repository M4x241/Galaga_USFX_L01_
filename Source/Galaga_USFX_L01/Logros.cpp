// Fill out your copyright notice in the Description page of Project Settings.


#include "Logros.h"

/*
void ALogros::MedallasActuales(int _level)
{
	if (_level % 100 == 0) {
		tipoMedalla = HUNDRED;
	}
	else if (_level % 50 == 0) {
		tipoMedalla = FIFTEEN;

	}
	else if (_level % 10 == 0) {
		tipoMedalla = TEEN;
	}
	else if (_level % 5 == 0) {
		tipoMedalla = FIVE;
	}
	else {
		tipoMedalla = ONE;
	}
}*/


void ALogros::CalcularPuntaje(FString _name, int _cantidad)///MOSTRAR DESPUES EL INGE
{
	if (tablaPuntaje.Contains(_name)) {
		tablaPuntaje[_name] += _cantidad;
	}
	else {
		tablaPuntaje.Add(_name,_cantidad);
	}
}


// Sets default values
ALogros::ALogros()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALogros::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALogros::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//CalcularPuntaje(nam,can);
}

