// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZC_PublicChar.generated.h"

UCLASS()
class MAZEGAME_API AZC_PublicChar : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float moveSpeed;
	UPROPERTY(EditAnywhere)
	float turnSpeed;
public:
	// Sets default values for this character's properties
	AZC_PublicChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveFB(float moveVal);
	void MoveLR(float moveVal);
	void Rotate(float turnVal);
};
