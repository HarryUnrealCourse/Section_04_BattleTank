// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is macx downward movement, +1 is max upward movement
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 5; //sensible default

	UPROPERTY(EditAnywhere, Category = Setup)
		float MaxElevationDegrees = 40; //sensible default
	
	UPROPERTY(EditAnywhere, Category = Setup)
		float MinElevationDegrees = 0; //sensible default
	
};
