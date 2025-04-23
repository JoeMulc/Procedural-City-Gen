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

	FVector badRoad = FVector(666, 666, 666);

	UFUNCTION(BlueprintCallable) TArray<FPlot> GeneratePlots(TArray<FRoad> finNet);

	UFUNCTION(BlueprintCallable) TArray<FVector> FinalizePlots(TArray<FPlot> &plotArr);

	UFUNCTION(BlueprintCallable) float CalculateArea(TArray<FVector> points);

	UFUNCTION(BlueprintCallable) FPlot DeflatePolygon(FPlot plot);

	UFUNCTION(BlueprintCallable) TArray<FLot> SubdivideToLots(FPlot plot);

	TArray<float> GenerateIrregularCuts(float totalLength, float minSize);

	FRoad FindIntersection(bool traverseForward, TArray<FRoad>& finNet, FRoad currentRoad);
	bool determineTraversePath(bool intersected, bool traverseLeft, TArray<FRoad> finNet, FRoad currentRoad);

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plot Generation|General") float deflateDistance = -10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plot Generation|General") float minPlotSize = 8000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plot Generation|General") int MinLotWidth = 4600;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
