// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerPawn.h"
#include "Components/InputComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/World.h"



// Sets default values
AMyPlayerPawn::AMyPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>("BodyMesh");
	BodyMesh->BodyInstance.SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	BodyMesh->SetSimulatePhysics(true);

	RootComponent = BodyMesh;

	BombsAmount = 1;
	LargerBomb = false;
	CanMove = true;
}

// Called when the game starts or when spawned
void AMyPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

// Called to bind functionality to input
void AMyPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	if (PlayerNumber == 0)
	{
		PlayerInputComponent->BindAxis("MoveUp1", this, &AMyPlayerPawn::MoveUp);
		PlayerInputComponent->BindAxis("MoveRight1", this, &AMyPlayerPawn::MoveRight);
		PlayerInputComponent->BindAction("PlaceBomb1", IE_Pressed, this, &AMyPlayerPawn::SetBomb);
	}
	
	if (PlayerNumber == 1)
	{
		PlayerInputComponent->BindAxis("MoveUp2", this, &AMyPlayerPawn::MoveUp);
		PlayerInputComponent->BindAxis("MoveRight2", this, &AMyPlayerPawn::MoveRight);
		PlayerInputComponent->BindAction("PlaceBomb2", IE_Pressed, this, &AMyPlayerPawn::SetBomb);
	}
}

void AMyPlayerPawn::MoveUp(float Valor)
{
	/*if (CanMove)
	{
		FVector _movement = FVector(1, 0, 0) * Valor * Speed;
		AddActorLocalOffset(_movement);
	}*/
}


void AMyPlayerPawn::MoveRight(float Valor)
{
	/*if (CanMove)
	{
		FVector _movement = FVector(0, 1, 0) * Valor * Speed;
		AddActorLocalOffset(_movement);
	}*/
}

