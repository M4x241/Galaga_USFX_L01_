// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01Pawn.h"
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
#include "NaveEnemiga.h"

const FName AGalaga_USFX_L01Pawn::MoveForwardBinding("MoveForward");
const FName AGalaga_USFX_L01Pawn::MoveRightBinding("MoveRight");
const FName AGalaga_USFX_L01Pawn::FireForwardBinding("FireForward");
const FName AGalaga_USFX_L01Pawn::FireRightBinding("FireRight");

AGalaga_USFX_L01Pawn::AGalaga_USFX_L01Pawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Propios/3e3353478268_76faacc0ed1b_crea_naves_de_batal_fbx/76faacc0ed1b_crea_naves_de_batal.76faacc0ed1b_crea_naves_de_batal'"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;

	MyInventory = CreateDefaultSubobject<UInventarioComponent>("MyInventory");
	//haz una referencia a logro1 creado en el gamemode
	//logro1 = NewObject<ALogros>(this); 
	//logro1= Cast<ALogros>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	/*if (logro1)
	{
		logro1->ModificarVida("escudo", 3);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo crear un objeto Logros."));
	}*/

	barrera1 = CreateDefaultSubobject<UActivacionBarrera>(TEXT("barrera")); 
	movimiento1 = CreateDefaultSubobject<UMovimientoABase>(TEXT("movimiento"));
	colision1 = CreateDefaultSubobject<UColisionType>(TEXT("colision"));


}

void AGalaga_USFX_L01Pawn::DropItem()
{
	if(MyInventory->CurrentInventory.Num() == 0)
	{
		return;
	}
	AmucionV2* Item = MyInventory->CurrentInventory.Last();
	MyInventory->RemoveFromInventory(Item);
	FVector ItemOrigin;
	FVector ItemBounds;
	Item->GetActorBounds(false, ItemOrigin, ItemBounds);
	FTransform PutDownLocation = GetTransform() + FTransform(RootComponent->GetForwardVector() *ItemBounds.GetMax());Item->PutDown(PutDownLocation);
}

void AGalaga_USFX_L01Pawn::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AmucionV2* InventoryItem = Cast<AmucionV2>(Other);
	if (InventoryItem != nullptr)
	{
		TakeItem(InventoryItem);
	}
	else {//destruira de acuerdo al valor de vida, la colision cambia
		//mostrar mensaje en pantalla de la vida actual del jugador
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("TipoColision: ")+ FString::FromInt(vida));
		AActor* zombie = Cast<AActor>(Other); 
		if (zombie != nullptr)
		{
			colision1->SetActorObjetivo(zombie);
			//colision1->SetTypeControl(vida);
		}
		
	}
}

void AGalaga_USFX_L01Pawn::NotifyActorBeginOverlap(AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Coilision: "));
}

void AGalaga_USFX_L01Pawn::BeginOverlap(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("colis: "));

}

void AGalaga_USFX_L01Pawn::RestarVida()
{
	vida--; 
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Vida ENTROOOOOOOOO")); 

	if(ALogros* logro = Cast<ALogros>(logro1))
	{
		logro->EliminarVida();
		
	}

}
///					///////////////////////////////////////Seccion Metodos Activacion de Teclado
void AGalaga_USFX_L01Pawn::Elevar() {
	SetActorLocation(FVector(0,0,0));
	MoveSpeed = 2000.0f;
	GEngine->AddOnScreenDebugMessage(-5, 10.0f, FColor::Blue, TEXT("Entro: ") ); 
}

void AGalaga_USFX_L01Pawn::CamaraCambio()
{
	typecamara *= -1;
	if (typecamara==-1) {
		//camara en primera persona
		CameraBoom->TargetArmLength = 0.f;
		CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
		CameraComponent->bUsePawnControlRotation = false;
		

		

	}
	else {
		CameraBoom->TargetArmLength = 1200.f;
		CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
		CameraBoom->bDoCollisionTest = false;
		CameraComponent->SetRelativeLocation(FVector(0.f, 0.f, 500.f));
		CameraBoom->bEnableCameraLag = true;

	}
}

void AGalaga_USFX_L01Pawn::TakeItem(AmucionV2* InventoryItem)
{
	InventoryItem->PickUp(); 
	MyInventory->AddToInventory(InventoryItem); 
}

void AGalaga_USFX_L01Pawn::Teletransporte()
{
	SetActorLocation(posicionInicial);
}

void AGalaga_USFX_L01Pawn::Saltar()
{
	movimiento1->jumpPressed(); 
}

void AGalaga_USFX_L01Pawn::RegresionInicial()
{
	movimiento1->GoRegresion(true, posicionInicial,0);
		
}

void AGalaga_USFX_L01Pawn::ActivEscudo()
{
	barrera1->Spawn(); 
}

void AGalaga_USFX_L01Pawn::LanzamientoBomba()
{
	movimiento1->jumpPressed();
}

void AGalaga_USFX_L01Pawn::Destruir() //llama al metodo colision de la clase colisionType
{
	colision1->IncrementarTypeControl(); 
}

void AGalaga_USFX_L01Pawn::DisparoDoble()
{
	//movimiento1->jumpPressed();
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("DisparoDoble: ") );
	bCanFire = true;
	FireShot(FVector(1, 0, 0));*/
	FVector FireDirection = GetActorRotation().Vector();
	if (bCanFire) {
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation() + FRotator(0.3, 0.3, 0.3);
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				//World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation, FireRotation);
				if (int(FireDirection.X * 10) == 7 || int(FireDirection.X * 10) == -7)
				{
					FVector Direccion = FVector(int(FireDirection.X * 1.5), int(FireDirection.Y * 1.5), 0);
					World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation + FVector(50 * abs(FireDirection.Y) * Direccion.X * -1,
						50 * abs(FireDirection.X) * Direccion.Y, 0), FireRotation);
					World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation - FVector(50 * abs(FireDirection.Y) * Direccion.X * -1,
						50 * abs(FireDirection.X) * Direccion.Y, 0), FireRotation);
				}
				else
				{
					World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation + FVector(50 * FireDirection.Y, 50 * FireDirection.X, 0), FireRotation);
					World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation - FVector(50 * FireDirection.Y, 50 * FireDirection.X, 0), FireRotation);
				}

			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFX_L01Pawn::ShotTimerExpired, FireRate * 2, false);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
	

}


