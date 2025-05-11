#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DawnWeaponComponent.h"
#include "DawnCharacter.generated.h"

UCLASS()
class DAWN_API ADawnCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ADawnCharacter();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class UCameraComponent* Camera;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class USkeletalMeshComponent* Mesh1P;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class UDawnWeaponComponent* WeaponComponent;
};
