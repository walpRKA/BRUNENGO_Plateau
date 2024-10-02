// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BP_Cube.generated.h"

UCLASS(Blueprintable)
class BRUNENGO_PLATEAU_API ABP_Cube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABP_Cube();
	

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FLinearColor FinalColor;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UMaterialInstance* Material;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* CubeMesh;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	void ChangeColor();
};
