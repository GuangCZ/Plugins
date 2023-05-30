// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTextureRenderTarget2D;
struct FSimpleShaderParameter;
struct FLinearColor;
class UTexture2D;
#ifdef SHADERTEST_RDGRendeingExample_generated_h
#error "RDGRendeingExample.generated.h already included, missing '#pragma once' in RDGRendeingExample.h"
#endif
#define SHADERTEST_RDGRendeingExample_generated_h

#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics; \
	SHADERTEST_API static class UScriptStruct* StaticStruct();


template<> SHADERTEST_API UScriptStruct* StaticStruct<struct FSimpleShaderParameter>();

#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_SPARSE_DATA
#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUseRDGDraw); \
	DECLARE_FUNCTION(execUseRDGComput);


#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUseRDGDraw); \
	DECLARE_FUNCTION(execUseRDGComput);


#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURDGRenderingExampleBlueprintLibrary(); \
	friend struct Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(URDGRenderingExampleBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShaderTest"), SHADERTEST_API) \
	DECLARE_SERIALIZER(URDGRenderingExampleBlueprintLibrary)


#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_INCLASS \
private: \
	static void StaticRegisterNativesURDGRenderingExampleBlueprintLibrary(); \
	friend struct Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(URDGRenderingExampleBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShaderTest"), SHADERTEST_API) \
	DECLARE_SERIALIZER(URDGRenderingExampleBlueprintLibrary)


#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHADERTEST_API URDGRenderingExampleBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URDGRenderingExampleBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHADERTEST_API, URDGRenderingExampleBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URDGRenderingExampleBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHADERTEST_API URDGRenderingExampleBlueprintLibrary(URDGRenderingExampleBlueprintLibrary&&); \
	SHADERTEST_API URDGRenderingExampleBlueprintLibrary(const URDGRenderingExampleBlueprintLibrary&); \
public:


#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHADERTEST_API URDGRenderingExampleBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHADERTEST_API URDGRenderingExampleBlueprintLibrary(URDGRenderingExampleBlueprintLibrary&&); \
	SHADERTEST_API URDGRenderingExampleBlueprintLibrary(const URDGRenderingExampleBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHADERTEST_API, URDGRenderingExampleBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URDGRenderingExampleBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URDGRenderingExampleBlueprintLibrary)


#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_34_PROLOG
#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_SPARSE_DATA \
	FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_RPC_WRAPPERS \
	FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_INCLASS \
	FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_SPARSE_DATA \
	FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_INCLASS_NO_PURE_DECLS \
	FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHADERTEST_API UClass* StaticClass<class URDGRenderingExampleBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
