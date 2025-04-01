// Fill out your copyright notice in the Description page of Project Settings.

//While loop is struggling
//Maybe issue where plot ponts is being emptied
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
	int tracker = 0;
	bool roadFound = true;


	//Get all the intersections
	for (const FRoad road : finNet)
	{
		if (road.roadTurnType != ETurnType::N)
		{
			intersectionArray.Push(road);
		}
	}

	
	while (intersectionArray.Num() > 0)
	{
		currentIntersection = intersectionArray.Last();
		intersectionArray.Pop();
		plotFormed = false;
		tracker = 0;

		while (!plotFormed)
		{
			roadFound = false;
			UE_LOG(LogTemp, Display, TEXT("Current int! - %f"), currentIntersection.Start.X);
			switch (currentIntersection.roadTurnType)
			{
			case (ETurnType::Intersecting):
				UE_LOG(LogTemp, Display, TEXT("Intersecting"));
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
								UE_LOG(LogTemp, Display, TEXT("Found intersecting Left"));
								traverseForward = true;
							}
							else if (road.roadTurnType == ETurnType::IntersectingRight)
							{
								UE_LOG(LogTemp, Display, TEXT("Found intersecting Right"));
								traverseForward = false;
							}

							currentIntersection = FindIntersection(traverseForward, finNet, road);
							break;
						}
					}
				
				}

				currentIntersection.Start = badRoad;
				break;

			case(ETurnType::Left):
				UE_LOG(LogTemp, Display, TEXT("Left"));
				traverseForward = true;
				currentPlot.points.Push(currentIntersection.Start);
				for (const FRoad road : finNet)
				{
					if (road.Start == currentIntersection.sideRoadStart[0])
					{
						roadFound = true;
						currentIntersection = FindIntersection(traverseForward, finNet, road);
						break;
					}
				}
				if (roadFound == false)
				{
					currentIntersection.Start = badRoad;
				}

				break;

			case(ETurnType::IntersectingLeft):
				UE_LOG(LogTemp, Display, TEXT("IntersectingLeft"));
				traverseForward = false;
				currentPlot.points.Push(currentIntersection.Start);
				for (const FRoad road : finNet)
				{
					if (road.End == currentIntersection.sideRoadStart[0])
					{
						roadFound = true;
						UE_LOG(LogTemp, Display, TEXT("Found road"));
						currentIntersection = FindIntersection(traverseForward, finNet, road);
						break;
					}
				}
				if (roadFound == false)
				{
					currentIntersection.Start = badRoad;
				}
				
				break;
			case(ETurnType::LR):
				UE_LOG(LogTemp, Display, TEXT("LR"));
				traverseForward = true;
				currentPlot.points.Push(currentIntersection.Start);
				for (const FRoad road : finNet)
				{
					if (road.Start == currentIntersection.sideRoadStart[0])
					{
						roadFound = true;
						currentIntersection = FindIntersection(traverseForward, finNet, road);
						break;
					}
				}
				if (roadFound == false)
				{
					currentIntersection.Start = badRoad;
				}
				
				break;
			case(ETurnType::traverseForward):
				UE_LOG(LogTemp, Display, TEXT("Traverse Forward"));
				traverseForward = true;
				currentPlot.points.Push(currentIntersection.Start);
				currentIntersection = FindIntersection(traverseForward, finNet, currentIntersection);
				break;
			case(ETurnType::traverseBack):
				UE_LOG(LogTemp, Display, TEXT("Traverse Backward"));
				traverseForward = false;
				currentPlot.points.Push(currentIntersection.Start);
				currentIntersection = FindIntersection(traverseForward, finNet, currentIntersection);
				break;
			default:
				UE_LOG(LogTemp, Warning, TEXT("Default"));
				plotFormed = true;
				currentPlot.points.Empty();
				break;
			}

			//Check validity of plot
			if (currentIntersection.Start == badRoad)
			{
				plotFormed = true;
				UE_LOG(LogTemp, Warning, TEXT("Bad plot"));
				currentPlot.points.Empty();
			}
			else if (!currentPlot.points.IsEmpty() && currentIntersection.Start == currentPlot.points[0] && currentPlot.points.Num() >= 4)
			{
				plotFormed = true;
				UE_LOG(LogTemp, Warning, TEXT("Plot formed lets go!"));
				plotArray.Push(currentPlot);
				currentPlot.points.Empty();
			}
			if (tracker >= 10)
			{
				plotFormed = true;
				UE_LOG(LogTemp, Warning, TEXT("Tracker limit reached"));
				currentPlot.points.Empty();
			}
			tracker++;
		}
	}

	return plotArray;
}

