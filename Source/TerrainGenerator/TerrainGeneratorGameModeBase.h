// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TerrainGeneratorGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TERRAINGENERATOR_API ATerrainGeneratorGameModeBase : public AGameModeBase {

	GENERATED_BODY()
	
public:
	// Default constructor
	ATerrainGeneratorGameModeBase();

	UPROPERTY(VisibleAnywhere, Category = "Terrain Properties")
	class ATerrain* Terrain;

private:

	UPROPERTY(VisibleAnywhere, Category = "Terrain Properties")
	class UTerrainFactoryComponent* TerrainFactory;

public:

private:

	// Called when the game starts
	virtual void BeginPlay() override;

};
