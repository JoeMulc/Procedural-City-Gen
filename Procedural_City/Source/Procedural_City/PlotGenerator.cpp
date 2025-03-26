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

//UE_LOG(LogTemp, Display, TEXT("Bongin! - %i"), secondQ.Top()->roadLength);
//UE_LOG(LogTemp, Display, TEXT("Bongin!"));
TArray<FPlot> APlotGenerator::GeneratePlots(TArray<FRoad> finNet)
{
	//Initialise TArrays
	TArray<FPlot> plotArray;
	TArray<FRoad> intersectionArray;
	TArray<FVector> plotPoints;

	FRoad currentRoad;
	FRoad currentIntersection;
	bool traverseForward;


	//Get all the intersections
	for (const FRoad road : finNet)
	{
		if (road.roadTurnType != ETurnType::N && road.roadTurnType != ETurnType::Intersecting)
		{
			intersectionArray.Push(road);
		}
	}

	
	currentIntersection = intersectionArray.Top();
	intersectionArray.Pop();
	
	plotPoints.Push(currentIntersection.Start);

	for (const FRoad road : finNet)
	{
		if (road.Start == currentIntersection.sideRoadStart[0])
		{
			currentRoad = road;
			traverseForward = true;
			UE_LOG(LogTemp, Display, TEXT("ForwardyWarwardy!"));
			break;
		}
		else if (road.End == currentIntersection.sideRoadStart[0])
		{
			currentRoad = road;
			traverseForward = false;
			UE_LOG(LogTemp, Display, TEXT("BackWacky!"));
			break;
		}
	}

	currentIntersection = FindIntersection(traverseForward, finNet, currentRoad);

	plotPoints.Push(currentIntersection.Start);

	FPlot plot;
	plot.points = plotPoints;

	plotArray.Push(plot);
	return plotArray;
}

FRoad APlotGenerator::FindIntersection(bool traverseForward, TArray<FRoad> finNet, FRoad currentRoad)
{
	bool intersectionFound = false;

	if (traverseForward)
	{
		while (!intersectionFound)
		{
			for (const FRoad road : finNet)
			{
				if (currentRoad.End == road.Start)
				{
					currentRoad = road;
					if (road.roadTurnType != ETurnType::N)
					{
						intersectionFound = true;
						UE_LOG(LogTemp, Display, TEXT("Int Found Lets go!"));
						return currentRoad;
					}
					break;
				}
			}
		}
	}
	//else
	//{
	//	while (!intersectionFound)
	//	{
	//		for (const FRoad road : finNet)
	//		{
	//
	//		}
	//	}
	//}

	return currentRoad;
	
}