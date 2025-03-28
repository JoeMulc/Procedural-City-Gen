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
	FPlot currentPlot;

	FRoad currentRoad;
	FRoad currentIntersection;
	bool traverseForward = true;
	bool plotFormed = false;


	//Get all the intersections
	for (const FRoad road : finNet)
	{
		if (road.roadTurnType != ETurnType::N)
		{
			intersectionArray.Push(road);
		}
	}

	
	//while (intersectionArray.Num() > 0)
	//{
		currentIntersection = intersectionArray.Last();
		intersectionArray.Pop();

		//while (!plotFormed)
		for (int i =0; i <= 5; i++)
		{
			switch (currentIntersection.roadTurnType)
			{
			case (ETurnType::Intersecting):
				for (const FRoad road : finNet)
				{
					if (!road.sideRoadStart.IsEmpty())
					{
						if (road.sideRoadStart[0] == currentIntersection.End || road.sideRoadStart.Last() == currentIntersection.End)
						{
							currentIntersection = road;
							currentPlot.points.Push(currentIntersection.Start);
							if (road.roadTurnType == ETurnType::IntersectingLeft)
							{
								traverseForward = true;
							}
							else if (road.roadTurnType == ETurnType::IntersectingRight)
							{
								traverseForward = false;
							}
							break;
						}
					}
				
				}

				plotFormed = false;
				currentPlot.points.Empty();
				break;

			case(ETurnType::Left):

				traverseForward = true;
				currentPlot.points.Push(currentIntersection.Start);
				for (const FRoad road : finNet)
				{
					if (road.Start == currentIntersection.sideRoadStart[0])
					{
						currentIntersection = FindIntersection(traverseForward, finNet, road);
						break;
					}
				}
				break;

			case(ETurnType::IntersectingLeft):

				traverseForward = false;
				currentPlot.points.Push(currentIntersection.Start);
				for (const FRoad road : finNet)
				{
					if (road.End == currentIntersection.sideRoadStart[0])
					{
						currentIntersection = FindIntersection(traverseForward, finNet, road);
						break;
					}
				}
				break;
			case(ETurnType::LR):

				traverseForward = true;
				currentPlot.points.Push(currentIntersection.Start);
				for (const FRoad road : finNet)
				{
					if (road.Start == currentIntersection.sideRoadStart[0])
					{
						currentIntersection = FindIntersection(traverseForward, finNet, road);
						break;
					}
				}
				break;
			default:

				plotFormed = false;
				currentPlot.points.Empty();
				break;
			}

			//Check validity of plot
			if (currentIntersection.Start == badRoad)
			{
				plotFormed = true;
				UE_LOG(LogTemp, Display, TEXT("Bad plot"));
				currentPlot.points.Empty();
			}
			else if (!currentPlot.points.IsEmpty() && currentIntersection.Start == currentPlot.points[0])
			{
				plotFormed = true;
				UE_LOG(LogTemp, Display, TEXT("Plot formed lets go!"));
				plotArray.Push(currentPlot);
				currentPlot.points.Empty();
			}
		}
	//}
	plotArray.Push(currentPlot);

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
					if (road.roadTurnType != ETurnType::N && road.roadTurnType != ETurnType::Right && road.roadTurnType != ETurnType::IntersectingRight)
					{
						intersectionFound = true;
						UE_LOG(LogTemp, Display, TEXT("Junction Found Lets go!"));
						return currentRoad;
					}
					break;
				}
			}
			//No intersection found
			currentRoad.Start = badRoad;
			return currentRoad;
		}
	}
	else
	{
		while (!intersectionFound)
		{
			for (const FRoad road : finNet)
			{
				if (currentRoad.Start == road.End)
				{
					currentRoad = road;
					if (road.roadTurnType != ETurnType::N && road.roadTurnType != ETurnType::Left && road.roadTurnType != ETurnType::IntersectingLeft)
					{
						intersectionFound = true;
						UE_LOG(LogTemp, Display, TEXT("Junction Found Lets go!"));
						return currentRoad;
					}
					break;
				}
			}
			//No intersection found
			currentRoad.Start = badRoad;
			return currentRoad;
		}
	}

	return currentRoad;
	
}
