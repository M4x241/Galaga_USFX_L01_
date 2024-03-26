// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "mucionV2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AmucionV2 : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	virtual void PickUp();
	virtual void PutDown(FTransform TargetLocation);
	AmucionV2();
};
