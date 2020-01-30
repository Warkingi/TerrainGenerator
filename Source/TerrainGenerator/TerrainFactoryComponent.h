// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TerrainFactoryComponent.generated.h"

class ATerrain;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TERRAINGENERATOR_API UTerrainFactoryComponent : public UActorComponent {

	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTerrainFactoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	/**
	* Generate and return a new Terrain
	* @param Width - The Width of the Terrain.
	* @param Height - The Height of the Terrain.
	* @param Seed - The Generation Seed of the new Terrain.
	*/
	UFUNCTION(BlueprintCallable, Category="Terrain Generation")
	ATerrain* GenerateNewTerrain(int32 Width, int32 Height, int32 Seed);
		
private:

	void PopulateTerrainTiles();

};
