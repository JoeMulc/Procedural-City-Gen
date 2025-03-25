// Fill out your copyright notice in the Description page of Project Settings.


#include "PlotGenerator.h"

// Sets default values
APlotGenerator::APlotGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlotGenerator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlotGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<FPlot> APlotGenerator::GeneratePlots(TArray<FRoad> finNet)
{
	TArray<FPlot> plotArray;


	return plotArray;
}
