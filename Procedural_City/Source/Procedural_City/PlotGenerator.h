// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RoadSpec.h"
#include "GameFramework/Actor.h"
#include "PlotGenerator.generated.h"

UCLASS()
class PROCEDURAL_CITY_API APlotGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlotGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable) TArray<FPlot> GeneratePlots(TArray<FRoad> finNet);

	FRoad FindIntersection(bool traverseForward, TArray<FRoad> finNet, FRoad currentRoad);
	bool determineTraversePath(bool intersected, bool traverseLeft, TArray<FRoad> finNet, FRoad currentRoad);
	bool findRoadDirection(FRoad intersectingRoad, FRoad intersectedRoad, TArray<FRoad> finNet);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
