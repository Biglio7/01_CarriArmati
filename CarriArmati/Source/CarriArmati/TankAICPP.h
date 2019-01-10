// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankCPP.h"
#include "TankAICPP.generated.h"


UCLASS()
class CARRIARMATI_API ATankAICPP : public AAIController
{
	GENERATED_BODY()

		virtual void BeginPlay() override;
	ATankCPP* GetTank();


};