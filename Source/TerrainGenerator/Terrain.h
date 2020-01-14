// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TerrainTile.h"
#include "Terrain.generated.h"

UCLASS()
class TERRAINGENERATOR_API ATerrain : public AActor {

	GENERATED_BODY()
	
public:	
	// Sets default values for Terrain
	ATerrain();
	/**
	* Set the width and height of the Terrain.
	* @param Width - The Width of the new Terrain.
	* @param Height - The Height of the new Terrain.
	* @warning Terrain cannot have a width and height less than 1
	*/
	ATerrain(uint32 Width, uint32 Height);

	uint32 Width, Height;

	UPROPERTY()
	TMap<FVector2D, ATerrainTile*> TileMap;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};