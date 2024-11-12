// Fill out your copyright notice in the Description page of Project Settings.


#include "AProjectileAdapter.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
// Sets default values
AAProjectileAdapter::AAProjectileAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//WrappedProjectile = GetWorld()->SpawnActor<AActor>(AProjectile::StaticClass()); // Ejemplo de proyectil


}

void AAProjectileAdapter::Fire(FVector Direction)
{
	if (WrappedProjectile)
	{
		// Lógica para disparar el proyectil
	}
}

void AAProjectileAdapter::OnHit(AActor* OtherActor)
{
	if (WrappedProjectile)
	{
		// Lógica para manejar el impacto
	}
}

// Called when the game starts or when spawned
void AAProjectileAdapter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAProjectileAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

