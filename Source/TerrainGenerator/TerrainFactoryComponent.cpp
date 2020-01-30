// Fill out your copyright notice in the Description page of Project Settings.


#include "Engine/World.h"

#include "TerrainFactoryComponent.h"
#include "Terrain.h"

// Sets default values for this component's properties
UTerrainFactoryComponent::UTerrainFactoryComponent() {
	// Ensure that the Factory does not tick every frame.
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UTerrainFactoryComponent::BeginPlay() {
	Super::BeginPlay();
}

ATerrain* UTerrainFactoryComponent::GenerateNewTerrain(int32 Width, int32 Height, int32 Seed) {

	ATerrain* Terrain;

	Terrain = GetWorld()->SpawnActor<ATerrain>(FVector::ZeroVector, FRotator::ZeroRotator);
	Terrain->Initialize(Width, Height, Seed);

	return Terrain;
}