FRoad APlotGenerator::FindIntersection(bool traverseForward, TArray<FRoad> finNet, FRoad currentRoad)
{
	bool intersectionFound = false;
	bool roadFound = false;

	if (traverseForward)
	{
		while (!intersectionFound)
		{
			roadFound = false;
			for (const FRoad road : finNet)
			{
				if (currentRoad.End == road.Start)
				{
					roadFound = true;
					currentRoad = road;
					if (road.roadTurnType != ETurnType::N && road.roadTurnType != ETurnType::Right && road.roadTurnType != ETurnType::IntersectingRight && road.roadTurnType != ETurnType::Intersecting)
					{
						intersectionFound = true;
						UE_LOG(LogTemp, Display, TEXT("Forward - Junction Found Lets go!"));
						return currentRoad;
					}
					else if (road.roadTurnType == ETurnType::Intersecting)
					{
						for (const FRoad sideRoad : finNet)
						{
							if (!sideRoad.sideRoadStart.IsEmpty())
							{
								if (sideRoad.sideRoadStart[0] == currentRoad.End || sideRoad.sideRoadStart.Last() == currentRoad.End)
								{
									currentRoad = sideRoad;
									intersectionFound = true;
									UE_LOG(LogTemp, Display, TEXT("Forward - sideroad found Found Lets go!"));
									return currentRoad;
								}
							}
						}	
					}
					break;
				}
			}
			if (roadFound == false)
			{
				intersectionFound = true;
			}
		}
	}
	else
	{
		while (!intersectionFound)
		{
			roadFound = false;
			for (const FRoad road : finNet)
			{
				if (currentRoad.Start == road.End)
				{
					roadFound = true;
					currentRoad = road;
					if (road.roadTurnType != ETurnType::N && road.roadTurnType != ETurnType::Left && road.roadTurnType != ETurnType::IntersectingLeft)
					{
						intersectionFound = true;
						UE_LOG(LogTemp, Display, TEXT("Back - Junction Found Lets go!"));
						return currentRoad;
					}
					else if (!road.sideRoadStart.IsEmpty())
					{
						if (road.sideRoadStart[0] == currentRoad.Start || road.sideRoadStart.Last() == currentRoad.Start)
						{
							UE_LOG(LogTemp, Display, TEXT("Tricky intersection"));
							if (road.roadTurnType == ETurnType::Left)
							{
								currentRoad = road;
								currentRoad.roadTurnType = ETurnType::traverseForward;
								return currentRoad;
							}
							else if (road.roadTurnType == ETurnType::Right)
							{
								currentRoad = road;
								currentRoad.roadTurnType = ETurnType::traverseBack;
								return currentRoad;
							}
							else if (road.roadTurnType == ETurnType::LR)
							{
								if (road.sideRoadStart[0] == currentRoad.Start)
								{
									currentRoad = road;
									currentRoad.roadTurnType = ETurnType::traverseForward;
									return currentRoad;
								}
								else
								{
									currentRoad = road;
									currentRoad.roadTurnType = ETurnType::traverseBack;
									return currentRoad;
								}
							}
						}
					}

					break;
				}
			}
			if (roadFound == false)
			{
				intersectionFound = true;
			}
		}
	}

	UE_LOG(LogTemp, Display, TEXT("End"));
	currentRoad.Start = badRoad;
	return currentRoad;	
}
