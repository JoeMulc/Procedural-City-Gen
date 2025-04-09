// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlotGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlot;
struct FRoad;
#ifdef PROCEDURAL_CITY_PlotGenerator_generated_h
#error "PlotGenerator.generated.h already included, missing '#pragma once' in PlotGenerator.h"
#endif
#define PROCEDURAL_CITY_PlotGenerator_generated_h

#define FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeflatePolygon); \
	DECLARE_FUNCTION(execCalculateArea); \
	DECLARE_FUNCTION(execGeneratePlots);


#define FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlotGenerator(); \
	friend struct Z_Construct_UClass_APlotGenerator_Statics; \
public: \
	DECLARE_CLASS(APlotGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Procedural_City"), NO_API) \
	DECLARE_SERIALIZER(APlotGenerator)


#define FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlotGenerator(APlotGenerator&&); \
	APlotGenerator(const APlotGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlotGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlotGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlotGenerator) \
	NO_API virtual ~APlotGenerator();


#define FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_10_PROLOG
#define FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_13_INCLASS_NO_PURE_DECLS \
	FID_Procedural_City_Source_Procedural_City_PlotGenerator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURAL_CITY_API UClass* StaticClass<class APlotGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Procedural_City_Source_Procedural_City_PlotGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
