// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAICPP.h"

void ATankAICPP::BeginPlay()
{
	Super::BeginPlay();

	auto CarroControllato = GetTank();

	if (!CarroControllato)
	{

		UE_LOG(LogTemp, Warning, TEXT("non ho un tank"));
	}
	else
	{

		UE_LOG(LogTemp, Warning, TEXT("controllo il tank %s"), *CarroControllato->GetName());

	}
}

ATankCPP* ATankAICPP::GetTank()
{


	return Cast<ATankCPP>(GetPawn());
}
