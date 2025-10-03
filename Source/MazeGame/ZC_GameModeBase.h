// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "GameFramework/DefaultPawn.h"
#include "ZC_PublicChar.h"
#include "CoreMinimal.h"

#include "GameFramework/GameModeBase.h"
#include "ZC_GameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class MAZEGAME_API AZC_GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	void InitGameState() override;

private:
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<AZC_PublicChar> DeafaultPlayerCharacter = AZC_PublicChar::StaticClass();
};
