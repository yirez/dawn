// Fill out your copyright notice in the Description page of Project Settings.


#include "DawnEnemy.h"

// Sets default values
ADawnEnemy::ADawnEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADawnEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADawnEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

