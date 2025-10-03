// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "LockNKey.generated.h"

/**
 * 
 */
UCLASS()
class MAZEGAME_API ALockNKey : public ATriggerBox
{
	GENERATED_BODY()
	
	//functions for checking the actor (to see if the player is the one colliding with the key) and opening/deleting the door

public:
	
	ALockNKey();
	
	UFUNCTION()
	void CheckActorType(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OpenTheDoor();
};
