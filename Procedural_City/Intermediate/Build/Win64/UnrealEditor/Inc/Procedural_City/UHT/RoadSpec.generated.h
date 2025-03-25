// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadSpec.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURAL_CITY_RoadSpec_generated_h
#error "RoadSpec.generated.h already included, missing '#pragma once' in RoadSpec.h"
#endif
#define PROCEDURAL_CITY_RoadSpec_generated_h

#define FID_Procedural_City_Source_Procedural_City_RoadSpec_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoad_Statics; \
	PROCEDURAL_CITY_API static class UScriptStruct* StaticStruct();


template<> PROCEDURAL_CITY_API UScriptStruct* StaticStruct<struct FRoad>();

#define FID_Procedural_City_Source_Procedural_City_RoadSpec_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlot_Statics; \
	PROCEDURAL_CITY_API static class UScriptStruct* StaticStruct();


template<> PROCEDURAL_CITY_API UScriptStruct* StaticStruct<struct FPlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Procedural_City_Source_Procedural_City_RoadSpec_h


#define FOREACH_ENUM_EROADTYPE(op) \
	op(ERoadType::Main) \
	op(ERoadType::Secondary) \
	op(ERoadType::Tertiary) \
	op(ERoadType::Coastal) 

enum class ERoadType : uint8;
template<> struct TIsUEnumClass<ERoadType> { enum { Value = true }; };
template<> PROCEDURAL_CITY_API UEnum* StaticEnum<ERoadType>();

#define FOREACH_ENUM_ETURNTYPE(op) \
	op(ETurnType::N) \
	op(ETurnType::Left) \
	op(ETurnType::Right) \
	op(ETurnType::LR) \
	op(ETurnType::Intersection) \
	op(ETurnType::IntersectingRight) \
	op(ETurnType::IntersectingLeft) 

enum class ETurnType : uint8;
template<> struct TIsUEnumClass<ETurnType> { enum { Value = true }; };
template<> PROCEDURAL_CITY_API UEnum* StaticEnum<ETurnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
