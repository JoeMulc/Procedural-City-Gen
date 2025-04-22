// Fill out your copyright notice in the Description page of Project Settings.

//While loop is struggling
//Maybe issue where plot ponts is being emptied
#include "PlotGenerator.h"

// Sets default values
APlotGenerator::APlotGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	deflateDistance *= 100;

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
//need to change default to right intersecting right etc...
TArray<FPlot> APlotGenerator::GeneratePlots(TArray<FRoad> finNet)
{
	//Initialise TArrays
	TArray<FPlot> plotArray;
	TArray<FRoad> intersectionArray;
	TArray<FVector> roadsToDestroy;
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
							roadFound = true;
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
				if (roadFound == false)
				{
					UE_LOG(LogTemp, Display, TEXT("Intersecting - No Road Found"));
					currentIntersection.Start = badRoad;
				}

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
			case(ETurnType::Right):
				UE_LOG(LogTemp, Display, TEXT("Right"));
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
			case(ETurnType::IntersectingRight):
				UE_LOG(LogTemp, Display, TEXT("InterSecting Right"));
				traverseForward = false;

				
				currentPlot.points.Push(currentIntersection.Start);

				for (const FRoad road : finNet)
				{
					if (road.End == currentIntersection.sideRoadStart[0])
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
				UE_LOG(LogTemp, Display, TEXT("Traverse forward"));
				traverseForward = true;

				if (currentIntersection.sideRoadStart.IsEmpty())
				{
					for (const FRoad road : finNet)
					{
						if (!road.sideRoadStart.IsEmpty())
						{
							if (road.sideRoadStart[0] == currentIntersection.Start || road.sideRoadStart.Last() == currentIntersection.Start)
							{
								UE_LOG(LogTemp, Display, TEXT("Traverse Forward - junction"));
								currentPlot.points.Push(road.Start);
								currentIntersection = FindIntersection(traverseForward, finNet, currentIntersection);
							}
						}
					}
				}
				else
				{
					UE_LOG(LogTemp, Display, TEXT("Traverse Forward - normal"));
					currentPlot.points.Push(currentIntersection.Start);
					currentIntersection = FindIntersection(traverseForward, finNet, currentIntersection);
				}
				
				break;
			case(ETurnType::traverseBack):
				UE_LOG(LogTemp, Display, TEXT("Traverse Backward"));
				traverseForward = false;

				if (currentIntersection.sideRoadStart.IsEmpty())
				{
					for (const FRoad road : finNet)
					{
						if (!road.sideRoadStart.IsEmpty())
						{
							if (road.sideRoadStart[0] == currentIntersection.Start || road.sideRoadStart.Last() == currentIntersection.Start)
							{
								UE_LOG(LogTemp, Display, TEXT("Traverse backward - junction"));
								currentPlot.points.Push(road.Start);
								currentIntersection = FindIntersection(traverseForward, finNet, currentIntersection);
							}
						}
					}
				}
				else
				{
					UE_LOG(LogTemp, Display, TEXT("Traverse backward - normal"));
					currentPlot.points.Push(currentIntersection.Start);
					currentIntersection = FindIntersection(traverseForward, finNet, currentIntersection);
				}

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

	for (int i = 0; i < plotArray.Num(); i++)
	{
		plotArray[i] = DeflatePolygon(plotArray[i]);
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
									if (currentRoad.roadTurnType == ETurnType::IntersectingLeft)
									{
										currentRoad.roadTurnType = ETurnType::traverseForward;
									}
									else
									{
										currentRoad.roadTurnType = ETurnType::traverseBack;
									}
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
					if (road.roadTurnType != ETurnType::N && road.roadTurnType != ETurnType::Left && road.roadTurnType != ETurnType::IntersectingLeft && road.roadTurnType != ETurnType::LR)
					{
						intersectionFound = true;
						UE_LOG(LogTemp, Display, TEXT("Back - Junction Found Lets go!"));
						return currentRoad;
					}
					else if (road.roadTurnType == ETurnType::LR)
					{
						for (const FRoad sideRoad : finNet)
						{
							if (road.sideRoadStart[1] == sideRoad.Start)
							{
								UE_LOG(LogTemp, Display, TEXT("Back - LR"));
								currentRoad = sideRoad;
								currentRoad.roadTurnType = ETurnType::traverseForward;
								return currentRoad;
							}
						}
					}
					for (const FRoad endRoad : finNet)
					{
						if (!endRoad.sideRoadStart.IsEmpty())
						{
							if (endRoad.sideRoadStart[0] == currentRoad.Start || endRoad.sideRoadStart.Last() == currentRoad.Start)
							{

								if (endRoad.roadTurnType == ETurnType::Right)
								{
									UE_LOG(LogTemp, Display, TEXT("Back - Tricky junction found right"));
									currentRoad = endRoad;
									currentRoad.roadTurnType = ETurnType::traverseBack;
									return currentRoad;
								}
								else if (endRoad.roadTurnType == ETurnType::Left)
								{
									UE_LOG(LogTemp, Display, TEXT("Back - Tricky junction found left"));
									currentRoad = endRoad;
									currentRoad.roadTurnType = ETurnType::traverseForward;
									return currentRoad;
								}
								else if (endRoad.roadTurnType == ETurnType::LR)
								{
									if (endRoad.sideRoadStart[0] == currentRoad.Start)
									{
										UE_LOG(LogTemp, Display, TEXT("Back - Tricky junction found lr left"));
										currentRoad = endRoad;
										currentRoad.roadTurnType = ETurnType::traverseForward;
										return currentRoad;
									}
									else if (endRoad.sideRoadStart[1] == currentRoad.Start)
									{
										UE_LOG(LogTemp, Display, TEXT("Back - Tricky junction found lr right"));
										currentRoad = endRoad;
										currentRoad.roadTurnType = ETurnType::traverseBack;
										return currentRoad;
									}
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

//Gauss shoelace formula
float APlotGenerator::CalculateArea(TArray<FVector> points)	//Believe this is working as expected
{
	float area = 0;

	//Gauss shoelace formula used to return the area of an irregular polygon
	for (int i = 0; i < points.Num(); i++)
	{
		area += (points[i].X * points[(i + 1) % points.Num()].Y) - (points[i].Y * points[(i + 1) % points.Num()].X);
	}
	area = area / 2;
	
	//Change negative value to positive
	if (area < 0)
	{
		area *= -1;
	}

	//Convert to killometers
	area /= 10000;

	return area;
}

FPlot APlotGenerator::DeflatePolygon(FPlot plot)
{
	FPlot deflatedPolygon;

	//convert meters to unreal unit

	for (int i = 0; i < plot.points.Num(); i++)
	{
		FVector current = plot.points[i];
		FVector next = plot.points[(i + 1) % plot.points.Num()];
		FVector prev = plot.points[(i - 1 + plot.points.Num()) % plot.points.Num()];

		FVector edge1 = current - prev;
		FVector edge2 = next - current;

		edge1 = FVector(-edge1.Y, edge1.X, 0);
		edge2 = FVector(-edge2.Y, edge2.X, 0);

		edge1.Normalize();
		edge2.Normalize();

		FVector avgNormal = edge1 + edge2;
		avgNormal.Normalize();

		FVector newVertex = current + (avgNormal * deflateDistance);

		deflatedPolygon.points.Push(newVertex);

	}

	return deflatedPolygon;
}

//Combine Plots that are too small and determine roads to destroy
TArray<FVector> APlotGenerator::FinalizePlots(TArray<FPlot> &plotArr)
{
	float sharedSideCount = 0;
	bool plotFound = false;
	FPlot sidePlot;
	TArray<FVector> roadsToDestroy;
	TArray<FVector> sharedInter;

	//For every plot in the plot array
	for (FPlot plot : plotArr)
	{
		//if plot size is too small
		if (CalculateArea(plot.points) < minPlotSize)
		{
			//For every plot in the plot array
			for (const FPlot interPlot : plotArr)
			{
				if (plotFound == true) break;

				plotFound = false;
				sharedInter.Empty();

				//For every point in the other plot
				for (const FVector point : plot.points)
				{
					if (plotFound == true) break;

					for (const FVector interPoint : interPlot.points)
					{
						if (plotFound == true) break;

						if (point == interPoint)
						{
							sharedInter.Push(point);
						}

						if (sharedInter.Num() == 2)
						{
							plotFound = true;
							sidePlot = interPlot;
						}
					}
				}

				if (plotFound)
				{
					int counter;
					for (FVector curPoint : plot.points)
					{
						counter = 0;
						for (const FVector intPoint : sidePlot.points)
						{
							if (curPoint != intPoint)
							{
								counter++;
							}
						}
						if (counter != 4)
						{
							curPoint = sharedInter.Pop();
						}
					}
				}
			}
		}
		
	}

	return roadsToDestroy;

}

TArray<FLot> APlotGenerator::SubdivideToLots(FPlot plot)
{
	TArray<FLot> lots;

	if (plot.points.Num() != 4 || CalculateArea(plot.points) <= minPlotSize)
	{
		FLot lot;
		lot.points = plot.points;
		lots.Push(lot);
		return lots;
	}

	FVector A = plot.points[0]; // Top-left
	FVector B = plot.points[1]; // Top-right
	FVector C = plot.points[2]; // Bottom-right
	FVector D = plot.points[3]; // Bottom-left

	// Edges
	float width = FVector::Dist(A, B);
	float height = FVector::Dist(A, D);

	TArray<float> yCuts = GenerateIrregularCuts(height, MinLotWidth);
	TArray<float> xCuts = GenerateIrregularCuts(width, MinLotWidth);

	for (int y = 0; y < yCuts.Num() - 1; ++y)
	{
		float TTop0 = yCuts[y];
		float TTop1 = yCuts[y + 1];

		FVector leftStart = FMath::Lerp(A, D, TTop0);
		FVector leftEnd = FMath::Lerp(A, D, TTop1);
		FVector rightStart = FMath::Lerp(B, C, TTop0);
		FVector rightEnd = FMath::Lerp(B, C, TTop1);

		for (int x = 0; x < xCuts.Num() - 1; ++x)
		{
			bool isEdgeLot((x == 0) || (x == xCuts.Num() - 2) || (y == 0) || (y == yCuts.Num() - 2));
			if (!isEdgeLot) continue;

			float TSide0 = xCuts[x];
			float TSide1 = xCuts[x + 1];

			FVector topLeft = FMath::Lerp(leftStart, rightStart, TSide0);
			FVector topRight = FMath::Lerp(leftStart, rightStart, TSide1);
			FVector bottomRight = FMath::Lerp(leftEnd, rightEnd, TSide1);
			FVector bottomLeft = FMath::Lerp(leftEnd, rightEnd, TSide0);

			FLot lot;
			lot.points = { topLeft, topRight, bottomRight, bottomLeft };
			lots.Push(lot);
		}
	}

	return lots;
}

TArray<float> APlotGenerator::GenerateIrregularCuts(float totalLength, float minSize)
{
	TArray<float> cuts;
	cuts.Add(0.0f);

	float current = 0.0f;
	while (current < 1.0f - 0.5f)
	{
		float maxStep = FMath::Min(0.5f, 1.0f - current);
		float step = FMath::RandRange(minSize / totalLength, maxStep);
		current += step;

		if (current < 1.0f)
		{
			cuts.Add(current);
		}
	}

	cuts.Add(1.0f);
	return cuts;
}