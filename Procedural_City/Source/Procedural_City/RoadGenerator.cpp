// Fill out your copyright notice in the Description page of Project Settings.
//When line intersects mark as intersection


#include "RoadGenerator.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ARoadGenerator::ARoadGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARoadGenerator::BeginPlay()
{
	Super::BeginPlay();

	stream.Initialize(seed);
}

// Called every frame
void ARoadGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

TArray<FRoad> ARoadGenerator::GenerateRoads(TArray<FRoad>& finalNetwork, TArray<FRoad>& intersectionNetwork)
{
	UE_LOG(LogTemp, Warning, TEXT("Started!"));

	//TArray<FRoad> finalNetwork;
	//TArray<FRoad> intersectionNetwork;

	TArray<FProposedRoad*> propQ;
	TArray<FProposedRoad*> secondQ;

	FProposedRoad* initRoad = new FProposedRoad();
	FRoad* initSeg = new FRoad();

	//Create initial segment
	initSeg->Start = FVector(0, 0, 0);
	initSeg->End = initSeg->Start + roadStep;
	initSeg->turnPoint = roadStep;
	initSeg->roadType = ERoadType::Main;

	//Create initial proposed road
	initRoad->segment = initSeg;
	initRoad->rotator = FRotator(0, 0, 0);
	initRoad->varianceRotor = FRotator(0, 0, 0);
	initRoad->roadLength = 1.f;

	propQ.Push(initRoad);

	//While proposed roads isnt empty and the number of semgments in the final network is less than the allowed max roads
	while (propQ.Num() > 0 && finalNetwork.Num() < maxRoads)
	{
		FProposedRoad* current = propQ.Last();

		propQ.Pop();


		//Check constraints for current road
		if (CheckConstraints(finalNetwork, current, propQ, intersectionNetwork) && (current->segment->roadType != ERoadType::Secondary || mainRoadsComplete == true || current->roadLength == 1))
		{
			//if passes constraint check push to the final network
			finalNetwork.Push(*current->segment);

			//Add roads the to the road
			AddRoads(propQ, current, finalNetwork);
		}

		//FOR PRIMARY ROAD FIRST GEN
		if (propQ.Num() == 0 && mainCheck == false)
		{
			UE_LOG(LogTemp, Display, TEXT("We in here!"));
			mainRoadsComplete = true;
			mainCheck = true;
			while (secondQ.Num() != 0)
			{
				//propQ.Push(secondQ.Top());
				UE_LOG(LogTemp, Display, TEXT("Bongin! - %i"), secondQ.Top()->roadLength);
				propQ.Push(secondQ.Top());
				secondQ.Pop();
			}
		}

		//FOR PRIMARY ROAD FIRST GEN
		if (current->segment->roadType == ERoadType::Secondary && current->roadLength > 1)
		{
			secondQ.Push(current);
		}
		else
		{
			delete(current->segment);
			delete(current);
		}

		//UE_LOG(LogTemp, Display, TEXT("Q size - %i"), propQ.Num());
		//UE_LOG(LogTemp, Display, TEXT("Rand - %f"), randFloat());
	}

	for (const FRoad intRoad : intersectionNetwork)
	{
		for (int i = 0; i < finalNetwork.Num(); i++)
		{
			if (intRoad.Start == finalNetwork[i].Start)
			{
				finalNetwork[i].roadTurnType = intRoad.roadTurnType;
				finalNetwork[i].sideRoadStart = intRoad.sideRoadStart;
			}
			else if (intRoad.Start == finalNetwork[i].End && finalNetwork[i].roadType == ERoadType::Secondary)
			{
				finalNetwork[i].roadTurnType = ETurnType::Intersecting;
			}
		}
	}

	mainRoadsComplete = false;
	mainCheck = false;

	UE_LOG(LogTemp, Warning, TEXT("Finished! Woohoo!"));
	return finalNetwork, intersectionNetwork;
}

