// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InventarioComponent.h"
#include "mucionV2.h"
#include "GameFramework/PlayerInput.h"//revisar el player controler
#include "ActivacionBarrera.h"
#include "MovimientoABase.h"
#include "Logros.h" 
#include "Galaga_USFX_L01Pawn.generated.h"
class UActivacionBarrera;
class UMovimientoABase;

UCLASS(Blueprintable)
class AGalaga_USFX_L01Pawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	//AGREGANDO SACAR VALOR DE LA POSICON
	
private:
	UPROPERTY(VisibleAnywhere)
	FVector posicionInicial;
	int vida = 3;
	AActor* logro1;
	UActivacionBarrera* barrera1;
	UMovimientoABase* movimiento1;
	//bool regresar = false;

	/// definiendo teclas

	
public:
	FORCEINLINE FVector GetPosicionNave() const { return GetActorLocation(); }
	FORCEINLINE int GetVida()const { return vida; }
	FORCEINLINE void SetVida(int _vida) { vida = _vida; }
	FORCEINLINE void SetLogro(ALogros* _logro) { logro1 = _logro; }
	//FORCEINLINE ALogros* GetLogro() { return logro1; }
	void RestarVida();
	// # FUNCIONES DE TECLAS	
	void Elevar();
	FORCEINLINE void RegresionInicial();
	FORCEINLINE void Saltar();

	FORCEINLINE void Teletransporte();
	FORCEINLINE void ActivEscudo();
	FORCEINLINE void DisparoDoble(); 
	
	FORCEINLINE void LanzamientoBomba();  


	//===========================
	UPROPERTY()
	UInventarioComponent* MyInventory;
	
	
	UFUNCTION()
	void TakeItem(AmucionV2* InventoryItem);
	
	UFUNCTION()
	void DropItem();

	

	UFUNCTION()
	virtual void NotifyHit(class UPrimitiveComponent* MyComp,
		AActor* Other, class UPrimitiveComponent* OtherComp,
		bool bSelfMoved, FVector HitLocation, FVector
		HitNormal, FVector NormalImpulse, const FHitResult&
		Hit) override;
	
public:
	AGalaga_USFX_L01Pawn();
	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;
protected:
	virtual void BeginPlay() override;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
public:
	//modificamos la velocidad
	FORCEINLINE void SetVelociad(float _MoveSpeed) { MoveSpeed = _MoveSpeed; }
};

