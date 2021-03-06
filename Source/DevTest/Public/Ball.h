// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Ball.generated.h"

UCLASS()
class DEVTEST_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall();

	UFUNCTION()
	virtual void Launch();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	bool BallLaunched;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Static Mesh Component")
	UStaticMeshComponent* SmBall;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Projectile Movement Component")
	UProjectileMovementComponent* ProjectileMovement;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	UStaticMeshComponent* GetBall();

};
