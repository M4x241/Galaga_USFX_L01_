// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaAlfa.h"
#include "Galaga_USFX_L01Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

void ANaveEnemigaCazaAlfa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

ANaveEnemigaCazaAlfa::ANaveEnemigaCazaAlfa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/EnemyLevel4.EnemyLevel4'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	posicionalfa = GetActorLocation();
	//posicion = FVector(1200, -1000, 250);

	//****************************##############################################ERROR
	//PrimaryActorTick.bCanEverTick = true; ///esta cosa al activarla en la hija de la hija es que no se puede 
}

void ANaveEnemigaCazaAlfa::Mover(float DeltaTime)
{
	ANaveEnemigaCaza::Mover(DeltaTime); 
	speed = 3;
	SetActorRotation(FRotator(0, 180, vueltas)); 
	vueltas+=2;
	SetActorLocation(FVector(GetActorLocation().X -speed, GetActorLocation().Y + speed*banderaA, GetActorLocation().Z));
	posicionalfa = GetActorLocation();
	if (GetActorLocation().Y > GetPosicion().Y+500 || GetActorLocation().Y < GetPosicion().Y - 500) {
		banderaA *= -1;
	}
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
	}
	if (vueltas > 360) {
		
		vueltas = 0;
	}
	if (vueltas % 60<=3) {
		const FVector FireDirection = FVector(-1.f, 0.f, 0.f);
		Disparar(FireDirection);
	}

	//disparo cada vuelta que de
}
 

void ANaveEnemigaCazaAlfa::Disparar(FVector FireDirection)
{
	if (bCanFire)
	{
		// Si la dirección de disparo tiene un tamaño cuadrado mayor que 0 (es decir, si hay una dirección válida)
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Calcula la ubicación de donde se debe disparar el proyectil
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			// Obtiene el mundo
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// Spawnea el proyectil
				World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation, FireRotation);
			}

			// Establece bCanFire en falso para evitar disparos continuos
			bCanFire = false;

			// Configura un temporizador para reactivar el disparo después de 3 segundos
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveEnemigaCazaAlfa::ShotTimerExpired, 0.1f, false);
		}
	}
}

void ANaveEnemigaCazaAlfa::Destruirse()
{
}

void ANaveEnemigaCazaAlfa::Escapar()
{
}

