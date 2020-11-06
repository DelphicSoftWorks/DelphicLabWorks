// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMDialogue/Public/SMDialogueUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMDialogueUtils() {}
// Cross Module References
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueUtils_NoRegister();
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SMDialogue();
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueNode_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USMDialogueUtils::execGetAllConnectedDialogueNodes)
	{
		P_GET_OBJECT(USMStateInstance_Base,Z_Param_FromNode);
		P_GET_TARRAY_REF(USMDialogueNode*,Z_Param_Out_OutDialogueNodes);
		P_GET_UBOOL(Z_Param_bBreakOnChoices);
		P_FINISH;
		P_NATIVE_BEGIN;
		USMDialogueUtils::GetAllConnectedDialogueNodes(Z_Param_FromNode,Z_Param_Out_OutDialogueNodes,Z_Param_bBreakOnChoices);
		P_NATIVE_END;
	}
	void USMDialogueUtils::StaticRegisterNativesUSMDialogueUtils()
	{
		UClass* Class = USMDialogueUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllConnectedDialogueNodes", &USMDialogueUtils::execGetAllConnectedDialogueNodes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics
	{
		struct SMDialogueUtils_eventGetAllConnectedDialogueNodes_Parms
		{
			const USMStateInstance_Base* FromNode;
			TArray<USMDialogueNode*> OutDialogueNodes;
			bool bBreakOnChoices;
		};
		static void NewProp_bBreakOnChoices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBreakOnChoices;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDialogueNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutDialogueNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_bBreakOnChoices_SetBit(void* Obj)
	{
		((SMDialogueUtils_eventGetAllConnectedDialogueNodes_Parms*)Obj)->bBreakOnChoices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_bBreakOnChoices = { "bBreakOnChoices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMDialogueUtils_eventGetAllConnectedDialogueNodes_Parms), &Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_bBreakOnChoices_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_OutDialogueNodes = { "OutDialogueNodes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMDialogueUtils_eventGetAllConnectedDialogueNodes_Parms, OutDialogueNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_OutDialogueNodes_Inner = { "OutDialogueNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_FromNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_FromNode = { "FromNode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMDialogueUtils_eventGetAllConnectedDialogueNodes_Parms, FromNode), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_FromNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_FromNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_bBreakOnChoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_OutDialogueNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_OutDialogueNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::NewProp_FromNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Dialogue Utilities" },
		{ "Comment", "/**\n\x09 * Get all dialogue nodes that are connected to each other starting with the FromNode.\n\x09 * @param FromNode The node to start the search from.\n\x09 * @param OutDialogueNodes All connected nodes.\n\x09 * @param bBreakOnChoices If choice nodes should break the search.\n\x09 */" },
		{ "CPP_Default_bBreakOnChoices", "false" },
		{ "ModuleRelativePath", "Public/SMDialogueUtils.h" },
		{ "ToolTip", "Get all dialogue nodes that are connected to each other starting with the FromNode.\n@param FromNode The node to start the search from.\n@param OutDialogueNodes All connected nodes.\n@param bBreakOnChoices If choice nodes should break the search." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueUtils, nullptr, "GetAllConnectedDialogueNodes", nullptr, nullptr, sizeof(SMDialogueUtils_eventGetAllConnectedDialogueNodes_Parms), Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMDialogueUtils_NoRegister()
	{
		return USMDialogueUtils::StaticClass();
	}
	struct Z_Construct_UClass_USMDialogueUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMDialogueUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SMDialogue,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMDialogueUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMDialogueUtils_GetAllConnectedDialogueNodes, "GetAllConnectedDialogueNodes" }, // 2832252360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SMDialogueUtils.h" },
		{ "ModuleRelativePath", "Public/SMDialogueUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMDialogueUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMDialogueUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMDialogueUtils_Statics::ClassParams = {
		&USMDialogueUtils::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMDialogueUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMDialogueUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMDialogueUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMDialogueUtils, 3037147220);
	template<> SMDIALOGUE_API UClass* StaticClass<USMDialogueUtils>()
	{
		return USMDialogueUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMDialogueUtils(Z_Construct_UClass_USMDialogueUtils, &USMDialogueUtils::StaticClass, TEXT("/Script/SMDialogue"), TEXT("USMDialogueUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMDialogueUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
