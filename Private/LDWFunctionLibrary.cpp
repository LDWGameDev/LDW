// Fill out your copyright notice in the Description page of Project Settings.


#include "LDWFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Actor.h"

bool ULDWFunctionLibrary::IsPlacedInLevel(AActor* Actor)
{
	return (IsValid(Actor) ? Actor->IsNetStartupActor() : false);
}

float ULDWFunctionLibrary::GetAngleBetween2Vectors_NegPos180(const FVector& StartVector, const FVector& EndVector)
{
	FVector StartNormarlized = StartVector;
	StartNormarlized.Normalize();
	FVector EndNormalized = EndVector;
	EndNormalized.Normalize();

	if (UKismetMathLibrary::Vector_IsNearlyZero(StartNormarlized, 0.001f) || UKismetMathLibrary::Vector_IsNearlyZero(EndNormalized, 0.001f)) return 0.0f;
	float AngleResult = FMath::RadiansToDegrees(acosf(FVector::DotProduct(StartNormarlized, EndNormalized)));
	AngleResult = FMath::Clamp(AngleResult, 0.0f, 180.0f);

	return ((FVector::CrossProduct(StartNormarlized, EndNormalized).Z > 0) ? AngleResult : -AngleResult);
}
