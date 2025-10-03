// Fill out your copyright notice in the Description page of Project Settings.


#include "ZC_GameModeBase.h"

void AZC_GameModeBase::InitGameState()
{
	Super::InitGameState();

	if (DefaultPawnClass == ADefaultPawn::StaticClass()) {
		DefaultPawnClass = DeafaultPlayerCharacter;
	}
}