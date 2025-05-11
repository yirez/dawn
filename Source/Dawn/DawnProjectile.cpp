// Fill out your copyright notice in the Description page of Project Settings.


#include "DawnProjectile.h"

// Sets default values
ADawnProjectile::ADawnProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADawnProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADawnProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

