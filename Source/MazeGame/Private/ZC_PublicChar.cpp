// Fill out your copyright notice in the Description page of Project Settings.


#include "ZC_PublicChar.h"

// Sets default values
AZC_PublicChar::AZC_PublicChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZC_PublicChar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZC_PublicChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AZC_PublicChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveFB"), this, &AZC_PublicChar::MoveFB);
	PlayerInputComponent->BindAxis(TEXT("MoveLR"), this, &AZC_PublicChar::MoveLR);
	PlayerInputComponent->BindAxis(TEXT("Rotate"), this, &AZC_PublicChar::Rotate);

}

void AZC_PublicChar::MoveFB(float moveVal)
{
	AddMovementInput(GetActorForwardVector(), moveVal * moveSpeed);
}

void AZC_PublicChar::MoveLR(float moveVal)
{
	AddMovementInput(-GetActorRightVector(), moveVal * moveSpeed);
}

void AZC_PublicChar::Rotate(float turnVal)
{
	AddControllerYawInput(turnVal * turnSpeed);
}

