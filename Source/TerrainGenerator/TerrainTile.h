// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TerrainTile.generated.h"

UENUM()
enum class ETileTypes : uint8 {

	UNDEFINED = 0,
	GRASSLAND = 1,

};

UCLASS()
class TERRAINGENERATOR_API ATerrainTile : public AActor {

	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ATerrainTile();

	ATerrainTile(ETileTypes TileType);

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
