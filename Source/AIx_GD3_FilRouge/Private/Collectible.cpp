// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectible.h"

// Sets default values for this component's properties
UCollectible::UCollectible()

{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCollectible::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UCollectible::AddScore()
{
	score = score + scoretoadd;
	UE_LOG(LogTemp, Warning, TEXT("score : %d"), score);
	
}


// Called every frame
void UCollectible::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

