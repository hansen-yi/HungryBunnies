// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Components/SphereComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Farmer.generated.h"

UCLASS()
class HUNGRYBUNNIES_API AFarmer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFarmer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	USphereComponent* ShipSphereComponent;

	//Input functions
	void Move(float AxisValue);
	void Move_Turn(float AxisValue);
};
