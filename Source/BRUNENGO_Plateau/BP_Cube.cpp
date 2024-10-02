// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Cube.h"

// Sets default values
ABP_Cube::ABP_Cube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABP_Cube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_Cube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABP_Cube::ChangeColor()
{
	UMaterialInstanceDynamic* CustomMat = UMaterialInstanceDynamic::Create(Material, CubeMesh);
	CubeMesh->SetMaterial(0, CustomMat);
	CustomMat->SetVectorParameterValue("BaseColor", FinalColor);
}

