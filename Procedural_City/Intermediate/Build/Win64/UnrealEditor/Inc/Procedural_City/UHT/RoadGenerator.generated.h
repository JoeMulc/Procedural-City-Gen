// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRoad;
#ifdef PROCEDURAL_CITY_RoadGenerator_generated_h
#error "RoadGenerator.generated.h already included, missing '#pragma once' in RoadGenerator.h"
#endif
#define PROCEDURAL_CITY_RoadGenerator_generated_h

#define FID_Users_2100609_Procedural_City_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoad_Statics; \
	PROCEDURAL_CITY_API static class UScriptStruct* StaticStruct();


template<> PROCEDURAL_CITY_API UScriptStruct* StaticStruct<struct FRoad>();

#define FID_Users_2100609_Procedural_City_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execGenerateRoads);


#define FID_Users_2100609_Procedural_City_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoadGenerator(); \
	friend struct Z_Construct_UClass_ARoadGenerator_Statics; \
public: \
	DECLARE_CLASS(ARoadGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Procedural_City"), NO_API) \
	DECLARE_SERIALIZER(ARoadGenerator)


#define FID_Users_2100609_Procedural_City_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARoadGenerator(ARoadGenerator&&); \
	ARoadGenerator(const ARoadGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoadGenerator) \
	NO_API virtual ~ARoadGenerator();


#define FID_Users_2100609_Procedural_City_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_55_PROLOG
#define FID_Users_2100609_Procedural_City_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2100609_Procedural_City_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2100609_Procedural_City_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_58_INCLASS_NO_PURE_DECLS \
	FID_Users_2100609_Procedural_City_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURAL_CITY_API UClass* StaticClass<class ARoadGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2100609_Procedural_City_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h


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
