// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RoadSpec.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "stdlib.h"
#include "RoadGenerator.generated.h"

UCLASS()
class PROCEDURAL_CITY_API ARoadGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoadGenerator();

	//Stream and seed
	UPROPERTY(BlueprintReadOnly, Category = "Road Generation|Random Seed") FRandomStream stream;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Random Seed") int32 seed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Road Generation|General") int32 maxRoads = 10000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|General") FVector roadStep = FVector(200, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|General") int32 branchCap = 15;

	int32 branchCounter = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Main Roads") float maxMainRoadLength = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Main Roads") float mainRoadBranchChance = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Main Roads") float mainRoadIntensity = 0.1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Main Roads|Advanced") int32 mainLengthBeforeIntersection = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Main Roads|Advanced") int32 intersectionIsMainChance = 30;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Main Roads|Advanced") int32 mainTwoRoadJunctionChance = 10;

	
	float intensity = 0.01;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Secondary Roads") float MaxSecondaryRoadLength = 15;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Secondary Roads") float secondaryRoadBranchChance = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Secondary Roads") float secondaryRoadIntensity = 0.1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Secondary Roads|Advanced") int32 secondaryLengthBeforeIntersection = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|Secondary Roads|Advanced") int32 secondaryTwoRoadJunctionChance = 90;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|CoastalRoads") float maxCoastalRoadLength = 2500;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generation|World Constraints") TArray<AActor*> water;

	bool mainRoadsComplete = false;
	bool mainCheck;


	UFUNCTION(BlueprintCallable) TArray<FRoad> GenerateRoads(TArray<FRoad>& finNet, TArray<FRoad>& intNet);

	void AddRoads(TArray<FProposedRoad*>& segQ, FProposedRoad* current, TArray<FRoad>& finalQ);

	void AddForwardRoad(TArray<FProposedRoad*>& segQ, FProposedRoad* previous, ERoadType newType);

	void AddRoadSide(TArray<FProposedRoad*>& segQ, FProposedRoad* previous, bool left, ERoadType newType, TArray<FRoad>& finalQ);

	bool CheckConstraints(TArray<FRoad> finalNetwork, FProposedRoad* current, TArray<FProposedRoad*>& segQ, TArray<FRoad>& intNet);

	bool CheckGlobalConstraints(TArray<FRoad> finalNetwork, FProposedRoad* current, TArray<FProposedRoad*>& segQ, TArray<FRoad>& intNet);

	UFUNCTION(BlueprintCallable) void Reset();

	float randFloat();

	ETurnType LeftOrRightIntersection(FRoad intersectingRoad, FRoad intersectedRoad);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
