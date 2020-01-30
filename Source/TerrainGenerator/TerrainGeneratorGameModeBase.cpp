// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "TerrainGeneratorGameModeBase.h"
#include "Terrain.h"
#include "TerrainFactoryComponent.h"

ATerrainGeneratorGameModeBase::ATerrainGeneratorGameModeBase() {

	TerrainFactory = CreateDefaultSubobject<UTerrainFactoryComponent>(TEXT("TerrainFactory"));


}

void ATerrainGeneratorGameModeBase::BeginPlay() {

	/* TODO
	* Change out params with passed variables
	*/
	Terrain = TerrainFactory->GenerateNewTerrain(69, 69, 0);

}