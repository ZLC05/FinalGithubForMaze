// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "LockNKey.h"
#include "KeyPickup.generated.h"

/**
 * 
 */
UCLASS()
class MAZEGAME_API AKeyPickup : public ATriggerBox
{
	GENERATED_BODY()
	

public:

	AKeyPickup(); //Generation

	//Function for overlap
	UFUNCTION()
	void OverlapFunction(AActor* OverlappedActor, AActor* OtherActor);

	///Variable for the door
	UPROPERTY(EditAnywhere)
	ALockNKey* key;
};
