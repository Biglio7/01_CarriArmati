// Fill out your copyright notice in the Description page of Project Settings.

#include "TankControllerCPP.h"

void ATankControllerCPP::BeginPlay()
{
	Super::BeginPlay();
  
	auto CarroControllato = GetTank();

	if (!CarroControllato)
	{

		UE_LOG(LogTemp, Warning, TEXT("non ho un tank"));
	}
	else
	{

		UE_LOG(LogTemp, Warning, TEXT("controllo il tank %s"),*CarroControllato->GetName());

	}
}

ATankCPP* ATankControllerCPP::GetTank()
{


	return Cast<ATankCPP>(GetPawn());
}

