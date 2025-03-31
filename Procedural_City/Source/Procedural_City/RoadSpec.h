// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RoadSpec.generated.h"


UENUM(BlueprintType)
enum class ERoadType : uint8 {
	Main	UMETA(DisplayName = "Main"),
	Secondary	UMETA(DisplayName = "Secondary"),
	Tertiary	UMETA(DisplayName = "Tertiary"),
	Coastal	 UMETA(DisplayName = "Coastal"),
};

UENUM(BlueprintType)
enum class ETurnType : uint8 {
	N,
	Left,
	Right,
	LR,
	Intersecting,
	IntersectingRight,
	IntersectingLeft,
	traverseBack,
	traverseForward,
};

USTRUCT(BlueprintType)
struct FRoad
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Start;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector End;
	//terrible name
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector turnPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) ERoadType roadType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) ETurnType roadTurnType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> sideRoadStart;
	//previous road end - for side roads maybe???
};

struct FProposedRoad
{
	FRoad* segment;
	FRotator rotator;
	FRotator varianceRotor;
	//Number of segments on this road line
	int32 roadLength;
};


USTRUCT(BlueprintType)
struct FPlot
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> points;
};



class PROCEDURAL_CITY_API RoadSpec
{
public:
	RoadSpec();
	~RoadSpec();
};
