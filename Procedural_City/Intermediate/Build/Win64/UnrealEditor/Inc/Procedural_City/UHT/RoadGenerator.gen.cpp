// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Procedural_City/RoadGenerator.h"
#include "Procedural_City/RoadSpec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROCEDURAL_CITY_API UClass* Z_Construct_UClass_ARoadGenerator();
PROCEDURAL_CITY_API UClass* Z_Construct_UClass_ARoadGenerator_NoRegister();
PROCEDURAL_CITY_API UScriptStruct* Z_Construct_UScriptStruct_FRoad();
UPackage* Z_Construct_UPackage__Script_Procedural_City();
// End Cross Module References

// Begin Class ARoadGenerator Function GenerateRoads
struct Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics
{
	struct RoadGenerator_eventGenerateRoads_Parms
	{
		TArray<FRoad> finNet;
		TArray<FRoad> intNet;
		TArray<FRoad> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_finNet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_finNet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_intNet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_intNet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_finNet_Inner = { "finNet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoad, METADATA_PARAMS(0, nullptr) }; // 2615776238
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_finNet = { "finNet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoadGenerator_eventGenerateRoads_Parms, finNet), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2615776238
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_intNet_Inner = { "intNet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoad, METADATA_PARAMS(0, nullptr) }; // 2615776238
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_intNet = { "intNet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoadGenerator_eventGenerateRoads_Parms, intNet), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2615776238
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoad, METADATA_PARAMS(0, nullptr) }; // 2615776238
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoadGenerator_eventGenerateRoads_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2615776238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_finNet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_finNet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_intNet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_intNet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoadGenerator, nullptr, "GenerateRoads", nullptr, nullptr, Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::RoadGenerator_eventGenerateRoads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::RoadGenerator_eventGenerateRoads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoadGenerator_GenerateRoads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoadGenerator_GenerateRoads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoadGenerator::execGenerateRoads)
{
	P_GET_TARRAY_REF(FRoad,Z_Param_Out_finNet);
	P_GET_TARRAY_REF(FRoad,Z_Param_Out_intNet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRoad>*)Z_Param__Result=P_THIS->GenerateRoads(Z_Param_Out_finNet,Z_Param_Out_intNet);
	P_NATIVE_END;
}
// End Class ARoadGenerator Function GenerateRoads

// Begin Class ARoadGenerator Function Reset
struct Z_Construct_UFunction_ARoadGenerator_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoadGenerator_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoadGenerator, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoadGenerator_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoadGenerator_Reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARoadGenerator_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoadGenerator_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoadGenerator::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// End Class ARoadGenerator Function Reset

// Begin Class ARoadGenerator
void ARoadGenerator::StaticRegisterNativesARoadGenerator()
{
	UClass* Class = ARoadGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateRoads", &ARoadGenerator::execGenerateRoads },
		{ "Reset", &ARoadGenerator::execReset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoadGenerator);
UClass* Z_Construct_UClass_ARoadGenerator_NoRegister()
{
	return ARoadGenerator::StaticClass();
}
struct Z_Construct_UClass_ARoadGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RoadGenerator.h" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stream_MetaData[] = {
		{ "Category", "Road Generation|Random Seed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stream and seed\n" },
#endif
		{ "ModuleRelativePath", "RoadGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stream and seed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[] = {
		{ "Category", "Road Generation|Random Seed" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxRoads_MetaData[] = {
		{ "Category", "Road Generation|General" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_roadStep_MetaData[] = {
		{ "Category", "Road Generation|General" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_branchCap_MetaData[] = {
		{ "Category", "Road Generation|General" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxMainRoadLength_MetaData[] = {
		{ "Category", "Road Generation|Main Roads" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainRoadBranchChance_MetaData[] = {
		{ "Category", "Road Generation|Main Roads" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainRoadIntensity_MetaData[] = {
		{ "Category", "Road Generation|Main Roads" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainLengthBeforeIntersection_MetaData[] = {
		{ "Category", "Road Generation|Main Roads|Advanced" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_intersectionIsMainChance_MetaData[] = {
		{ "Category", "Road Generation|Main Roads|Advanced" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainTwoRoadJunctionChance_MetaData[] = {
		{ "Category", "Road Generation|Main Roads|Advanced" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSecondaryRoadLength_MetaData[] = {
		{ "Category", "Road Generation|Secondary Roads" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_secondaryRoadBranchChance_MetaData[] = {
		{ "Category", "Road Generation|Secondary Roads" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_secondaryRoadIntensity_MetaData[] = {
		{ "Category", "Road Generation|Secondary Roads" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_secondaryLengthBeforeIntersection_MetaData[] = {
		{ "Category", "Road Generation|Secondary Roads|Advanced" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_secondaryTwoRoadJunctionChance_MetaData[] = {
		{ "Category", "Road Generation|Secondary Roads|Advanced" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxCoastalRoadLength_MetaData[] = {
		{ "Category", "Road Generation|CoastalRoads" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_water_MetaData[] = {
		{ "Category", "Road Generation|World Constraints" },
		{ "ModuleRelativePath", "RoadGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_stream;
	static const UECodeGen_Private::FIntPropertyParams NewProp_seed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxRoads;
	static const UECodeGen_Private::FStructPropertyParams NewProp_roadStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_branchCap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxMainRoadLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mainRoadBranchChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mainRoadIntensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_mainLengthBeforeIntersection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_intersectionIsMainChance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_mainTwoRoadJunctionChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSecondaryRoadLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_secondaryRoadBranchChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_secondaryRoadIntensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_secondaryLengthBeforeIntersection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_secondaryTwoRoadJunctionChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxCoastalRoadLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_water_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_water;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoadGenerator_GenerateRoads, "GenerateRoads" }, // 4002349161
		{ &Z_Construct_UFunction_ARoadGenerator_Reset, "Reset" }, // 545921767
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_stream = { "stream", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stream_MetaData), NewProp_stream_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_seed_MetaData), NewProp_seed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_maxRoads = { "maxRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, maxRoads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxRoads_MetaData), NewProp_maxRoads_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_roadStep = { "roadStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, roadStep), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_roadStep_MetaData), NewProp_roadStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_branchCap = { "branchCap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, branchCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_branchCap_MetaData), NewProp_branchCap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_maxMainRoadLength = { "maxMainRoadLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, maxMainRoadLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxMainRoadLength_MetaData), NewProp_maxMainRoadLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_mainRoadBranchChance = { "mainRoadBranchChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, mainRoadBranchChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainRoadBranchChance_MetaData), NewProp_mainRoadBranchChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_mainRoadIntensity = { "mainRoadIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, mainRoadIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainRoadIntensity_MetaData), NewProp_mainRoadIntensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_mainLengthBeforeIntersection = { "mainLengthBeforeIntersection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, mainLengthBeforeIntersection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainLengthBeforeIntersection_MetaData), NewProp_mainLengthBeforeIntersection_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_intersectionIsMainChance = { "intersectionIsMainChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, intersectionIsMainChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_intersectionIsMainChance_MetaData), NewProp_intersectionIsMainChance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_mainTwoRoadJunctionChance = { "mainTwoRoadJunctionChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, mainTwoRoadJunctionChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainTwoRoadJunctionChance_MetaData), NewProp_mainTwoRoadJunctionChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_MaxSecondaryRoadLength = { "MaxSecondaryRoadLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, MaxSecondaryRoadLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSecondaryRoadLength_MetaData), NewProp_MaxSecondaryRoadLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_secondaryRoadBranchChance = { "secondaryRoadBranchChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, secondaryRoadBranchChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_secondaryRoadBranchChance_MetaData), NewProp_secondaryRoadBranchChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_secondaryRoadIntensity = { "secondaryRoadIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, secondaryRoadIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_secondaryRoadIntensity_MetaData), NewProp_secondaryRoadIntensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_secondaryLengthBeforeIntersection = { "secondaryLengthBeforeIntersection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, secondaryLengthBeforeIntersection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_secondaryLengthBeforeIntersection_MetaData), NewProp_secondaryLengthBeforeIntersection_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_secondaryTwoRoadJunctionChance = { "secondaryTwoRoadJunctionChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, secondaryTwoRoadJunctionChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_secondaryTwoRoadJunctionChance_MetaData), NewProp_secondaryTwoRoadJunctionChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_maxCoastalRoadLength = { "maxCoastalRoadLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, maxCoastalRoadLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxCoastalRoadLength_MetaData), NewProp_maxCoastalRoadLength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_water_Inner = { "water", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoadGenerator_Statics::NewProp_water = { "water", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGenerator, water), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_water_MetaData), NewProp_water_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoadGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_stream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_maxRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_roadStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_branchCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_maxMainRoadLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_mainRoadBranchChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_mainRoadIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_mainLengthBeforeIntersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_intersectionIsMainChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_mainTwoRoadJunctionChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_MaxSecondaryRoadLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_secondaryRoadBranchChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_secondaryRoadIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_secondaryLengthBeforeIntersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_secondaryTwoRoadJunctionChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_maxCoastalRoadLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_water_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadGenerator_Statics::NewProp_water,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoadGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Procedural_City,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoadGenerator_Statics::ClassParams = {
	&ARoadGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARoadGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoadGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoadGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoadGenerator()
{
	if (!Z_Registration_Info_UClass_ARoadGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoadGenerator.OuterSingleton, Z_Construct_UClass_ARoadGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoadGenerator.OuterSingleton;
}
template<> PROCEDURAL_CITY_API UClass* StaticClass<ARoadGenerator>()
{
	return ARoadGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoadGenerator);
ARoadGenerator::~ARoadGenerator() {}
// End Class ARoadGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_RoadGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoadGenerator, ARoadGenerator::StaticClass, TEXT("ARoadGenerator"), &Z_Registration_Info_UClass_ARoadGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoadGenerator), 1198905066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_RoadGenerator_h_1711891418(TEXT("/Script/Procedural_City"),
	Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_RoadGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_RoadGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