void ARoadGenerator::AddRoads(TArray<FProposedRoad*>& segQ, FProposedRoad* current, TArray<FRoad>& finalQ)
{
	//Generate forward road if max length not reached

	//Switch on road type for adding a forward road
	switch (current->segment->roadType)
	{
	//Add forward road if main has not reached max length
	case(ERoadType::Main):

		//Added some variance to distance of roads
		if (current->roadLength <= maxMainRoadLength + stream.RandRange(-maxMainRoadLength / 10, maxMainRoadLength/ 10))
		{
			AddForwardRoad(segQ, current, ERoadType::Main);
		}
		break;
	//Add forward road
	case(ERoadType::Secondary):

		if (current->roadLength <= MaxSecondaryRoadLength)
		{
			AddForwardRoad(segQ, current, ERoadType::Secondary);
		}
		break;
	//Add forward road
	case(ERoadType::Coastal):
		UE_LOG(LogTemp, Display, TEXT("Coastal!"));
		if (current->roadLength <= maxCoastalRoadLength)
		{
			AddForwardRoad(segQ, current, ERoadType::Coastal);
		}
		break;
	}

	//Road branching logic
	if (stream.RandRange(0, 100) < mainRoadBranchChance && branchCounter <= branchCap && current->segment->roadType == ERoadType::Main && mainLengthBeforeIntersection < current->roadLength)
	{
		//Chance for main or secondary road to be added
		if (stream.RandRange(0, 100) < intersectionIsMainChance)			
		{
			if (stream.RandRange(0, 100) < mainTwoRoadJunctionChance)
			{
				AddRoadSide(segQ, current, true, ERoadType::Main, finalQ);
				AddRoadSide(segQ, current, false, ERoadType::Main, finalQ);
				finalQ.Top().roadTurnType = ETurnType::LR;
			}
			else if(randFloat() > 0.5)
			{
				AddRoadSide(segQ, current, true, ERoadType::Main, finalQ);
				finalQ.Top().roadTurnType = ETurnType::Left;
				UE_LOG(LogTemp, Display, TEXT("foobar!"));
			}
			else
			{
				AddRoadSide(segQ, current, false, ERoadType::Main, finalQ);
				finalQ.Top().roadTurnType = ETurnType::Right;
				UE_LOG(LogTemp, Display, TEXT("foobar!"));
			}
		}																		
		else
		{
			if (stream.RandRange(0, 100) < secondaryTwoRoadJunctionChance)
			{
				AddRoadSide(segQ, current, true, ERoadType::Secondary, finalQ);
				AddRoadSide(segQ, current, false, ERoadType::Secondary, finalQ);
				finalQ.Top().roadTurnType = ETurnType::LR;
			}
			else if (randFloat() > 0.5)
			{
				AddRoadSide(segQ, current, true, ERoadType::Secondary, finalQ);
				finalQ.Top().roadTurnType = ETurnType::Left;
				UE_LOG(LogTemp, Display, TEXT("foobar!"));
			}
			else
			{
				AddRoadSide(segQ, current, false, ERoadType::Secondary, finalQ);
				finalQ.Top().roadTurnType = ETurnType::Right;
				UE_LOG(LogTemp, Display, TEXT("foobar!"));
			}
		}

	}
	//Secondary road branching
	else if (stream.RandRange(0, 100) < secondaryRoadBranchChance && branchCounter <= branchCap && current->segment->roadType == ERoadType::Secondary && secondaryLengthBeforeIntersection < current->roadLength)
	{
		if (stream.RandRange(0, 100) < secondaryTwoRoadJunctionChance)
		{
			AddRoadSide(segQ, current, true, ERoadType::Secondary, finalQ);
			AddRoadSide(segQ, current, false, ERoadType::Secondary, finalQ);
			finalQ.Top().roadTurnType = ETurnType::LR;
		}
		else if (randFloat() > 0.5)
		{
			AddRoadSide(segQ, current, true, ERoadType::Secondary, finalQ);
			finalQ.Top().roadTurnType = ETurnType::Left;
		}
		else
		{
			AddRoadSide(segQ, current, false, ERoadType::Secondary, finalQ);
			finalQ.Top().roadTurnType = ETurnType::Right;
		}
	}
	else
	{
		current->segment->roadTurnType = ETurnType::N;
	}
	
}

