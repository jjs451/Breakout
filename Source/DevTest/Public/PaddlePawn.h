// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "PaddlePawn.generated.h"

UCLASS()
class DEVTEST_API APaddlePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddlePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Static Mesh Component")
	UStaticMeshComponent* SmPaddle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Pawn Component")
	UFloatingPawnMovement* FloatingMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Speed")
	float Speed;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void MoveHorizontal(float AxisValue);

};
