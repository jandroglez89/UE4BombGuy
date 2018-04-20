// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "MyPlayerPawn.generated.h"

UCLASS()
class UE4BOMBGUY_API AMyPlayerPawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MyPawn, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BodyMesh;



public:
	// Sets default values for this pawn's properties
	AMyPlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyPawn)
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyPawn)
	int PlayerNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyPawn, meta = (AllowPrivateAccess = "true"))
	int BombsAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyPawn, meta = (AllowPrivateAccess = "true"))
	bool LargerBomb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyPawn, meta = (AllowPrivateAccess = "true"))
	bool RemoteDetonation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyPawn, meta = (AllowPrivateAccess = "true"))
	bool CanMove;

	void MoveUp(float value);
	void MoveRight(float value);

	UFUNCTION(BlueprintImplementableEvent)
	void SetBomb();

	UFUNCTION(BlueprintImplementableEvent)
	void SpeedUP();
};
