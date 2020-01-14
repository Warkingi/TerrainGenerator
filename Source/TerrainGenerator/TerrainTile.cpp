// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainTile.h"

// Sets default values
ATerrainTile::ATerrainTile() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>("Mesh");

}

// Called when the game starts or when spawned
void ATerrainTile::BeginPlay() {
	Super::BeginPlay();
	
}

// Called every frame
void ATerrainTile::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}

