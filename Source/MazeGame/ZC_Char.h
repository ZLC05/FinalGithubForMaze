// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZC_Char.generated.h"

UCLASS()
class MAZEGAME_API AZC_Char : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float moveSpeed;
	UPROPERTY(EditAnywhere)
	float turnSpeed;

public:
	// Sets default values for this character's properties
	AZC_Char();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float moveVal);
	void MoveRight(float moveVal);
	void Rotate(float turnVal);
};
