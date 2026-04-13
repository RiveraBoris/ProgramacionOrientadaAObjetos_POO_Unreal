// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectMovement/ObjectMovementGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectMovementGameModeBase() {}
// Cross Module References
	OBJECTMOVEMENT_API UClass* Z_Construct_UClass_AObjectMovementGameModeBase_NoRegister();
	OBJECTMOVEMENT_API UClass* Z_Construct_UClass_AObjectMovementGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ObjectMovement();
// End Cross Module References
	void AObjectMovementGameModeBase::StaticRegisterNativesAObjectMovementGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AObjectMovementGameModeBase_NoRegister()
	{
		return AObjectMovementGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AObjectMovementGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectMovementGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectMovementGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ObjectMovementGameModeBase.h" },
		{ "ModuleRelativePath", "ObjectMovementGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectMovementGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectMovementGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjectMovementGameModeBase_Statics::ClassParams = {
		&AObjectMovementGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AObjectMovementGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectMovementGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectMovementGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjectMovementGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectMovementGameModeBase, 45053278);
	template<> OBJECTMOVEMENT_API UClass* StaticClass<AObjectMovementGameModeBase>()
	{
		return AObjectMovementGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectMovementGameModeBase(Z_Construct_UClass_AObjectMovementGameModeBase, &AObjectMovementGameModeBase::StaticClass, TEXT("/Script/ObjectMovement"), TEXT("AObjectMovementGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectMovementGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
