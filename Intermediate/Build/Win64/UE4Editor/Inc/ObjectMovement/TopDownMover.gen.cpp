// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectMovement/TopDownMover.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownMover() {}
// Cross Module References
	OBJECTMOVEMENT_API UEnum* Z_Construct_UEnum_ObjectMovement_EMoveDirection();
	UPackage* Z_Construct_UPackage__Script_ObjectMovement();
	OBJECTMOVEMENT_API UClass* Z_Construct_UClass_ATopDownMover_NoRegister();
	OBJECTMOVEMENT_API UClass* Z_Construct_UClass_ATopDownMover();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EMoveDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ObjectMovement_EMoveDirection, Z_Construct_UPackage__Script_ObjectMovement(), TEXT("EMoveDirection"));
		}
		return Singleton;
	}
	template<> OBJECTMOVEMENT_API UEnum* StaticEnum<EMoveDirection>()
	{
		return EMoveDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoveDirection(EMoveDirection_StaticEnum, TEXT("/Script/ObjectMovement"), TEXT("EMoveDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ObjectMovement_EMoveDirection_Hash() { return 2826275361U; }
	UEnum* Z_Construct_UEnum_ObjectMovement_EMoveDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ObjectMovement();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoveDirection"), 0, Get_Z_Construct_UEnum_ObjectMovement_EMoveDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoveDirection::Up", (int64)EMoveDirection::Up },
				{ "EMoveDirection::Down", (int64)EMoveDirection::Down },
				{ "EMoveDirection::Left", (int64)EMoveDirection::Left },
				{ "EMoveDirection::Right", (int64)EMoveDirection::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// UENUM(BlueprintType) makes it visible in the Editor dropdowns\n" },
				{ "Down.DisplayName", "Down" },
				{ "Down.Name", "EMoveDirection::Down" },
				{ "Left.DisplayName", "Left" },
				{ "Left.Name", "EMoveDirection::Left" },
				{ "ModuleRelativePath", "TopDownMover.h" },
				{ "Right.DisplayName", "Right" },
				{ "Right.Name", "EMoveDirection::Right" },
				{ "ToolTip", "UENUM(BlueprintType) makes it visible in the Editor dropdowns" },
				{ "Up.DisplayName", "Up" },
				{ "Up.Name", "EMoveDirection::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ObjectMovement,
				nullptr,
				"EMoveDirection",
				"EMoveDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ATopDownMover::StaticRegisterNativesATopDownMover()
	{
	}
	UClass* Z_Construct_UClass_ATopDownMover_NoRegister()
	{
		return ATopDownMover::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownMover_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownMover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownMover_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopDownMover.h" },
		{ "ModuleRelativePath", "TopDownMover.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownMover_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// A visual mesh so we can actually see the object in the editor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopDownMover.h" },
		{ "ToolTip", "A visual mesh so we can actually see the object in the editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownMover_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownMover, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATopDownMover_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownMover_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownMover_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "Comment", "// 2. Variables exposed to the Visual Editor\n" },
		{ "ModuleRelativePath", "TopDownMover.h" },
		{ "ToolTip", "2. Variables exposed to the Visual Editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownMover_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownMover, Velocity), METADATA_PARAMS(Z_Construct_UClass_ATopDownMover_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownMover_Statics::NewProp_Velocity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATopDownMover_Statics::NewProp_MoveDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownMover_Statics::NewProp_MoveDirection_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "TopDownMover.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATopDownMover_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownMover, MoveDirection), Z_Construct_UEnum_ObjectMovement_EMoveDirection, METADATA_PARAMS(Z_Construct_UClass_ATopDownMover_Statics::NewProp_MoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownMover_Statics::NewProp_MoveDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownMover_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "TopDownMover.h" },
	};
#endif
	void Z_Construct_UClass_ATopDownMover_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((ATopDownMover*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopDownMover_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATopDownMover), &Z_Construct_UClass_ATopDownMover_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATopDownMover_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownMover_Statics::NewProp_bIsMoving_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownMover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownMover_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownMover_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownMover_Statics::NewProp_MoveDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownMover_Statics::NewProp_MoveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownMover_Statics::NewProp_bIsMoving,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownMover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownMover>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDownMover_Statics::ClassParams = {
		&ATopDownMover::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATopDownMover_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownMover_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownMover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownMover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownMover()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDownMover_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopDownMover, 126497312);
	template<> OBJECTMOVEMENT_API UClass* StaticClass<ATopDownMover>()
	{
		return ATopDownMover::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDownMover(Z_Construct_UClass_ATopDownMover, &ATopDownMover::StaticClass, TEXT("/Script/ObjectMovement"), TEXT("ATopDownMover"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownMover);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
