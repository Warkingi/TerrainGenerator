// Fill out your copyright notice in the Description page of Project Settings.


#include "Terrain.h"
#include "TerrainTile.h"

// Sets default values
ATerrain::ATerrain() : Width(), Height() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

ATerrain::ATerrain(uint32 Width, uint32 Height) {
	this->Width = Width;
	this->Height = Height;
}

// Called when the game starts or when spawned
void ATerrain::BeginPlay() {
	Super::BeginPlay();

	UWorld* world = GetWorld();

	for (uint32 y = 0; y < this->Width; y++) {
		for (uint32 x = 0; x < this->Height; x++) {
			TileMap.Add(FVector2D((float)x, (float)y), nullptr);
		}
	}

}

// Called every frame
void ATerrain::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

