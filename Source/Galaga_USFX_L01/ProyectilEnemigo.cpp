// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilEnemigo.h"
#include "Kismet/GameplayStatics.h"


void AProyectilEnemigo::colision()
{
	// colision con proyectil enemigo
	//if (logro1) {
	//	GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("logro: "));
	//}
	//if (logro1 != nullptr && naveAliada != nullptr) {
	//	GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("ENTRO: "));

	//	if (GetActorLocation().Y - naveAliada->GetPosicionNave().Y >= -200 || logro1->GetActorLocation().Y - naveAliada->GetPosicionNave().Y <= 0) {
	//		//if (logro1->tablavidas["corazon"] <= 3) {
	//		
	//		logro1->InsertarVida("escudo");
	//		//}
	//	}
	//	logro1->InsertarVida("corazon"); 
	//}
	
	
}

// Sets default values
AProyectilEnemigo::AProyectilEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallabala = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Meshes/Projectile.Projectile'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Projectile.Projectile'"));
	mallabala->SetStaticMesh(ShipMesh.Object);
	mallabala->SetupAttachment(RootComponent);
	RootComponent = mallabala;
	naveAliada = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(this, 0));
	logro1 = Cast<ALogros>(UGameplayStatics::GetPlayerPawn(this, 0)); 
}

// Called when the game starts or when spawned
void AProyectilEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectilEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	colision();

}

