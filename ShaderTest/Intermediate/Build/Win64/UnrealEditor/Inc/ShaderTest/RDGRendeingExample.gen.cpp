// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShaderTest/Public/Rendering/RDGRendeingExample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRDGRendeingExample() {}
// Cross Module References
	SHADERTEST_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleShaderParameter();
	UPackage* Z_Construct_UPackage__Script_ShaderTest();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SHADERTEST_API UClass* Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_NoRegister();
	SHADERTEST_API UClass* Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleShaderParameter;
class UScriptStruct* FSimpleShaderParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleShaderParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleShaderParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleShaderParameter, Z_Construct_UPackage__Script_ShaderTest(), TEXT("SimpleShaderParameter"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleShaderParameter.OuterSingleton;
}
template<> SHADERTEST_API UScriptStruct* StaticStruct<FSimpleShaderParameter>()
{
	return FSimpleShaderParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColorIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rendering/RDGRendeingExample.h" },
		{ "ScriptName", "RDGRenderingExample" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleShaderParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color1_MetaData[] = {
		{ "Category", "SimpleShaderParameter" },
		{ "ModuleRelativePath", "Public/Rendering/RDGRendeingExample.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleShaderParameter, Color1), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color2_MetaData[] = {
		{ "Category", "SimpleShaderParameter" },
		{ "ModuleRelativePath", "Public/Rendering/RDGRendeingExample.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color2 = { "Color2", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleShaderParameter, Color2), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color3_MetaData[] = {
		{ "Category", "SimpleShaderParameter" },
		{ "ModuleRelativePath", "Public/Rendering/RDGRendeingExample.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color3 = { "Color3", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleShaderParameter, Color3), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color4_MetaData[] = {
		{ "Category", "SimpleShaderParameter" },
		{ "ModuleRelativePath", "Public/Rendering/RDGRendeingExample.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color4 = { "Color4", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleShaderParameter, Color4), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_ColorIndex_MetaData[] = {
		{ "Category", "SimpleShaderParameter" },
		{ "ModuleRelativePath", "Public/Rendering/RDGRendeingExample.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_ColorIndex = { "ColorIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleShaderParameter, ColorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_ColorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_ColorIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_Color4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewProp_ColorIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderTest,
		nullptr,
		&NewStructOps,
		"SimpleShaderParameter",
		sizeof(FSimpleShaderParameter),
		alignof(FSimpleShaderParameter),
		Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleShaderParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleShaderParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleShaderParameter.InnerSingleton, Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleShaderParameter.InnerSingleton;
	}
	DEFINE_FUNCTION(URDGRenderingExampleBlueprintLibrary::execUseRDGDraw)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget);
		P_GET_STRUCT(FSimpleShaderParameter,Z_Param_Parameter);
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_GET_OBJECT(UTexture2D,Z_Param_InTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		URDGRenderingExampleBlueprintLibrary::UseRDGDraw(Z_Param_WorldContextObject,Z_Param_OutputRenderTarget,Z_Param_Parameter,Z_Param_InColor,Z_Param_InTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URDGRenderingExampleBlueprintLibrary::execUseRDGComput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget);
		P_GET_STRUCT(FSimpleShaderParameter,Z_Param_Parameter);
		P_FINISH;
		P_NATIVE_BEGIN;
		URDGRenderingExampleBlueprintLibrary::UseRDGComput(Z_Param_WorldContextObject,Z_Param_OutputRenderTarget,Z_Param_Parameter);
		P_NATIVE_END;
	}
	void URDGRenderingExampleBlueprintLibrary::StaticRegisterNativesURDGRenderingExampleBlueprintLibrary()
	{
		UClass* Class = URDGRenderingExampleBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UseRDGComput", &URDGRenderingExampleBlueprintLibrary::execUseRDGComput },
			{ "UseRDGDraw", &URDGRenderingExampleBlueprintLibrary::execUseRDGDraw },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics
	{
		struct RDGRenderingExampleBlueprintLibrary_eventUseRDGComput_Parms
		{
			const UObject* WorldContextObject;
			UTextureRenderTarget2D* OutputRenderTarget;
			FSimpleShaderParameter Parameter;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RDGRenderingExampleBlueprintLibrary_eventUseRDGComput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RDGRenderingExampleBlueprintLibrary_eventUseRDGComput_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RDGRenderingExampleBlueprintLibrary_eventUseRDGComput_Parms, Parameter), Z_Construct_UScriptStruct_FSimpleShaderParameter, METADATA_PARAMS(nullptr, 0) }; // 167757917
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::NewProp_OutputRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::NewProp_Parameter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::Function_MetaDataParams[] = {
		{ "Category", "RDGRenderingExample" },
		{ "ModuleRelativePath", "Public/Rendering/RDGRendeingExample.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary, nullptr, "UseRDGComput", nullptr, nullptr, sizeof(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::RDGRenderingExampleBlueprintLibrary_eventUseRDGComput_Parms), Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics
	{
		struct RDGRenderingExampleBlueprintLibrary_eventUseRDGDraw_Parms
		{
			const UObject* WorldContextObject;
			UTextureRenderTarget2D* OutputRenderTarget;
			FSimpleShaderParameter Parameter;
			FLinearColor InColor;
			UTexture2D* InTexture;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RDGRenderingExampleBlueprintLibrary_eventUseRDGDraw_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RDGRenderingExampleBlueprintLibrary_eventUseRDGDraw_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RDGRenderingExampleBlueprintLibrary_eventUseRDGDraw_Parms, Parameter), Z_Construct_UScriptStruct_FSimpleShaderParameter, METADATA_PARAMS(nullptr, 0) }; // 167757917
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RDGRenderingExampleBlueprintLibrary_eventUseRDGDraw_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RDGRenderingExampleBlueprintLibrary_eventUseRDGDraw_Parms, InTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_OutputRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_Parameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_InColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "RDGRenderingExample" },
		{ "ModuleRelativePath", "Public/Rendering/RDGRendeingExample.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary, nullptr, "UseRDGDraw", nullptr, nullptr, sizeof(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::RDGRenderingExampleBlueprintLibrary_eventUseRDGDraw_Parms), Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URDGRenderingExampleBlueprintLibrary);
	UClass* Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_NoRegister()
	{
		return URDGRenderingExampleBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGComput, "UseRDGComput" }, // 3007354377
		{ &Z_Construct_UFunction_URDGRenderingExampleBlueprintLibrary_UseRDGDraw, "UseRDGDraw" }, // 3016128597
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Rendering/RDGRendeingExample.h" },
		{ "ModuleRelativePath", "Public/Rendering/RDGRendeingExample.h" },
		{ "ScriptName", "RDGRenderingExample" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URDGRenderingExampleBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics::ClassParams = {
		&URDGRenderingExampleBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_URDGRenderingExampleBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URDGRenderingExampleBlueprintLibrary.OuterSingleton, Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URDGRenderingExampleBlueprintLibrary.OuterSingleton;
	}
	template<> SHADERTEST_API UClass* StaticClass<URDGRenderingExampleBlueprintLibrary>()
	{
		return URDGRenderingExampleBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URDGRenderingExampleBlueprintLibrary);
	struct Z_CompiledInDeferFile_FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_Statics::ScriptStructInfo[] = {
		{ FSimpleShaderParameter::StaticStruct, Z_Construct_UScriptStruct_FSimpleShaderParameter_Statics::NewStructOps, TEXT("SimpleShaderParameter"), &Z_Registration_Info_UScriptStruct_SimpleShaderParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleShaderParameter), 167757917U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URDGRenderingExampleBlueprintLibrary, URDGRenderingExampleBlueprintLibrary::StaticClass, TEXT("URDGRenderingExampleBlueprintLibrary"), &Z_Registration_Info_UClass_URDGRenderingExampleBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URDGRenderingExampleBlueprintLibrary), 919860184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_635056181(TEXT("/Script/ShaderTest"),
		Z_CompiledInDeferFile_FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RDGTest_Plugins_ShaderTest_Source_ShaderTest_Public_Rendering_RDGRendeingExample_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
