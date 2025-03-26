// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Procedural_City/RoadSpec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadSpec() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PROCEDURAL_CITY_API UEnum* Z_Construct_UEnum_Procedural_City_ERoadType();
PROCEDURAL_CITY_API UEnum* Z_Construct_UEnum_Procedural_City_ETurnType();
PROCEDURAL_CITY_API UScriptStruct* Z_Construct_UScriptStruct_FPlot();
PROCEDURAL_CITY_API UScriptStruct* Z_Construct_UScriptStruct_FRoad();
UPackage* Z_Construct_UPackage__Script_Procedural_City();
// End Cross Module References

// Begin Enum ERoadType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERoadType;
static UEnum* ERoadType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERoadType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERoadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Procedural_City_ERoadType, (UObject*)Z_Construct_UPackage__Script_Procedural_City(), TEXT("ERoadType"));
	}
	return Z_Registration_Info_UEnum_ERoadType.OuterSingleton;
}
template<> PROCEDURAL_CITY_API UEnum* StaticEnum<ERoadType>()
{
	return ERoadType_StaticEnum();
}
struct Z_Construct_UEnum_Procedural_City_ERoadType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Coastal.DisplayName", "Coastal" },
		{ "Coastal.Name", "ERoadType::Coastal" },
		{ "Main.DisplayName", "Main" },
		{ "Main.Name", "ERoadType::Main" },
		{ "ModuleRelativePath", "RoadSpec.h" },
		{ "Secondary.DisplayName", "Secondary" },
		{ "Secondary.Name", "ERoadType::Secondary" },
		{ "Tertiary.DisplayName", "Tertiary" },
		{ "Tertiary.Name", "ERoadType::Tertiary" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadType::Main", (int64)ERoadType::Main },
		{ "ERoadType::Secondary", (int64)ERoadType::Secondary },
		{ "ERoadType::Tertiary", (int64)ERoadType::Tertiary },
		{ "ERoadType::Coastal", (int64)ERoadType::Coastal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Procedural_City_ERoadType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Procedural_City,
	nullptr,
	"ERoadType",
	"ERoadType",
	Z_Construct_UEnum_Procedural_City_ERoadType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Procedural_City_ERoadType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Procedural_City_ERoadType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Procedural_City_ERoadType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Procedural_City_ERoadType()
{
	if (!Z_Registration_Info_UEnum_ERoadType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERoadType.InnerSingleton, Z_Construct_UEnum_Procedural_City_ERoadType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERoadType.InnerSingleton;
}
// End Enum ERoadType

// Begin Enum ETurnType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETurnType;
static UEnum* ETurnType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETurnType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETurnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Procedural_City_ETurnType, (UObject*)Z_Construct_UPackage__Script_Procedural_City(), TEXT("ETurnType"));
	}
	return Z_Registration_Info_UEnum_ETurnType.OuterSingleton;
}
template<> PROCEDURAL_CITY_API UEnum* StaticEnum<ETurnType>()
{
	return ETurnType_StaticEnum();
}
struct Z_Construct_UEnum_Procedural_City_ETurnType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Intersecting.Name", "ETurnType::Intersecting" },
		{ "IntersectingLeft.Name", "ETurnType::IntersectingLeft" },
		{ "IntersectingRight.Name", "ETurnType::IntersectingRight" },
		{ "Left.Name", "ETurnType::Left" },
		{ "LR.Name", "ETurnType::LR" },
		{ "ModuleRelativePath", "RoadSpec.h" },
		{ "N.Name", "ETurnType::N" },
		{ "Right.Name", "ETurnType::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETurnType::N", (int64)ETurnType::N },
		{ "ETurnType::Left", (int64)ETurnType::Left },
		{ "ETurnType::Right", (int64)ETurnType::Right },
		{ "ETurnType::LR", (int64)ETurnType::LR },
		{ "ETurnType::Intersecting", (int64)ETurnType::Intersecting },
		{ "ETurnType::IntersectingRight", (int64)ETurnType::IntersectingRight },
		{ "ETurnType::IntersectingLeft", (int64)ETurnType::IntersectingLeft },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Procedural_City_ETurnType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Procedural_City,
	nullptr,
	"ETurnType",
	"ETurnType",
	Z_Construct_UEnum_Procedural_City_ETurnType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Procedural_City_ETurnType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Procedural_City_ETurnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Procedural_City_ETurnType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Procedural_City_ETurnType()
{
	if (!Z_Registration_Info_UEnum_ETurnType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETurnType.InnerSingleton, Z_Construct_UEnum_Procedural_City_ETurnType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETurnType.InnerSingleton;
}
// End Enum ETurnType

// Begin ScriptStruct FRoad
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Road;
class UScriptStruct* FRoad::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Road.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Road.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoad, (UObject*)Z_Construct_UPackage__Script_Procedural_City(), TEXT("Road"));
	}
	return Z_Registration_Info_UScriptStruct_Road.OuterSingleton;
}
template<> PROCEDURAL_CITY_API UScriptStruct* StaticStruct<FRoad>()
{
	return FRoad::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "RoadSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "RoadSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "RoadSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_turnPoint_MetaData[] = {
		{ "Category", "Road" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//terrible name\n" },
#endif
		{ "ModuleRelativePath", "RoadSpec.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "terrible name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_roadType_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "RoadSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_roadTurnType_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "RoadSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sideRoadStart_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "RoadSpec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_turnPoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_roadType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_roadType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_roadTurnType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_roadTurnType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_sideRoadStart_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_sideRoadStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoad>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoad_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoad, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoad_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoad, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoad_Statics::NewProp_turnPoint = { "turnPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoad, turnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_turnPoint_MetaData), NewProp_turnPoint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoad_Statics::NewProp_roadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoad_Statics::NewProp_roadType = { "roadType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoad, roadType), Z_Construct_UEnum_Procedural_City_ERoadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_roadType_MetaData), NewProp_roadType_MetaData) }; // 3610374417
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRoad_Statics::NewProp_roadTurnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRoad_Statics::NewProp_roadTurnType = { "roadTurnType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoad, roadTurnType), Z_Construct_UEnum_Procedural_City_ETurnType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_roadTurnType_MetaData), NewProp_roadTurnType_MetaData) }; // 312541945
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoad_Statics::NewProp_sideRoadStart_Inner = { "sideRoadStart", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRoad_Statics::NewProp_sideRoadStart = { "sideRoadStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoad, sideRoadStart), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sideRoadStart_MetaData), NewProp_sideRoadStart_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoad_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoad_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoad_Statics::NewProp_turnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoad_Statics::NewProp_roadType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoad_Statics::NewProp_roadType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoad_Statics::NewProp_roadTurnType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoad_Statics::NewProp_roadTurnType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoad_Statics::NewProp_sideRoadStart_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoad_Statics::NewProp_sideRoadStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoad_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Procedural_City,
	nullptr,
	&NewStructOps,
	"Road",
	Z_Construct_UScriptStruct_FRoad_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoad_Statics::PropPointers),
	sizeof(FRoad),
	alignof(FRoad),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoad_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoad_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRoad()
{
	if (!Z_Registration_Info_UScriptStruct_Road.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Road.InnerSingleton, Z_Construct_UScriptStruct_FRoad_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Road.InnerSingleton;
}
// End ScriptStruct FRoad

// Begin ScriptStruct FPlot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Plot;
class UScriptStruct* FPlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Plot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Plot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlot, (UObject*)Z_Construct_UPackage__Script_Procedural_City(), TEXT("Plot"));
	}
	return Z_Registration_Info_UScriptStruct_Plot.OuterSingleton;
}
template<> PROCEDURAL_CITY_API UScriptStruct* StaticStruct<FPlot>()
{
	return FPlot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "RoadSpec.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[] = {
		{ "Category", "Plot" },
		{ "ModuleRelativePath", "RoadSpec.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlot_Statics::NewProp_points_Inner = { "points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlot_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlot, points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_points_MetaData), NewProp_points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlot_Statics::NewProp_points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlot_Statics::NewProp_points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Procedural_City,
	nullptr,
	&NewStructOps,
	"Plot",
	Z_Construct_UScriptStruct_FPlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlot_Statics::PropPointers),
	sizeof(FPlot),
	alignof(FPlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlot()
{
	if (!Z_Registration_Info_UScriptStruct_Plot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Plot.InnerSingleton, Z_Construct_UScriptStruct_FPlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Plot.InnerSingleton;
}
// End ScriptStruct FPlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_RoadSpec_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERoadType_StaticEnum, TEXT("ERoadType"), &Z_Registration_Info_UEnum_ERoadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3610374417U) },
		{ ETurnType_StaticEnum, TEXT("ETurnType"), &Z_Registration_Info_UEnum_ETurnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 312541945U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRoad::StaticStruct, Z_Construct_UScriptStruct_FRoad_Statics::NewStructOps, TEXT("Road"), &Z_Registration_Info_UScriptStruct_Road, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoad), 3261913095U) },
		{ FPlot::StaticStruct, Z_Construct_UScriptStruct_FPlot_Statics::NewStructOps, TEXT("Plot"), &Z_Registration_Info_UScriptStruct_Plot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlot), 1398043412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_RoadSpec_h_134715439(TEXT("/Script/Procedural_City"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_RoadSpec_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_RoadSpec_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_RoadSpec_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Procedural_City_Source_Procedural_City_RoadSpec_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
