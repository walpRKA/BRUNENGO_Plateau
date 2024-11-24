// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectibleGM.generated.h"

UCLASS()
class AIX_GD3_FILROUGE_API ACollectibleGM : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UFUNCTION(BlueprintCallable)
	void GetScore(int32 ScoreTotal);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScoreTotal;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
