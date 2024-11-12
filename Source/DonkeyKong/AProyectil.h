#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AProyectil.generated.h"

UCLASS()
class DONKEYKONG_API AProyectil : public AActor
{
    GENERATED_BODY()

public:
    AProyectil();

    void Fire();  // Ya no tiene 'override'

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere, Category = "Mesh")
    UStaticMeshComponent* ProyectilMesh;

    UPROPERTY(VisibleAnywhere, Category = "Movement")
    UProjectileMovementComponent* ProyectilMovimiento;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
    float Velocidad;
    void MoverProyectil(float DeltaTime);

};
