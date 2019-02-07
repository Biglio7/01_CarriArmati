// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AimingCPP.h"
#include "Proiettile.h"
#include "Movimento.h"
#include "TankCPP.generated.h"

UCLASS()
class CARRIARMATI_API ATankCPP : public APawn
{
	GENERATED_BODY()

	FORCEINLINE UTorrettaMesh* GetCannone() { return Cannone; }

	float reload;

public:
	// Sets default values for this pawn's properties
	ATankCPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,Category = "SetUp")
		float reload_time = 3;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SetUp")
		//UMovimento * move = nullptr;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AimAt(FVector HitLocation);
	
	UAimingCPP * Aiming = nullptr;

	UFUNCTION(BlueprintCallable, Category = "Fire")
		void SparaReal();
	
	//UPROPERTY(EditAnywhere, Category = "Setup")
	//	UClass* ProjectileBP;
	
	UPROPERTY(EditAnywhere, Category = "Setup")
		TSubclassOf<AActor> ProjectileBP;
	
protected:

	UFUNCTION(BlueprintCallable, Category = "SetUp")
		void SetCannone(UTorrettaMesh* Set);

	UFUNCTION(BlueprintCallable, Category = "SetUp")
		void SetTorre(UTorrettaMesh* Set);

	UTorrettaMesh* Cannone = nullptr;
	UTorrettaMesh* Torre  = nullptr;

	UPROPERTY(EditAnyWhere, Category = "Firing")
		float Vellancio = 10000;

};
