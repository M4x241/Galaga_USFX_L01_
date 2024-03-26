// Fill out your copyright notice in the Description page of Project Settings.


#include "Logros.h"


/*
void ALogros::CalcularVida(FString _name, int _cantidad)///MOSTRAR DESPUES EL INGE
{
	if (tablavidas.Contains(_name)) {
		tablavidas[_name] += _cantidad;
	}
	else {
		tablavidas.Add(_name,_cantidad);
	}
}*/

void ALogros::InsertarVida(FString _name)
{
	tablavidas[_name] += 1;
}

void ALogros::EliminarVida(FString _name)
{
	tablavidas[_name] -= 1;
}

void ALogros::ModificarVida(FString _name,int newvida)
{
	tablavidas[_name] = newvida;
}

void ALogros::ListarVida()
{
	if (temporizador >= 2) {
		GEngine->ClearOnScreenDebugMessages();

		temporizador = 0;
		
	}
	else {
		Getcorazones();
		Getescudos();
	}
	
}
void ALogros::Getcorazones()
{
	int numvidas = tablavidas["corazon"];
	FString VidasString = FString::FromInt(numvidas);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("VIDAS: ") + VidasString);

	/*if (temporizador == 1) {
		GEngine->ClearOnScreenDebugMessages();
		temporizador = 0;
	}*/
}
void ALogros::Getescudos()
{
	int numescudo = tablavidas["escudo"];
	FString EscudoString = FString::FromInt(numescudo);
	GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("ESCUDO: ") + EscudoString);

	
}


// Sets default values
//constructor
ALogros::ALogros()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	tablavidas.Add("corazon", 1);
	tablavidas.Add("escudo", 0);


	///malla
	mallalogro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/Food.Food'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Food.Food'"));
	mallalogro->SetStaticMesh(ShipMesh.Object);
	mallalogro->SetupAttachment(RootComponent);
	RootComponent = mallalogro;

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
	ListarVida();
	temporizador++;
}

