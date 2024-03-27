// Fill out your copyright notice in the Description page of Project Settings.


#include "BarreraDeProteccion.h"

// Sets default values
ABarreraDeProteccion::ABarreraDeProteccion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	barreramesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Cube.Shape_Cube'"));
	//Documentos\Unreal Projects\Galaga_USFX_L01\Content\Meshes\REPOMESH\Materials
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Cube.Shape_Cube'"));
	barreramesh->SetStaticMesh(ShipMesh.Object);
	barreramesh->SetupAttachment(RootComponent);
	RootComponent = barreramesh;
	GetActorRelativeScale3D();
	//aumenta el tamano de la nave
	SetActorScale3D(FVector(4, 4, 4));
}

void ABarreraDeProteccion::Destruir(float _tempo)
{
	//si el tiempo es mayor a 5 segundos destruir la barrera
	if (_tempo > 4)
	{
		Destroy();
	}
}

// Called when the game starts or when spawned
void ABarreraDeProteccion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarreraDeProteccion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	tempo += GetWorld()->DeltaTimeSeconds;
	Destruir( tempo); 
}

