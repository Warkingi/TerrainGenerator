// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Terrain.generated.h"

UCLASS()
class TERRAINGENERATOR_API ATerrain : public AActor {

	GENERATED_BODY()
	
public:	
	// Sets default values for Terrain
	ATerrain();
	/**
	* Initalize the Width and Height of the Terrain.
	* @param Width - The Width of the new Terrain.
	* @param Height - The Height of the new Terrain.
	* @param Seed - The world generation Seed.
	* @warning Terrain cannot have a width and height less than 1.
	*/
	void Initialize(uint32 Width, uint32 Height, uint32 Seed = 0);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TMap<FVector2D, class ATerrainTile*> TileMap;

private:

	UPROPERTY(VisibleAnywhere)
	uint32 Width;
	UPROPERTY(VisibleAnywhere)
	uint32 Height;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;


};