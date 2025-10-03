j// Fill out your copyright notice in the Description page of Project Settings.


#include "ZC_Character.h"

// Sets default values
AZC_Character::AZC_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZC_Character::BeginPlay()
{
	Super::BeginPlay();

	
	MoveForward(moveSpeed);
	Rotate(turnSpeed);
}

// Called every frame
void AZC_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AZC_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

//Inputs
void AZC_Character::MoveForward(float moveVal)
{
	AddMovementInput(GetActorForwardVector(), moveVal);
}
void AZC_Character::MoveRight(float moveVal)
{

}
void AZC_Character::Rotate(float turnVal)
{
	AddControllerYawInput(turnVal);
}

