// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTMOVEMENT_TopDownMover_generated_h
#error "TopDownMover.generated.h already included, missing '#pragma once' in TopDownMover.h"
#endif
#define OBJECTMOVEMENT_TopDownMover_generated_h

#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_SPARSE_DATA
#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_RPC_WRAPPERS
#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownMover(); \
	friend struct Z_Construct_UClass_ATopDownMover_Statics; \
public: \
	DECLARE_CLASS(ATopDownMover, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectMovement"), NO_API) \
	DECLARE_SERIALIZER(ATopDownMover)


#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_INCLASS \
private: \
	static void StaticRegisterNativesATopDownMover(); \
	friend struct Z_Construct_UClass_ATopDownMover_Statics; \
public: \
	DECLARE_CLASS(ATopDownMover, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectMovement"), NO_API) \
	DECLARE_SERIALIZER(ATopDownMover)


#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopDownMover(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownMover) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownMover); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownMover); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownMover(ATopDownMover&&); \
	NO_API ATopDownMover(const ATopDownMover&); \
public:


#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownMover(ATopDownMover&&); \
	NO_API ATopDownMover(const ATopDownMover&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownMover); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownMover); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownMover)


#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(ATopDownMover, MeshComponent); }


#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_19_PROLOG
#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_PRIVATE_PROPERTY_OFFSET \
	ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_SPARSE_DATA \
	ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_RPC_WRAPPERS \
	ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_INCLASS \
	ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_PRIVATE_PROPERTY_OFFSET \
	ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_SPARSE_DATA \
	ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_INCLASS_NO_PURE_DECLS \
	ObjectMovement_Source_ObjectMovement_TopDownMover_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTMOVEMENT_API UClass* StaticClass<class ATopDownMover>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectMovement_Source_ObjectMovement_TopDownMover_h


#define FOREACH_ENUM_EMOVEDIRECTION(op) \
	op(EMoveDirection::Up) \
	op(EMoveDirection::Down) \
	op(EMoveDirection::Left) \
	op(EMoveDirection::Right) 

enum class EMoveDirection : uint8;
template<> OBJECTMOVEMENT_API UEnum* StaticEnum<EMoveDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
