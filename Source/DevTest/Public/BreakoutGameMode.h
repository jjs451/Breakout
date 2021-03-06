// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "HudData.h"
#include "BreakoutGameMode.generated.h"

/**
 * 
 */
UCLASS()
class DEVTEST_API ABreakoutGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	// default constructor 
	ABreakoutGameMode();

protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void LoadLevel(FName levelName);

	UFUNCTION(BlueprintCallable)
	void BindBrickDelegates();

	UFUNCTION(BlueprintCallable)
	void OnBrickDestroyed();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD Widget")
	TSubclassOf<class UHudData> HudWidgetClass;

	UHudData* HudWidget;

	int LivesAtStart;
	int LivesLeft;
	int BricksBroken;
	int TotalBricks;

};
