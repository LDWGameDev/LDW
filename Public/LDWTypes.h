// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * Check Condition, if not valid then log a message to Output Log and return, stop logic flow
 */
#define CHECK_LOG_RETURN(Condition, CategoryName, Verbosity, Format, ...) if (!(Condition)) { UE_PRIVATE_LOG(PREPROCESSOR_NOTHING, constexpr, CategoryName, Verbosity, Format, ##__VA_ARGS__); return; }