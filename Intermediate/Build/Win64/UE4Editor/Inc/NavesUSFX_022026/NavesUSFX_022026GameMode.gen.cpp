// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX_022026/NavesUSFX_022026GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesUSFX_022026GameMode() {}
// Cross Module References
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_ANavesUSFX_022026GameMode_NoRegister();
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_ANavesUSFX_022026GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX_022026();
	NAVESUSFX_022026_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
// End Cross Module References
	void ANavesUSFX_022026GameMode::StaticRegisterNativesANavesUSFX_022026GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANavesUSFX_022026GameMode_NoRegister()
	{
		return ANavesUSFX_022026GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemigos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemigos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemigos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX_022026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NavesUSFX_022026GameMode.h" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos_Inner = { "Enemigos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos_MetaData[] = {
		{ "Comment", "// ===== CONTENEDOR DE ENEMIGOS =====\n" },
		{ "ModuleRelativePath", "NavesUSFX_022026GameMode.h" },
		{ "ToolTip", "===== CONTENEDOR DE ENEMIGOS =====" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos = { "Enemigos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX_022026GameMode, Enemigos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::NewProp_Enemigos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesUSFX_022026GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::ClassParams = {
		&ANavesUSFX_022026GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesUSFX_022026GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesUSFX_022026GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesUSFX_022026GameMode, 4205651547);
	template<> NAVESUSFX_022026_API UClass* StaticClass<ANavesUSFX_022026GameMode>()
	{
		return ANavesUSFX_022026GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesUSFX_022026GameMode(Z_Construct_UClass_ANavesUSFX_022026GameMode, &ANavesUSFX_022026GameMode::StaticClass, TEXT("/Script/NavesUSFX_022026"), TEXT("ANavesUSFX_022026GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesUSFX_022026GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
