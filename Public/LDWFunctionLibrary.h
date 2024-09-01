// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LDWFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LDW_API ULDWFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * @return True if actor is placed in level, False otherwise
	 */
	UFUNCTION(BlueprintPure, Category = "LDW|General")
		static bool IsPlacedInLevel(AActor* Actor);

	/**
	 * Get angle between 2 vectors, from -180 to 180. 
	 * Less than 0 if the EndVector is on the left side of the StartVector
	 * 
	 * @param	StartVector		Start vector to calculate
	 * @param	EndVector		End vector to calculate
	 * @return	Angle between 2 vectors, value range [-180, 180]
	 */
	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"), Category = "LDW|Math")
		static float GetAngleBetween2Vectors_NegPos180(const FVector& StartVector, const FVector& EndVector);
};
