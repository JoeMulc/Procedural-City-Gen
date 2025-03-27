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
	bool traverseForward = true;
	bool traverseLeft = true;
	bool intersected = false;
	bool plotFormed = false;


	//Get all the intersections
	for (const FRoad road : finNet)
	{
		if (road.roadTurnType != ETurnType::N && road.roadTurnType != ETurnType::Intersecting)
		{
			intersectionArray.Push(road);
		}
	}

	

	currentIntersection = intersectionArray.Pop();
	
	while (!plotFormed)
	{
		if (currentIntersection.roadTurnType == ETurnType::Intersecting)
		{
			for (const FRoad road : finNet)
			{
				if (road.sideRoadStart[0] == currentIntersection.End)
				{
					intersected = true;
					traverseLeft = findRoadDirection(currentIntersection, road, finNet);
					currentIntersection = road;
					plotPoints.Push(currentIntersection.Start);
					break;
				}
				else if (road.sideRoadStart[1] == currentIntersection.End)
				{
					intersected = false;
					traverseLeft = findRoadDirection(currentIntersection, road, finNet);
					currentIntersection = road;
					plotPoints.Push(currentIntersection.Start);
					break;
				}
			}
		}
		else
		{
			intersected = false;
			plotPoints.Push(currentIntersection.Start);
		}
	
		traverseForward = determineTraversePath(intersected, traverseLeft, finNet, currentIntersection);
	}

	//for (const FRoad road : finNet)
	//{
	//	if (road.Start == currentIntersection.sideRoadStart[0])
	//	{
	//		currentRoad = road;
	//		traverseForward = true;
	//		UE_LOG(LogTemp, Display, TEXT("ForwardyWarwardy!"));
	//		break;
	//	}
	//	else if (road.End == currentIntersection.sideRoadStart[0])
	//	{
	//		currentRoad = road;
	//		traverseForward = false;
	//		UE_LOG(LogTemp, Display, TEXT("BackWacky!"));
	//		break;
	//	}
	//}
	//
	//currentIntersection = FindIntersection(traverseForward, finNet, currentRoad);
	//
	//plotPoints.Push(currentIntersection.Start);
	//
	//FPlot plot;
	//plot.points = plotPoints;
	//
	//plotArray.Push(plot);
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
						UE_LOG(LogTemp, Display, TEXT("Junction Found Lets go!"));
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

bool APlotGenerator::determineTraversePath(bool intersected, bool intersectedLeft, TArray<FRoad> finNet, FRoad currentRoad)
{
	//for (const FRoad road : finNet)
	//{
	//	if (road.Start == currentRoad.sideRoadStart[0])
	//	{
	//		currentRoad = road;
	//		traverseForward = true;
	//		UE_LOG(LogTemp, Display, TEXT("ForwardyWarwardy!"));
	//		break;
	//	}
	//	else if (road.End == currentRoad.sideRoadStart[0])
	//	{
	//		currentRoad = road;
	//		traverseForward = false;
	//		UE_LOG(LogTemp, Display, TEXT("BackWacky!"));
	//		break;
	//	}
	//}
	
	return false;
}

bool APlotGenerator::findRoadDirection(FRoad intersectingRoad, FRoad intersectedRoad, TArray<FRoad> finNet)
{
	//traverse road forward 3 roads
	for (int i = 0; i <= 3; i++)
	{
		for (const FRoad road : finNet)
		{
			if (intersectedRoad.End == road.Start)
			{
				intersectedRoad = road;
				break;
			}
		}
	}
	
	FVector vec1 = intersectingRoad.End - intersectingRoad.Start;
	FVector vec2 = intersectedRoad.Start - intersectingRoad.Start;

	double dot = FVector::DotProduct(vec1, vec2);
	double det = (vec1.X * vec2.Y) - (vec1.Y * vec2.X);

	double angle = atan2(det, dot);

	angle = angle * (180 / PI);
	UE_LOG(LogTemp, Display, TEXT("Traversing angle - %f"), angle);

	if (angle > 0)
	{
		return false;
	}
	else
	{
		return true;
	}

}