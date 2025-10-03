// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZC_Character.generated.h"

UCLASS()
class UNREALMAZE_API AZC_Character : public ACharacter
{
	GENERATED_BODY()

private:
	//Private Variables
	UPROPERTY(EditAnywhere)
	float moveSpeed;
	UPROPERTY(EditAnywhere)
	float turnSpeed;


public:
	// Sets default values for this character's properties
	AZC_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//inputs for character
	void MoveForward(float moveVal);
	void MoveRight(float moveVal);
	void Rotate(float turnVal);

};
