// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TimerWidget.generated.h"

/**
 * 
 */
UCLASS()
class AIX_GD3_FILROUGE_API UTimerWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	//Fonction timer à lancer 
		UFUNCTION(BlueprintCallable, Category = "Timer")
		void StartTimer(float InitialTime = 20.0f);

protected :
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TimerText;

private :
	float RemainingTime;

	FTimerHandle TimerHandle;
//On timer tick
	void TimerTick();
//On timer end
	void EndTimer();

	

	
	
	
	
};
