#include "DawnCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ADawnCharacter::ADawnCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
    GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(GetCapsuleComponent());
    Camera->SetRelativeLocation(FVector(-10.f, 0.f, 60.f));
    Camera->bUsePawnControlRotation = true;

    Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh1P"));
    Mesh1P->SetupAttachment(Camera);
    Mesh1P->SetOnlyOwnerSee(true);
    Mesh1P->bCastDynamicShadow = false;
    Mesh1P->CastShadow = false;

    WeaponComponent = CreateDefaultSubobject<UDawnWeaponComponent>(TEXT("WeaponComponent"));
    WeaponComponent->SetupAttachment(Mesh1P, TEXT("GripPoint"));
}

void ADawnCharacter::BeginPlay()
{
    Super::BeginPlay();
}
