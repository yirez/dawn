#include "DawnWeaponComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"

UDawnWeaponComponent::UDawnWeaponComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UDawnWeaponComponent::Fire()
{
    UE_LOG(LogTemp, Warning, TEXT("Weapon Fired!"));

    FVector Location = GetComponentLocation();
    FRotator Rotation = GetComponentRotation();
    FHitResult Hit;
    FVector End = Location + Rotation.Vector() * 10000;

    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());

    if (GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECC_Visibility, Params))
    {
        if (Hit.GetActor())
        {
            Hit.GetActor()->Destroy();
        }
    }

    UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), nullptr, Location);  // Replace nullptr with an actual particle reference
    UGameplayStatics::PlaySoundAtLocation(this, nullptr, Location);           // Replace nullptr with an actual sound
}
