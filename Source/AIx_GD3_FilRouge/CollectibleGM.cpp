// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectibleGM.h"

// Sets default values
void ACollectibleGM::GetScore(int32 Score)
{
	ScoreTotal = ScoreTotal + Score;
	UE_LOG(LogTemp, Warning, TEXT("Score Total : "), ScoreTotal);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.F, FColor::Purple, FString::Printf(TEXT("Score Total: "), ScoreTotal));
	}
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



	