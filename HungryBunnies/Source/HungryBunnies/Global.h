// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tree.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Global.generated.h"

UCLASS()
class HUNGRYBUNNIES_API AGlobal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGlobal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TSubclassOf<class ATree> TreeClass;
	void SpawnTrees();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global")
	int32 CurrentApples;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global")
	int32 BasketApples;
	FTimerHandle timerHandle;

	UFUNCTION()
	void incrementApples();
};
