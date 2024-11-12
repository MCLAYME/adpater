// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IProjectileInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIProjectileInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DONKEYKONG_API IIProjectileInterface
{	
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Fire(FVector Direction) = 0;
	virtual void OnHit(AActor* OtherActor) = 0;
};
