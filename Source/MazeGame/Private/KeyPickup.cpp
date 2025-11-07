// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyPickup.h"
#include "Engine/TriggerBox.h"
#include "LockNKey.h"
#include "Engine/Engine.h"

AKeyPickup::AKeyPickup()
{
	OnActorBeginOverlap.AddDynamic(this, &AKeyPickup::OverlapFunction);
}

void AKeyPickup::OverlapFunction(AActor* OverlappedActor, AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Test"));

	key->Destroy();
	this->Destroy();
}