void ARoadGenerator::AddForwardRoad(TArray<FProposedRoad*>& segQ, FProposedRoad* previous, ERoadType newType)
{
	//UE_LOG(LogTemp, Display, TEXT("ForwardRoad"));

	FProposedRoad* newPropRoad = new FProposedRoad();
	FRoad* newSeg = new FRoad();

	FRoad* prevSeg = previous->segment;

	//Set the correct intensity based on road type
	intensity = newType == ERoadType::Main ? mainRoadIntensity : secondaryRoadIntensity;

	//Sprinkles some randomness on the rotation
	newPropRoad->varianceRotor = previous->varianceRotor + FRotator(0, intensity * (randFloat() - 0.5f), 0);
	//Sets rotator based on previous
	newPropRoad->rotator = previous->rotator + newPropRoad->varianceRotor;

	//Initialise road with new values
	newSeg->Start = prevSeg->End;
	newSeg->End = newSeg->Start + newPropRoad->rotator.RotateVector(roadStep);
	newSeg->turnPoint = prevSeg->End - prevSeg->Start;
	newSeg->roadType = newType;
	
	//Defines new segment
	newPropRoad->segment = newSeg;
	newPropRoad->roadLength = previous->roadLength + 1;

	//Pushed road to queue
	segQ.Push(newPropRoad);
}

void ARoadGenerator::AddRoadSide(TArray<FProposedRoad*>& segQ, FProposedRoad* previous, bool left, ERoadType newType, TArray<FRoad>& finalQ)
{
	FProposedRoad* newPropRoad = new FProposedRoad();
	FRoad* newSeg = new FRoad();

	FRoad* prevSeg = previous->segment;

	intensity = newType == ERoadType::Main ? mainRoadIntensity : secondaryRoadIntensity;

	//Sprinkles some randomness
	newPropRoad->varianceRotor = FRotator(0, intensity * (randFloat() - 0.5f), 0);
	//Sets direction based on left/right
	FRotator direction = left ? FRotator(0, 270, 0) : FRotator(0, 90, 0);
	UE_LOG(LogTemp, Display, TEXT("Direction - %f"), direction.Yaw);
	newPropRoad->rotator = previous->rotator + newPropRoad->varianceRotor + direction;

	//Initialise new road values
	FVector offsetDirection = newPropRoad->rotator.RotateVector(FVector(200, 0, 0));
	newSeg->Start = (prevSeg->End - prevSeg->Start) / 2 + prevSeg->Start + offsetDirection;
	newSeg->End = newSeg->Start + newPropRoad->rotator.RotateVector(roadStep);
	newSeg->turnPoint = newSeg->End - newSeg->Start;
	newSeg->roadType = newType;

	//Defines new segment
	newPropRoad->segment = newSeg;
	newPropRoad->roadLength = 1;
	
	//Update Previous Road with information on its side roads
	finalQ.Top().sideRoadStart.Push(newSeg->Start);

	//Pushes new segment to the queue
	segQ.Push(newPropRoad);

}

bool ARoadGenerator::CheckConstraints(TArray<FRoad> finalNetwork, FProposedRoad* current, TArray<FProposedRoad*>& segQ, TArray<FRoad>& intNet)
{
	return CheckGlobalConstraints(finalNetwork, current, segQ, intNet);
}

