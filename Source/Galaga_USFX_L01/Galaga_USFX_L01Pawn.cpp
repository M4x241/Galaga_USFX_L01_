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
	//posicionInicial = GetActorLocation();


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
}

void AGalaga_USFX_L01Pawn::DisparoDoble()
{
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
	PlayerInputComponent->BindAction("BeginGame", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::RegresionInicial);
	PlayerInputComponent->BindAction("Saltar", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::Saltar); 
	PlayerInputComponent->BindAction("Teletransporte", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::Teletransporte); 
	PlayerInputComponent->BindAction("ActivarEscudo", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::ActivEscudo);
	PlayerInputComponent->BindAction("DobleDisparo", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::DisparoDoble); 
	PlayerInputComponent->BindAction("LanzarBomba", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::LanzamientoBomba);//balaboormeran keys
	PlayerInputComponent->BindAction("BalaBoomerang", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::Elevar);//balaboormeran keys




	PlayerInputComponent->BindAction("menuinventario", EInputEvent::IE_Pressed, this, &AGalaga_USFX_L01Pawn::DropItem);
}


void AGalaga_USFX_L01Pawn::Tick(float DeltaSeconds)
{


	// Find movement direction
	//posicionNave = GetPa();
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
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
}


