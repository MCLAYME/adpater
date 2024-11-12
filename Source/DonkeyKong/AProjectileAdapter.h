// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IProjectileInterface.h"
#include "GameFramework/Actor.h"
#include "AProjectileAdapter.generated.h"

UCLASS()
class DONKEYKONG_API AAProjectileAdapter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAProjectileAdapter();

	virtual void Fire(FVector Direction) ;
	virtual void OnHit(AActor* OtherActor) ;

private:
	UPROPERTY()
	AActor* WrappedProjectile; // Referencia al proyectil adaptado
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
