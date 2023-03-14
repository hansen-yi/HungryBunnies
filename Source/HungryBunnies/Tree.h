// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Farmer.h"
#include "Components/BoxComponent.h"
#include "Materials/Material.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tree.generated.h"

DECLARE_DYNAMIC_DELEGATE(FDelegate);

UCLASS()
class HUNGRYBUNNIES_API ATree : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATree();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UBoxComponent* AsteroidBoxComponent;
	UMaterial* AsteroidMaterial;
	UFUNCTION()
	void onHit(AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditAnywhere)
	FDelegate HitDelegate;
};
