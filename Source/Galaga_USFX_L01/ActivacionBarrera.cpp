#include "ActivacionBarrera.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UActivacionBarrera::UActivacionBarrera()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UActivacionBarrera::Spawn()
{

	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr) {
		if (tempo >= 4) {
			AActor* parent=GetOwner(); 
			FTransform TransformBarrera;//(this->GetComponentTransform());
			BarreraSpawn=ABarreraDeProteccion::StaticClass(); 
			TransformBarrera.SetLocation(parent->GetActorLocation() + FVector(150, 0, 0)); 
			TransformBarrera.SetRotation(FQuat(0.f, 0.f, 90.f, 90.f)); 
			TransformBarrera.SetScale3D(FVector(5, 0.5, 1));
			//TransformBarrera
			TheWorld->SpawnActor(BarreraSpawn, &TransformBarrera);
			//2
			tempo = 0;
		}
	}

}


// Called when the game starts
void UActivacionBarrera::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UActivacionBarrera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	tempo += GetWorld()->DeltaTimeSeconds;
}