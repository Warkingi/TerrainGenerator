// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"

class ATerrain;

/**
 * 
 */
class TERRAINGENERATOR_API TerrainFactory : public UClass {

private:

public:

	/**
	* Generate new terrain based on the passed terrain object.
	* @param Terrain - The Terrain to be modified by the factory.
	* @param Seed - The Generation Seed of the new Terrain.
	*/
	static ATerrain* GenerateNewTerrain(uint32 Width, uint32 Height, uint32 Seed = 0);

private: 

	// Default Constructor
	TerrainFactory() { }
	~TerrainFactory() { }

	void PopulateTerrainTiles();

};
