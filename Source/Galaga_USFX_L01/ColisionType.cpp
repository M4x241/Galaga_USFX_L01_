// Fill out your copyright notice in the Description page of Project Settings.


#include "ColisionType.h"

// Sets default values for this component's properties
UColisionType::UColisionType()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UColisionType::DestruccionZombie(float DeltaTime)
{
	if (typeControl == 1) {
		if (ActorObjetivo)
		{
			ActorObjetivo->Destroy();
		}
	}
}

void UColisionType::ControlZombie(float DeltaTime)
{
	if (typeControl == 2) {
		AActor* actor = GetOwner();
		if(ActorObjetivo && actor)
		{
			ActorObjetivo->SetActorLocation(actor->GetActorLocation()+FVector(150,0,0));
		}
	}
}

void UColisionType::AutoDestruccion(float DeltaTime)
{
	if (typeControl == 3) {
		AActor* actor = GetOwner();
		if (actor && ActorObjetivo)
		{
			actor->Destroy();
		}
	}
}

void UColisionType::Invecible(float DeltaTime)
{
	if (typeControl == 4) {
		AActor* actor = GetOwner();
		if (actor)
		{
			actor->SetActorEnableCollision(false);
		}
	}
}

void UColisionType::DefectColision(float DeltaTime)
{
	if (typeControl == 0 || typeControl > 4) {
		AActor* actor = GetOwner();
		if (actor)
		{
			actor->SetActorEnableCollision(true);
		}
		typeControl = 0;
	}
}

void UColisionType::CamaraFirstPerson(float DeltaTime, int _firstPerson)
{
	firstPerson *= _firstPerson;
	/*if (firstPerson==-1)
	{
		CameraBoom->TargetArmLength = 100.f;
		CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
		CameraComponent->bUsePawnControlRotation = true;
	}
	else {
		CameraBoom->TargetArmLength = 1200.f;
		CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
		CameraComponent->bUsePawnControlRotation = false;
	}*/
}


// Called when the game starts
void UColisionType::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UColisionType::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	DestruccionZombie(DeltaTime); 
	ControlZombie(DeltaTime);
	AutoDestruccion(DeltaTime); 
	Invecible(DeltaTime); 
	DefectColision(DeltaTime);

	// ...
}

