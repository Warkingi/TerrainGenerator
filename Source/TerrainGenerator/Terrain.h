// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Terrain.generated.h"

#define DEFAULT_WIDTH = 100
#define DEFAULT_HEIGHT = 100 // TODO: Setup default macros

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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TMap<FVector2D, class ATerrainTile*> TileMap;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ATerrainTile> tile;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};