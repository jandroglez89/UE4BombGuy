// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerMainClass.h"


// Sets default values
APlayerMainClass::APlayerMainClass()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerMainClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerMainClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerMainClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

