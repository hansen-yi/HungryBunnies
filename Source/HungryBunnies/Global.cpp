// Fill out your copyright notice in the Description page of Project Settings.


#include "Global.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGlobal::AGlobal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UBlueprint>
	Tree(TEXT("Blueprint'/Game/TreeBP.TreeBP'"));
	if (Tree.Object) {
		TreeClass = (UClass*)Tree.Object->GeneratedClass;
	}

	static ConstructorHelpers::FObjectFinder<UBlueprint>
	Bunny(TEXT("Blueprint'/Game/BunnyBP.BunnyBP'"));
	if (Bunny.Object) {
		BunnyClass = (UClass*)Bunny.Object->GeneratedClass;
	}

}

// Called when the game starts or when spawned
void AGlobal::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(timerHandle, this, &AGlobal::SpawnBunny, 5.0f, true);
	SpawnTrees();
	CurrentApples = 0;
	BasketApples = 0;
}

// Called every frame
void AGlobal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGlobal::SpawnTrees() {
	UWorld* const World = GetWorld();
	if (World) {
		for (int i = 0; i < 30; i++) {
			/*float random1 = (float)rand() / RAND_MAX;
			float random2 = (float)rand() / RAND_MAX;*/
			APlayerController* cam = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			FVector actorLoc = cam->GetPawn()->GetActorLocation();
			float xPos = (actorLoc[0] - 200) + 40 * (i % 4);
			float yPos = (actorLoc[1] - 120) + 40 * (i / 4);
			FVector spawn = FVector(xPos, yPos, 0);
			ATree* roid = World->SpawnActor<ATree>(TreeClass, spawn, FRotator(0.f));
			roid->HitDelegate.BindDynamic(this, &AGlobal::incrementApples);
		}
	}
}

void AGlobal::incrementApples() {
	CurrentApples += 1;
}

void AGlobal::SpawnBunny() {
	UWorld* const World = GetWorld();
	if (World) {
		/*float random1 = (float)rand() / RAND_MAX;
		float random2 = (float)rand() / RAND_MAX;*/
		APlayerController* cam = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		FVector actorLoc = cam->GetPawn()->GetActorLocation();
		float xPos = FMath::RandRange(-300, 300);
		float yPos = FMath::RandRange(-300, 300);
		FVector spawn = FVector(xPos, yPos, 0);
		AActor* roid = World->SpawnActor<AActor>(BunnyClass, spawn, FRotator(0.f));
		//roid->HitDelegate.BindDynamic(this, &AGlobal::incrementApples);
	}
}

