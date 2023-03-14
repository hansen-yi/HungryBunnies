// Fill out your copyright notice in the Description page of Project Settings.


#include "Farmer.h"
#include "Components/InputComponent.h"

// Sets default values
AFarmer::AFarmer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set this pawn to be controlled by the lowest-numbered player
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Our root component will be a sphere that reacts to physics
	ShipSphereComponent =
		CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = ShipSphereComponent;
	ShipSphereComponent->InitSphereRadius(10.0f);
	ShipSphereComponent->SetCollisionProfileName(TEXT("Pawn"));
	ShipSphereComponent->SetSimulatePhysics(false);
	ShipSphereComponent->SetEnableGravity(false);
	ShipSphereComponent->SetLinearDamping(0.3);
	ShipSphereComponent->SetAngularDamping(1);
	//ShipSphereComponent->SetConstraintMode(EDOFMode::XYPlane);

}

// Called when the game starts or when spawned
void AFarmer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFarmer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFarmer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Move", this, &AFarmer::Move);
	InputComponent->BindAxis("Turn", this, &AFarmer::Move_Turn);

}

void AFarmer::Move(float AxisValue)
{
	//if (AxisValue > 0)
	//{
		// ShipSphereComponent->AddImpulse(GetActorForwardVector() * AxisValue * 2.0f);
		ShipSphereComponent->AddWorldOffset(GetActorForwardVector() * AxisValue * 2.0f);
	//}
}
void AFarmer::Move_Turn(float AxisValue)
{
	FRotator NewRotation = GetActorRotation();
	NewRotation.Yaw += AxisValue * 2;
	SetActorRotation(NewRotation);
}