void AGalaga_USFX_L01Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);//revisar si es necesario

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
	//Movimiento diagonal
	FInputActionKeyMapping diagonalE("DiagonalE", EKeys::Q, 0, 0, 0, 0);
	FInputActionKeyMapping diagonalQ("DiagonalQ", EKeys::E, 0, 0, 0, 0);
	FInputActionKeyMapping diagonalZ("DiagonalZ", EKeys::Z, 0, 0, 0, 0);
	FInputActionKeyMapping diagonalX("DiagonalX", EKeys::X, 0, 0, 0, 0);

	UPlayerInput::AddEngineDefinedActionMapping(diagonalE);
	UPlayerInput::AddEngineDefinedActionMapping(diagonalQ);
	UPlayerInput::AddEngineDefinedActionMapping(diagonalZ);
	UPlayerInput::AddEngineDefinedActionMapping(diagonalX);
	//PlayerInputComponent->BindAxis("DiagonalE",)

	PlayerInputComponent->BindAxis("DiagonalE");
	PlayerInputComponent->BindAxis("DiagonalQ");
	PlayerInputComponent->BindAxis("DiagonalZ");
	PlayerInputComponent->BindAxis("DiagonalX");
	//# TECLAS PERSONALIZADAS
	FInputActionKeyMapping Regresion("BeginGame", EKeys::G, 0, 0, 0, 0);
	FInputActionKeyMapping saltar("Saltar",EKeys::T, 0,0,0,0);
	FInputActionKeyMapping teletransporte("Teletransporte", EKeys::F, 0, 0, 0, 0);
	FInputActionKeyMapping acEscudo("ActivarEscudo", EKeys::K, 0, 0, 0, 0);
	FInputActionKeyMapping dobleDisparo("DobleDisparo", EKeys::J, 0, 0, 0, 0);
	FInputActionKeyMapping lanzarBomba("LanzarBomba", EKeys::L, 0, 0, 0, 0);
	FInputActionKeyMapping balaboomerang("BalaBoomerang", EKeys::H, 0, 0, 0, 0);
		
	UPlayerInput::AddEngineDefinedActionMapping(Regresion);
	UPlayerInput::AddEngineDefinedActionMapping(saltar); 
	UPlayerInput::AddEngineDefinedActionMapping(teletransporte);
	UPlayerInput::AddEngineDefinedActionMapping(acEscudo); 
	UPlayerInput::AddEngineDefinedActionMapping(dobleDisparo);
	UPlayerInput::AddEngineDefinedActionMapping(lanzarBomba);
	UPlayerInput::AddEngineDefinedActionMapping(balaboomerang);

	//PlayerInputComponent->BindAction("Saltar", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::Elevar);
	PlayerInputComponent->BindAction("BeginGame", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::RegresionInicial);//
	PlayerInputComponent->BindAction("Saltar", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::Saltar); 
	PlayerInputComponent->BindAction("Teletransporte", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::Teletransporte); //
	PlayerInputComponent->BindAction("ActivarEscudo", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::ActivEscudo); //
	PlayerInputComponent->BindAction("DobleDisparo", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::DisparoDoble); 
	PlayerInputComponent->BindAction("LanzarBomba", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::LanzamientoBomba);//balaboormeran keys
	PlayerInputComponent->BindAction("BalaBoomerang", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::Elevar);//balaboormeran keys

	//botones de colision
	FInputActionKeyMapping destruir("Destruir", EKeys::O, 0, 0, 0, 0);
	UPlayerInput::AddEngineDefinedActionMapping(destruir);
	PlayerInputComponent->BindAction("Destruir", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::Destruir);


	//botones de camara
	FInputActionKeyMapping camara("CamaraFirst", EKeys::P, 0, 0, 0, 0);
	UPlayerInput::AddEngineDefinedActionMapping(camara);
	PlayerInputComponent->BindAction("CamaraFirst", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::CamaraCambio);


	PlayerInputComponent->BindAction("menuinventario", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::DropItem);
}


void AGalaga_USFX_L01Pawn::Tick(float DeltaSeconds)
{


	// Find movement direction
	//posicionNave = GetPa();
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	//const float diagE = GetInputAxisValue("DiagonalE");
	//const float DiagonalX = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		//CameraComponent->SetRelativeRotation(NewRotation);
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		if (typecamara == -1) {
			CameraBoom->SetRelativeRotation(NewRotation); 
		}
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);
	
}

void AGalaga_USFX_L01Pawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("FireDirection: ") + FireDirection.ToString());
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFX_L01Pawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}
			
			bCanFire = false;
		}
	}
}

void AGalaga_USFX_L01Pawn::ShotTimerExpired()
{
	bCanFire = true;
}

void AGalaga_USFX_L01Pawn::BeginPlay()
{
	Super::BeginPlay();
	//posicionInicial = GetActorLocation(); 
	posicionInicial = FVector(int(GetActorLocation().X), int(GetActorLocation().Y), int(GetActorLocation().Z));
	//ColissionSphere->OnComponentBeginOverlap.AddDynamic(this, &AGalaga_USFX_L01Pawn::BeginOverlap); 
}


