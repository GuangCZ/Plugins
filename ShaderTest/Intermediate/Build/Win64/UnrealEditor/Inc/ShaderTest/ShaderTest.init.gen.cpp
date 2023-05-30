// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShaderTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShaderTest()
	{
		if (!Z_Registration_Info_UPackage__Script_ShaderTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShaderTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xAFF72E39,
				0x58354CB4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShaderTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShaderTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShaderTest(Z_Construct_UPackage__Script_ShaderTest, TEXT("/Script/ShaderTest"), Z_Registration_Info_UPackage__Script_ShaderTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAFF72E39, 0x58354CB4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
