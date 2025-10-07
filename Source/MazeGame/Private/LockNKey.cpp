// Fill out your copyright notice in the Description page of Project Settings.

#include "ZC_PublicChar.h"
#include "LockNKey.h"
#include "Engine/Engine.h"

ALockNKey::ALockNKey()
{
	OnActorBeginOverlap.AddDynamic(this, &ALockNKey::CheckActorType);
}

void ALockNKey::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor->IsA(AZC_PublicChar::StaticClass()))
	{
		OpenTheDoor();
	}
}

void ALockNKey::OpenTheDoor()
{
	this->Destroy();
}


