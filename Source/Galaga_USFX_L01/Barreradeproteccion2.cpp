// Fill out your copyright notice in the Description page of Project Settings.


#include "Barreradeproteccion2.h"

// Sets default values
ABarreradeproteccion2::ABarreradeproteccion2()
{
	PrimaryActorTick.bCanEverTick = true;
	barreramesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Cube.Shape_Cube'"));
	//Documentos\Unreal Projects\Galaga_USFX_L01\Content\Meshes\REPOMESH\Materials
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Cube.Shape_Cube'"));
	barreramesh2->SetStaticMesh(ShipMesh.Object);
	barreramesh2->SetupAttachment(RootComponent);
	RootComponent = barreramesh2;
	GetActorRelativeScale3D();
	//aumenta el tamano de la nave
	SetActorScale3D(FVector(4, 4, 4));

}

// Called when the game starts or when spawned
void ABarreradeproteccion2::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABarreradeproteccion2::Destruir(float _tempo)
{
	//si el tiempo es mayor a 5 segundos destruir la barrera
	if (_tempo > 4)
	{
		Destroy();
	}
}
// Called every frame
void ABarreradeproteccion2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	tempo += GetWorld()->DeltaTimeSeconds;
	Destruir(tempo);
}


