#include "AProyectil.h"
#include "AProyectil.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"

AProyectil::AProyectil()
{
    PrimaryActorTick.bCanEverTick = true;

    ProyectilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProyectilMesh"));
    RootComponent = ProyectilMesh;

    ProyectilMovimiento = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProyectilMovimiento"));
    ProyectilMovimiento->InitialSpeed = 1000.0f;
    ProyectilMovimiento->MaxSpeed = 1000.0f;
    ProyectilMovimiento->bRotationFollowsVelocity = true;
    ProyectilMovimiento->ProjectileGravityScale = 0.0f;
    Velocidad = 1000.0f;  // Ajusta la velocidad según sea necesario

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ProyectilMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
    if (ProyectilMeshAsset.Succeeded())
    {
        ProyectilMesh->SetStaticMesh(ProyectilMeshAsset.Object);
        ProyectilMesh->SetRelativeScale3D(FVector(0.5f, 1.5f, 2.0f));
    }
}

void AProyectil::BeginPlay()
{
    Super::BeginPlay();
}

void AProyectil::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    MoverProyectil(DeltaTime);
    
}

void AProyectil::MoverProyectil(float DeltaTime)
{

    // Aquí defines el comportamiento de movimiento. Por ejemplo, mover el proyectil hacia adelante:
    FVector NuevaPosicion = GetActorLocation() + (GetActorForwardVector() * Velocidad * DeltaTime);
    SetActorLocation(NuevaPosicion);
}

void AProyectil::Fire()
{
    // Código para manejar el disparo del proyectil, si es necesario
}
