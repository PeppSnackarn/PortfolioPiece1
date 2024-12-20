// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/AI Classes/MeleeAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AMeleeAIController();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AMeleeAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void AMeleeAIController::StaticRegisterNativesAMeleeAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMeleeAIController);
	UClass* Z_Construct_UClass_AMeleeAIController_NoRegister()
	{
		return AMeleeAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMeleeAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackBoardComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeleeAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI Classes/MeleeAIController.h" },
		{ "ModuleRelativePath", "AI Classes/MeleeAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeAIController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "MeleeAIController" },
		{ "ModuleRelativePath", "AI Classes/MeleeAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeleeAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMeleeAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeAIController_Statics::NewProp_BehaviorTree_MetaData), Z_Construct_UClass_AMeleeAIController_Statics::NewProp_BehaviorTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeAIController_Statics::NewProp_BlackBoardComp_MetaData[] = {
		{ "Category", "MeleeAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI Classes/MeleeAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeleeAIController_Statics::NewProp_BlackBoardComp = { "BlackBoardComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMeleeAIController, BlackBoardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeAIController_Statics::NewProp_BlackBoardComp_MetaData), Z_Construct_UClass_AMeleeAIController_Statics::NewProp_BlackBoardComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMeleeAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeAIController_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeAIController_Statics::NewProp_BlackBoardComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeleeAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeleeAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMeleeAIController_Statics::ClassParams = {
		&AMeleeAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMeleeAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMeleeAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMeleeAIController()
	{
		if (!Z_Registration_Info_UClass_AMeleeAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeleeAIController.OuterSingleton, Z_Construct_UClass_AMeleeAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMeleeAIController.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<AMeleeAIController>()
	{
		return AMeleeAIController::StaticClass();
	}
	AMeleeAIController::AMeleeAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeAIController);
	AMeleeAIController::~AMeleeAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_MeleeAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_MeleeAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMeleeAIController, AMeleeAIController::StaticClass, TEXT("AMeleeAIController"), &Z_Registration_Info_UClass_AMeleeAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeleeAIController), 2387599218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_MeleeAIController_h_659315684(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_MeleeAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_MeleeAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
