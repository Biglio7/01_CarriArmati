// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankCPP.h"
#include "TankControllerCPP.generated.h"

/**
 * 
 */
UCLASS()
class CARRIARMATI_API ATankControllerCPP : public APlayerController
{
	GENERATED_BODY()

		virtual void BeginPlay() override;
	    ATankCPP* GetTank();
	
	
};
