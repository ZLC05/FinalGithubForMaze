// Fill out your copyright notice in the Description page of Project Settings.


#include "ZC_Char.h"

// Sets default values
AZC_Char::AZC_Char()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZC_Char::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZC_Char::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveForward(moveSpeed);
	Rotate(turnSpeed);
}

// Called to bind functionality to input
void AZC_Char::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction(TEXT("Stun"), IE_Pressed, this, &AZC_Char::DoStun);
}

void AZC_Char::DoStun()
{
	//gets all the AI components in a radius and stuns them for a few seconds. On resource for pickups later down the line

}

void AZC_Char::MoveForward(float moveVal)
{
	AddMovementInput(GetActorForwardVector(), moveVal);
}

void AZC_Char::MoveRight(float moveVal) 
{
	AddMovementInput(GetActorForwardVector(), moveVal);
}

void AZC_Char::Rotate(float turnVal)
{
	AddControllerYawInput(turnVal);
}
