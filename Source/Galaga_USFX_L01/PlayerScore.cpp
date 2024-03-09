// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerScore.h"

void APlayerScore::ScoreNew(float _scoreNaveEnemiga)
{
	scoreActual = scoreActual + _scoreNaveEnemiga;
}

// Sets default values
APlayerScore::APlayerScore()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerScore::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerScore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

