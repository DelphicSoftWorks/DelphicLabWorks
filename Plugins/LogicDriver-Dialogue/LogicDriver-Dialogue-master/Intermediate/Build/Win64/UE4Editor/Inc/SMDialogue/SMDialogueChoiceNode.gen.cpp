// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMDialogue/Public/Nodes/States/SMDialogueChoiceNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMDialogueChoiceNode() {}
// Cross Module References
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueChoiceNode_NoRegister();
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueChoiceNode();
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueNode_Base();
	UPackage* Z_Construct_UPackage__Script_SMDialogue();
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueNode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USMDialogueChoiceNode::execGetCurrentDialogueOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMDialogueNode**)Z_Param__Result=P_THIS->GetCurrentDialogueOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMDialogueChoiceNode::execSelectChoice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectChoice_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMDialogueChoiceNode_SelectChoice = FName(TEXT("SelectChoice"));
	void USMDialogueChoiceNode::SelectChoice()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMDialogueChoiceNode_SelectChoice),NULL);
	}
	void USMDialogueChoiceNode::StaticRegisterNativesUSMDialogueChoiceNode()
	{
		UClass* Class = USMDialogueChoiceNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentDialogueOwner", &USMDialogueChoiceNode::execGetCurrentDialogueOwner },
			{ "SelectChoice", &USMDialogueChoiceNode::execSelectChoice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics
	{
		struct SMDialogueChoiceNode_eventGetCurrentDialogueOwner_Parms
		{
			USMDialogueNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMDialogueChoiceNode_eventGetCurrentDialogueOwner_Parms, ReturnValue), Z_Construct_UClass_USMDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/* Returns the dialogue node this choice currently belongs to.\n\x09 * This can change if more than one node leads to this choice. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueChoiceNode.h" },
		{ "ToolTip", "Returns the dialogue node this choice currently belongs to.\n       * This can change if more than one node leads to this choice." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueChoiceNode, nullptr, "GetCurrentDialogueOwner", nullptr, nullptr, sizeof(SMDialogueChoiceNode_eventGetCurrentDialogueOwner_Parms), Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMDialogueChoiceNode_SelectChoice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueChoiceNode_SelectChoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/* Signals the dialogue node owner to take this choice. This can only be valid if the choice was retrieved from the dialogue node owner method GetAvailableChoices. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueChoiceNode.h" },
		{ "ToolTip", "Signals the dialogue node owner to take this choice. This can only be valid if the choice was retrieved from the dialogue node owner method GetAvailableChoices." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueChoiceNode_SelectChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueChoiceNode, nullptr, "SelectChoice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueChoiceNode_SelectChoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueChoiceNode_SelectChoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueChoiceNode_SelectChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueChoiceNode_SelectChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMDialogueChoiceNode_NoRegister()
	{
		return USMDialogueChoiceNode::StaticClass();
	}
	struct Z_Construct_UClass_USMDialogueChoiceNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogueOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentDialogueOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMDialogueChoiceNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMDialogueNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMDialogue,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMDialogueChoiceNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMDialogueChoiceNode_GetCurrentDialogueOwner, "GetCurrentDialogueOwner" }, // 2850701427
		{ &Z_Construct_UFunction_USMDialogueChoiceNode_SelectChoice, "SelectChoice" }, // 3366874287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueChoiceNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue (SM Dialogue)" },
		{ "DisplayName", "Dialogue Choice Node" },
		{ "HideCategories", "SMDialogueNode SMStateInstance SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMDialogueChoiceNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueChoiceNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueChoiceNode_Statics::NewProp_CurrentDialogueOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueChoiceNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMDialogueChoiceNode_Statics::NewProp_CurrentDialogueOwner = { "CurrentDialogueOwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMDialogueChoiceNode, CurrentDialogueOwner), Z_Construct_UClass_USMDialogueNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMDialogueChoiceNode_Statics::NewProp_CurrentDialogueOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueChoiceNode_Statics::NewProp_CurrentDialogueOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMDialogueChoiceNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMDialogueChoiceNode_Statics::NewProp_CurrentDialogueOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMDialogueChoiceNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMDialogueChoiceNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMDialogueChoiceNode_Statics::ClassParams = {
		&USMDialogueChoiceNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMDialogueChoiceNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueChoiceNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMDialogueChoiceNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueChoiceNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMDialogueChoiceNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMDialogueChoiceNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMDialogueChoiceNode, 738726583);
	template<> SMDIALOGUE_API UClass* StaticClass<USMDialogueChoiceNode>()
	{
		return USMDialogueChoiceNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMDialogueChoiceNode(Z_Construct_UClass_USMDialogueChoiceNode, &USMDialogueChoiceNode::StaticClass, TEXT("/Script/SMDialogue"), TEXT("USMDialogueChoiceNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMDialogueChoiceNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
