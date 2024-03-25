// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "ActivacionBarrera.h"

// Sets default values for this component's properties
UActivacionBarrera::UActivacionBarrera()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	//barrera = CreateDefaultSubobject<USceneComponent>(TEXT("MySceneComponent"));
	//barrera->SetupAttachment(RootComponent);
	//RootComponent = barrera;
	NaveBuena = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(this, 0));
	// ...
}

void UActivacionBarrera::Spawn()
{
	UWorld* TheWorld = GetWorld(); 
	if (TheWorld!=nullptr) {
		tempo++;
		if (tempo >= 200) {
			FTransform TransformBarrera(this->GetComponentTransform());
			//FVector pos = NaveBuena->Getcomponent();
			///estas lineas me permiten modificar su posicion
			//para que siempre aparezca arriba
			TransformBarrera.SetLocation(GetComponentLocation()+FVector(300,0,0));
			TransformBarrera.SetRotation(FQuat(0.f,0.f,90.f,90.f));
			//TransformBarrera
			TheWorld->SpawnActor(BarreraSpawn, &TransformBarrera);
			tempo = 0;
		}
	}

}


// Called when the game starts
void UActivacionBarrera::BeginPlay()
{
	Super::BeginPlay();
	//Spawn(); 
	// ...
	
}


// Called every frame
void UActivacionBarrera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Spawn();
	// ...
}

