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
	
	MovimientoZigZag = CreateDefaultSubobject<UMovimientoZigZag>(TEXT("Movimiento ZigZag"));
	MovimientoZigZag->Iniciando(GetPosicion());
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

}
 

void ANaveEnemigaCazaAlfa::Disparar(FVector FireDirection)
{
	if (bCanFire)
	{
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;

			// Configura un temporizador para reactivar el disparo después de 3 segundos
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveEnemigaCazaAlfa::ShotTimerExpired, 0.5f, false);
			//
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveEnemigaCazaAlfa::ShotTimerExpired, 0.3f, false);
		}
	}
}

void ANaveEnemigaCazaAlfa::Destruirse()
{
}

void ANaveEnemigaCazaAlfa::Escapar()
{
}