bool ARoadGenerator::CheckGlobalConstraints(TArray<FRoad> finalNetwork, FProposedRoad* current, TArray<FProposedRoad*>& segQ, TArray<FRoad>& intNet)
{
	//Get centre of proposed road
	FVector propMid = (current->segment->End - current->segment->Start) / 2 + current->segment->Start;

	// For each road in the final network
	for (const FRoad road : finalNetwork)
	{
		//get centre of final road to be compared
		FVector finalMid = (road.End - road.Start) / 2 + road.Start;

		FVector intPoint;

		bool intersection = FMath::SegmentIntersection2D(TrimStart(road.Start, road.End), TrimEnd(road.Start, road.End), TrimStart(current->segment->Start, current->segment->End), TrimEnd(current->segment->Start, current->segment->End), intPoint);

		//Check distance based on road size - magic number here fix me!!!!!!!
		switch (current->segment->roadType)
		{
		case(ERoadType::Secondary):
			if (road.roadType == ERoadType::Main)													
			{
				if (intersection)												//TERRIBLE DIST CHECK MAKE BETTER!!!!!!!
				{
					//Intersecting
					intNet.Push(*current->segment);

					//left right intersection
					current->segment->roadTurnType = LeftOrRightIntersection(*current->segment, road);
					current->segment->sideRoadStart.Push(current->segment->Start);
					current->segment->Start = road.Start;
					intNet.Push(*current->segment);
					UE_LOG(LogTemp, Display, TEXT("new"));
					return false;
				}
			}
			else if (intersection)												//TERRIBLE DIST CHECK MAKE BETTER!!!!!!!
			{
				//Intersecting
				intNet.Push(*current->segment);

				//left right intersection
				current->segment->roadTurnType = LeftOrRightIntersection(*current->segment, road);
				current->segment->sideRoadStart.Push(current->segment->Start);
				current->segment->Start = road.Start;
				intNet.Push(*current->segment);
				UE_LOG(LogTemp, Display, TEXT("new"));
				return false;
			}
			break;
		case(ERoadType::Coastal):
			if (intersection)												//TERRIBLE DIST CHECK MAKE BETTER!!!!!!!
			{
				UE_LOG(LogTemp, Display, TEXT("new"));
				return false;
			}
			break;
		default:
			if (intersection)												//TERRIBLE DIST CHECK MAKE BETTER!!!!!!!
			{
				//Intersecting
				intNet.Push(*current->segment);

				//left right intersection
				current->segment->roadTurnType = LeftOrRightIntersection(*current->segment, road);
				current->segment->sideRoadStart.Push(current->segment->Start);
				current->segment->Start = road.Start;
				intNet.Push(*current->segment);
				UE_LOG(LogTemp, Display, TEXT("new"));
				return false;
			}
			break;
		}
	}
														//REALLY SHOULD BE CHECKING FOR NULLPTRS
	//For each water volume
	for (AActor* w : water)
	{
		AVolume* waterVolume = Cast<AVolume>(w);
		
		//If proposed road is within the volume
		if (waterVolume->EncompassesPoint(current->segment->End + (current->segment->End - current->segment->Start) * 50, 75.f))
		{
			//UE_LOG(LogTemp, Display, TEXT("Water!"));
			if (current->segment->roadType == ERoadType::Main || current->segment->roadType == ERoadType::Coastal)
			{
				double angle = 0;
				int checker = 0;

				while (angle < 360)
				{
					current->segment->End = current->segment->Start + FRotator(0, angle, 0).RotateVector(current->segment->End - current->segment->Start);
					for (AActor* wat : water)
					{
						AVolume* wV = Cast<AVolume>(wat);
						if (!wV->EncompassesPoint(current->segment->End + (current->segment->End - current->segment->Start) * 50, 75.f))
						{
							//UE_LOG(LogTemp, Warning, TEXT("Checker LEFT %i!"), checker);
							checker++;
						}
						
					}

					//ensures all volumes have been checked
					if (checker >= 10)					//MAGIC NUMBER
					{
						current->segment->turnPoint = current->segment->End - current->segment->Start;
						current->roadLength = current->segment->roadType == ERoadType::Coastal ? current->roadLength++ : 0;
						current->segment->roadType = ERoadType::Coastal;
						UE_LOG(LogTemp, Warning, TEXT("Angle %f!"), angle);
						return true;
					}

					checker = 0;
					angle++;
				}
				UE_LOG(LogTemp, Warning, TEXT("Splitting"));
			}
			else
			{
				return false;
			}
		}
	}

	return true;
}

void ARoadGenerator::Reset()
{

}

float ARoadGenerator::randFloat()
{
	//UE_LOG(LogTemp, Display, TEXT("Rand - %f"), stream.GetFraction());
	return stream.GetFraction();
}

ETurnType ARoadGenerator::LeftOrRightIntersection(FRoad intersectingRoad, FRoad intersectedRoad)
{
	FVector vec1 = intersectedRoad.End - intersectedRoad.Start;
	FVector vec2 = intersectingRoad.Start - intersectedRoad.Start;

	double dot = FVector::DotProduct(vec1, vec2);
	double det = (vec1.X * vec2.Y) - (vec1.Y * vec2.X);

	double angle = atan2(det, dot);

	angle = angle * (180 / PI);
																						//Soooooooowrong figure it out
	UE_LOG(LogTemp, Display, TEXT("Angle - %f"), angle);

	if (angle > 0 )
	{
		return ETurnType::IntersectingRight;
	}
	else
	{
		return ETurnType::IntersectingLeft;
	}
}


FVector ARoadGenerator::TrimStart(FVector start, FVector end)
{
	FVector direction = (end - start).GetSafeNormal2D();

	return FVector(start + direction * 25);
}

FVector ARoadGenerator::TrimEnd(FVector start, FVector end)
{
	FVector direction = (end - start).GetSafeNormal2D();

	return FVector(end - direction * 25);
}