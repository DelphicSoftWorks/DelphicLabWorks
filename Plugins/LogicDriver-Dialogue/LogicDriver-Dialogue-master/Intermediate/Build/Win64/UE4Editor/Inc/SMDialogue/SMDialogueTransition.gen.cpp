// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMDialogue/Public/Nodes/Transitions/SMDialogueTransition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMDialogueTransition() {}
// Cross Module References
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueTransition_NoRegister();
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueTransition();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance();
	UPackage* Z_Construct_UPackage__Script_SMDialogue();
// End Cross Module References
	DEFINE_FUNCTION(USMDialogueTransition::execOnDialogueUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueUpdated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMDialogueTransition::execIsLeavingDialogueNode)
	{
		P_GET_UBOOL(Z_Param_bIncludeChoiceAsDialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLeavingDialogueNode(Z_Param_bIncludeChoiceAsDialogue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMDialogueTransition::execIsGoingToDialogueNode)
	{
		P_GET_UBOOL(Z_Param_bIncludeChoiceAsDialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGoingToDialogueNode(Z_Param_bIncludeChoiceAsDialogue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMDialogueTransition::execIsLeavingChoiceNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLeavingChoiceNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMDialogueTransition::execIsGoingToChoiceNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGoingToChoiceNode();
		P_NATIVE_END;
	}
	static FName NAME_USMDialogueTransition_OnDialogueUpdated = FName(TEXT("OnDialogueUpdated"));
	void USMDialogueTransition::OnDialogueUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMDialogueTransition_OnDialogueUpdated),NULL);
	}
	void USMDialogueTransition::StaticRegisterNativesUSMDialogueTransition()
	{
		UClass* Class = USMDialogueTransition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGoingToChoiceNode", &USMDialogueTransition::execIsGoingToChoiceNode },
			{ "IsGoingToDialogueNode", &USMDialogueTransition::execIsGoingToDialogueNode },
			{ "IsLeavingChoiceNode", &USMDialogueTransition::execIsLeavingChoiceNode },
			{ "IsLeavingDialogueNode", &USMDialogueTransition::execIsLeavingDialogueNode },
			{ "OnDialogueUpdated", &USMDialogueTransition::execOnDialogueUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics
	{
		struct SMDialogueTransition_eventIsGoingToChoiceNode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMDialogueTransition_eventIsGoingToChoiceNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMDialogueTransition_eventIsGoingToChoiceNode_Parms), &Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMDialogueTransition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueTransition, nullptr, "IsGoingToChoiceNode", nullptr, nullptr, sizeof(SMDialogueTransition_eventIsGoingToChoiceNode_Parms), Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics
	{
		struct SMDialogueTransition_eventIsGoingToDialogueNode_Parms
		{
			bool bIncludeChoiceAsDialogue;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeChoiceAsDialogue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeChoiceAsDialogue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMDialogueTransition_eventIsGoingToDialogueNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMDialogueTransition_eventIsGoingToDialogueNode_Parms), &Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::NewProp_bIncludeChoiceAsDialogue_SetBit(void* Obj)
	{
		((SMDialogueTransition_eventIsGoingToDialogueNode_Parms*)Obj)->bIncludeChoiceAsDialogue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::NewProp_bIncludeChoiceAsDialogue = { "bIncludeChoiceAsDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMDialogueTransition_eventIsGoingToDialogueNode_Parms), &Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::NewProp_bIncludeChoiceAsDialogue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::NewProp_bIncludeChoiceAsDialogue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "CPP_Default_bIncludeChoiceAsDialogue", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMDialogueTransition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueTransition, nullptr, "IsGoingToDialogueNode", nullptr, nullptr, sizeof(SMDialogueTransition_eventIsGoingToDialogueNode_Parms), Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics
	{
		struct SMDialogueTransition_eventIsLeavingChoiceNode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMDialogueTransition_eventIsLeavingChoiceNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMDialogueTransition_eventIsLeavingChoiceNode_Parms), &Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMDialogueTransition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueTransition, nullptr, "IsLeavingChoiceNode", nullptr, nullptr, sizeof(SMDialogueTransition_eventIsLeavingChoiceNode_Parms), Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics
	{
		struct SMDialogueTransition_eventIsLeavingDialogueNode_Parms
		{
			bool bIncludeChoiceAsDialogue;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bIncludeChoiceAsDialogue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeChoiceAsDialogue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMDialogueTransition_eventIsLeavingDialogueNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMDialogueTransition_eventIsLeavingDialogueNode_Parms), &Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::NewProp_bIncludeChoiceAsDialogue_SetBit(void* Obj)
	{
		((SMDialogueTransition_eventIsLeavingDialogueNode_Parms*)Obj)->bIncludeChoiceAsDialogue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::NewProp_bIncludeChoiceAsDialogue = { "bIncludeChoiceAsDialogue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMDialogueTransition_eventIsLeavingDialogueNode_Parms), &Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::NewProp_bIncludeChoiceAsDialogue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::NewProp_bIncludeChoiceAsDialogue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "CPP_Default_bIncludeChoiceAsDialogue", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMDialogueTransition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueTransition, nullptr, "IsLeavingDialogueNode", nullptr, nullptr, sizeof(SMDialogueTransition_eventIsLeavingDialogueNode_Parms), Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMDialogueTransition_OnDialogueUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueTransition_OnDialogueUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/* Should be called when a dialogue is updated. Recommended usage is binding to an event. Override for custom implementations. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMDialogueTransition.h" },
		{ "ToolTip", "Should be called when a dialogue is updated. Recommended usage is binding to an event. Override for custom implementations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueTransition_OnDialogueUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueTransition, nullptr, "OnDialogueUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueTransition_OnDialogueUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueTransition_OnDialogueUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueTransition_OnDialogueUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueTransition_OnDialogueUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMDialogueTransition_NoRegister()
	{
		return USMDialogueTransition::StaticClass();
	}
	struct Z_Construct_UClass_USMDialogueTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanGoToNextDialogue_MetaData[];
#endif
		static void NewProp_bCanGoToNextDialogue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanGoToNextDialogue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMDialogueTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMTransitionInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SMDialogue,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMDialogueTransition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMDialogueTransition_IsGoingToChoiceNode, "IsGoingToChoiceNode" }, // 883306414
		{ &Z_Construct_UFunction_USMDialogueTransition_IsGoingToDialogueNode, "IsGoingToDialogueNode" }, // 2687681516
		{ &Z_Construct_UFunction_USMDialogueTransition_IsLeavingChoiceNode, "IsLeavingChoiceNode" }, // 3112086352
		{ &Z_Construct_UFunction_USMDialogueTransition_IsLeavingDialogueNode, "IsLeavingDialogueNode" }, // 3769835225
		{ &Z_Construct_UFunction_USMDialogueTransition_OnDialogueUpdated, "OnDialogueUpdated" }, // 1028955438
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueTransition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue (SM Dialogue)" },
		{ "DisplayName", "Dialogue Transition" },
		{ "HideCategories", "SMDialogueTransition SMTransitionInstance SMNodeInstance" },
		{ "IncludePath", "Nodes/Transitions/SMDialogueTransition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMDialogueTransition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueTransition_Statics::NewProp_bCanGoToNextDialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMDialogueTransition.h" },
	};
#endif
	void Z_Construct_UClass_USMDialogueTransition_Statics::NewProp_bCanGoToNextDialogue_SetBit(void* Obj)
	{
		((USMDialogueTransition*)Obj)->bCanGoToNextDialogue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMDialogueTransition_Statics::NewProp_bCanGoToNextDialogue = { "bCanGoToNextDialogue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMDialogueTransition), &Z_Construct_UClass_USMDialogueTransition_Statics::NewProp_bCanGoToNextDialogue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMDialogueTransition_Statics::NewProp_bCanGoToNextDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueTransition_Statics::NewProp_bCanGoToNextDialogue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMDialogueTransition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMDialogueTransition_Statics::NewProp_bCanGoToNextDialogue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMDialogueTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMDialogueTransition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMDialogueTransition_Statics::ClassParams = {
		&USMDialogueTransition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMDialogueTransition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueTransition_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMDialogueTransition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueTransition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMDialogueTransition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMDialogueTransition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMDialogueTransition, 3807226184);
	template<> SMDIALOGUE_API UClass* StaticClass<USMDialogueTransition>()
	{
		return USMDialogueTransition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMDialogueTransition(Z_Construct_UClass_USMDialogueTransition, &USMDialogueTransition::StaticClass, TEXT("/Script/SMDialogue"), TEXT("USMDialogueTransition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMDialogueTransition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
