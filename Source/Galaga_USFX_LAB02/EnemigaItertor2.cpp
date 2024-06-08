// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigaItertor2.h"

// Sets default values
AEnemigaItertor2::AEnemigaItertor2()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaIte(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_18.TwinStickUFO_18'"));
	MallaI = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaReloj"));
	RootComponent = MallaI;
	MallaI->SetStaticMesh(MallaIte.Object);

}

// Called when the game starts or when spawned
void AEnemigaItertor2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigaItertor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

