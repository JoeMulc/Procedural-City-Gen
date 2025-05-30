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

#define FID_Year_4_Dissertation_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execGenerateRoads);


#define FID_Year_4_Dissertation_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoadGenerator(); \
	friend struct Z_Construct_UClass_ARoadGenerator_Statics; \
public: \
	DECLARE_CLASS(ARoadGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Procedural_City"), NO_API) \
	DECLARE_SERIALIZER(ARoadGenerator)


#define FID_Year_4_Dissertation_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARoadGenerator(ARoadGenerator&&); \
	ARoadGenerator(const ARoadGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoadGenerator) \
	NO_API virtual ~ARoadGenerator();


#define FID_Year_4_Dissertation_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_11_PROLOG
#define FID_Year_4_Dissertation_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Year_4_Dissertation_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Year_4_Dissertation_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_14_INCLASS_NO_PURE_DECLS \
	FID_Year_4_Dissertation_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURAL_CITY_API UClass* StaticClass<class ARoadGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Year_4_Dissertation_Procedural_City_Gen_Procedural_City_Source_Procedural_City_RoadGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
