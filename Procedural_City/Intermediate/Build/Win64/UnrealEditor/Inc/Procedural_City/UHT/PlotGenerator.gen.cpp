// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Procedural_City/PlotGenerator.h"
#include "Procedural_City/RoadSpec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROCEDURAL_CITY_API UClass* Z_Construct_UClass_APlotGenerator();
PROCEDURAL_CITY_API UClass* Z_Construct_UClass_APlotGenerator_NoRegister();
PROCEDURAL_CITY_API UScriptStruct* Z_Construct_UScriptStruct_FPlot();
PROCEDURAL_CITY_API UScriptStruct* Z_Construct_UScriptStruct_FRoad();
UPackage* Z_Construct_UPackage__Script_Procedural_City();
// End Cross Module References

// Begin Class APlotGenerator Function CalculateArea
struct Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics
{
	struct PlotGenerator_eventCalculateArea_Parms
	{
		TArray<FVector> points;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlotGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_points;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::NewProp_points_Inner = { "points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlotGenerator_eventCalculateArea_Parms, points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlotGenerator_eventCalculateArea_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::NewProp_points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::NewProp_points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotGenerator, nullptr, "CalculateArea", nullptr, nullptr, Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::PlotGenerator_eventCalculateArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::PlotGenerator_eventCalculateArea_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlotGenerator_CalculateArea()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlotGenerator_CalculateArea_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlotGenerator::execCalculateArea)
{
	P_GET_TARRAY(FVector,Z_Param_points);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateArea(Z_Param_points);
	P_NATIVE_END;
}
// End Class APlotGenerator Function CalculateArea

// Begin Class APlotGenerator Function DeflatePolygon
struct Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics
{
	struct PlotGenerator_eventDeflatePolygon_Parms
	{
		FPlot plot;
		FPlot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlotGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_plot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::NewProp_plot = { "plot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlotGenerator_eventDeflatePolygon_Parms, plot), Z_Construct_UScriptStruct_FPlot, METADATA_PARAMS(0, nullptr) }; // 1398043412
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlotGenerator_eventDeflatePolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlot, METADATA_PARAMS(0, nullptr) }; // 1398043412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::NewProp_plot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotGenerator, nullptr, "DeflatePolygon", nullptr, nullptr, Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::PlotGenerator_eventDeflatePolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::PlotGenerator_eventDeflatePolygon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlotGenerator_DeflatePolygon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlotGenerator_DeflatePolygon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlotGenerator::execDeflatePolygon)
{
	P_GET_STRUCT(FPlot,Z_Param_plot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlot*)Z_Param__Result=P_THIS->DeflatePolygon(Z_Param_plot);
	P_NATIVE_END;
}
// End Class APlotGenerator Function DeflatePolygon

// Begin Class APlotGenerator Function FinalizePlots
struct Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics
{
	struct PlotGenerator_eventFinalizePlots_Parms
	{
		TArray<FPlot> plotArr;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlotGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_plotArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_plotArr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::NewProp_plotArr_Inner = { "plotArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlot, METADATA_PARAMS(0, nullptr) }; // 1398043412
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::NewProp_plotArr = { "plotArr", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlotGenerator_eventFinalizePlots_Parms, plotArr), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1398043412
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlotGenerator_eventFinalizePlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::NewProp_plotArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::NewProp_plotArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotGenerator, nullptr, "FinalizePlots", nullptr, nullptr, Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::PlotGenerator_eventFinalizePlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::PlotGenerator_eventFinalizePlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlotGenerator_FinalizePlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlotGenerator_FinalizePlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlotGenerator::execFinalizePlots)
{
	P_GET_TARRAY_REF(FPlot,Z_Param_Out_plotArr);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->FinalizePlots(Z_Param_Out_plotArr);
	P_NATIVE_END;
}
// End Class APlotGenerator Function FinalizePlots

// Begin Class APlotGenerator Function GeneratePlots
struct Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics
{
	struct PlotGenerator_eventGeneratePlots_Parms
	{
		TArray<FRoad> finNet;
		TArray<FPlot> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlotGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_finNet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_finNet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::NewProp_finNet_Inner = { "finNet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoad, METADATA_PARAMS(0, nullptr) }; // 737840056
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::NewProp_finNet = { "finNet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlotGenerator_eventGeneratePlots_Parms, finNet), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 737840056
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlot, METADATA_PARAMS(0, nullptr) }; // 1398043412
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlotGenerator_eventGeneratePlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1398043412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::NewProp_finNet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::NewProp_finNet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlotGenerator, nullptr, "GeneratePlots", nullptr, nullptr, Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::PlotGenerator_eventGeneratePlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::PlotGenerator_eventGeneratePlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlotGenerator_GeneratePlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlotGenerator_GeneratePlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlotGenerator::execGeneratePlots)
{
	P_GET_TARRAY(FRoad,Z_Param_finNet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FPlot>*)Z_Param__Result=P_THIS->GeneratePlots(Z_Param_finNet);
	P_NATIVE_END;
}
// End Class APlotGenerator Function GeneratePlots

// Begin Class APlotGenerator
void APlotGenerator::StaticRegisterNativesAPlotGenerator()
{
	UClass* Class = APlotGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateArea", &APlotGenerator::execCalculateArea },
		{ "DeflatePolygon", &APlotGenerator::execDeflatePolygon },
		{ "FinalizePlots", &APlotGenerator::execFinalizePlots },
		{ "GeneratePlots", &APlotGenerator::execGeneratePlots },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlotGenerator);
UClass* Z_Construct_UClass_APlotGenerator_NoRegister()
{
	return APlotGenerator::StaticClass();
}
struct Z_Construct_UClass_APlotGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlotGenerator.h" },
		{ "ModuleRelativePath", "PlotGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deflateDistance_MetaData[] = {
		{ "Category", "Plot Generation|General" },
		{ "ModuleRelativePath", "PlotGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minPlotSize_MetaData[] = {
		{ "Category", "Plot Generation|General" },
		{ "ModuleRelativePath", "PlotGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_deflateDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_minPlotSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlotGenerator_CalculateArea, "CalculateArea" }, // 2179506511
		{ &Z_Construct_UFunction_APlotGenerator_DeflatePolygon, "DeflatePolygon" }, // 348039749
		{ &Z_Construct_UFunction_APlotGenerator_FinalizePlots, "FinalizePlots" }, // 2815918973
		{ &Z_Construct_UFunction_APlotGenerator_GeneratePlots, "GeneratePlots" }, // 752610874
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlotGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlotGenerator_Statics::NewProp_deflateDistance = { "deflateDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlotGenerator, deflateDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deflateDistance_MetaData), NewProp_deflateDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlotGenerator_Statics::NewProp_minPlotSize = { "minPlotSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlotGenerator, minPlotSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minPlotSize_MetaData), NewProp_minPlotSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlotGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlotGenerator_Statics::NewProp_deflateDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlotGenerator_Statics::NewProp_minPlotSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlotGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlotGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Procedural_City,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlotGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlotGenerator_Statics::ClassParams = {
	&APlotGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlotGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlotGenerator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlotGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_APlotGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlotGenerator()
{
	if (!Z_Registration_Info_UClass_APlotGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlotGenerator.OuterSingleton, Z_Construct_UClass_APlotGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlotGenerator.OuterSingleton;
}
template<> PROCEDURAL_CITY_API UClass* StaticClass<APlotGenerator>()
{
	return APlotGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlotGenerator);
APlotGenerator::~APlotGenerator() {}
// End Class APlotGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlotGenerator, APlotGenerator::StaticClass, TEXT("APlotGenerator"), &Z_Registration_Info_UClass_APlotGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlotGenerator), 733519433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_449420339(TEXT("/Script/Procedural_City"),
	Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
