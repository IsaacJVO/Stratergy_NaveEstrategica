// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerUp.h"
#include "PowerUpVelocidad.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API APowerUpVelocidad : public APowerUp
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APowerUpVelocidad();
	FString tipoCapsula = "Energia";
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(VisibleAnywhere, Category = "FacadeNaves")
	class AFacadeNaves* FacadeNaves;


};
