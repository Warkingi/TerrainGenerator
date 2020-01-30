// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class TERRAINGENERATOR_API PerlinNoise {

public:

	float* GenerateNoiseMap2D(const int32 Width, const int32 Height, int32 Scale);

private:

	PerlinNoise() { }
	~PerlinNoise() { }

};
