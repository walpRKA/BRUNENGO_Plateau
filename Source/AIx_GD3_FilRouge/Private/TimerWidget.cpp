// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerWidget.h"
#include "Components/TextBlock.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

void UTimerWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (TimerText)
	{
		TimerText->SetText(FText::FromString(TEXT("Ready")));
	}
}

void UTimerWidget::StartTimer(float InitialTime)
{
	// Initialiser le temps restant
	RemainingTime = InitialTime;

	// Démarrer le timer qui tick toutes les secondes
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UTimerWidget::TimerTick, 1.0f, true);

	// Mettre à jour le texte initial
	if (TimerText)
	{
		TimerText->SetText(FText::FromString(FString::Printf(TEXT("%d"), FMath::CeilToInt(RemainingTime))));
	}
}
	void UTimerWidget::TimerTick()
{
	// Réduire le temps restant
	RemainingTime--;

	// Mettre à jour le texte
	if (TimerText)
	{
		TimerText->SetText(FText::FromString(FString::Printf(TEXT("%d"), FMath::CeilToInt(RemainingTime))));
	}
	// Vérifier si le temps est écoulé
	if (RemainingTime <= 0)
	{
		// Arrêter le timer
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

		// Appeler la fonction de fin
		EndTimer();
	}
}
		void UTimerWidget::EndTimer()
{
	// Logique lorsque le timer est terminé
	if (TimerText)
	{
		FString NextLevelName = "Test_map"; 

				
		if (!NextLevelName.IsEmpty())
		{
			UGameplayStatics::OpenLevel(this, FName(*NextLevelName));
		}

		UE_LOG(LogTemp, Warning, TEXT("Le compte à rebours est terminé."));
	}
}
	

