#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "DawnWeaponComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DAWN_API UDawnWeaponComponent : public USkeletalMeshComponent
{
    GENERATED_BODY()

public:
    UDawnWeaponComponent();
    void Fire();
};
