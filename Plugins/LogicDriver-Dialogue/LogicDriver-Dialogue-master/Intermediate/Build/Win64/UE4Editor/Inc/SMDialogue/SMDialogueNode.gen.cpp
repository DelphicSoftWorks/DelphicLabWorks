// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMDialogue/Public/Nodes/States/SMDialogueNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMDialogueNode() {}
// Cross Module References
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueNode_Base_NoRegister();
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueNode_Base();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance();
	UPackage* Z_Construct_UPackage__Script_SMDialogue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty();
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueNode_NoRegister();
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueNode();
	SMDIALOGUE_API UClass* Z_Construct_UClass_USMDialogueChoiceNode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USMDialogueNode_Base::execGetDialogueSpeaker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetDialogueSpeaker_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMDialogueNode_Base::execGetDialogueText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDialogueText();
		P_NATIVE_END;
	}
	static FName NAME_USMDialogueNode_Base_GetDialogueSpeaker = FName(TEXT("GetDialogueSpeaker"));
	UObject* USMDialogueNode_Base::GetDialogueSpeaker() const
	{
		SMDialogueNode_Base_eventGetDialogueSpeaker_Parms Parms;
		const_cast<USMDialogueNode_Base*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMDialogueNode_Base_GetDialogueSpeaker),&Parms);
		return Parms.ReturnValue;
	}
	void USMDialogueNode_Base::StaticRegisterNativesUSMDialogueNode_Base()
	{
		UClass* Class = USMDialogueNode_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDialogueSpeaker", &USMDialogueNode_Base::execGetDialogueSpeaker },
			{ "GetDialogueText", &USMDialogueNode_Base::execGetDialogueText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMDialogueNode_Base_eventGetDialogueSpeaker_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/* The speaker this dialogue belongs to. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
		{ "ToolTip", "The speaker this dialogue belongs to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueNode_Base, nullptr, "GetDialogueSpeaker", nullptr, nullptr, sizeof(SMDialogueNode_Base_eventGetDialogueSpeaker_Parms), Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics
	{
		struct SMDialogueNode_Base_eventGetDialogueText_Parms
		{
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMDialogueNode_Base_eventGetDialogueText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/* Evaluates the dialogue graph and returns formatted text. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
		{ "ToolTip", "Evaluates the dialogue graph and returns formatted text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueNode_Base, nullptr, "GetDialogueText", nullptr, nullptr, sizeof(SMDialogueNode_Base_eventGetDialogueText_Parms), Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMDialogueNode_Base_NoRegister()
	{
		return USMDialogueNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_USMDialogueNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousDialogueSpeaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousDialogueSpeaker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogueBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMDialogueNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMStateInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SMDialogue,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMDialogueNode_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueSpeaker, "GetDialogueSpeaker" }, // 2563057443
		{ &Z_Construct_UFunction_USMDialogueNode_Base_GetDialogueText, "GetDialogueText" }, // 2736337044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueNode_Base_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Dialogue Node Base" },
		{ "HideCategories", "SMStateInstance SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMDialogueNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueNode_Base_Statics::NewProp_PreviousDialogueSpeaker_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMDialogueNode_Base_Statics::NewProp_PreviousDialogueSpeaker = { "PreviousDialogueSpeaker", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMDialogueNode_Base, PreviousDialogueSpeaker), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMDialogueNode_Base_Statics::NewProp_PreviousDialogueSpeaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueNode_Base_Statics::NewProp_PreviousDialogueSpeaker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueNode_Base_Statics::NewProp_DialogueBody_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMDialogueNode_Base_Statics::NewProp_DialogueBody = { "DialogueBody", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMDialogueNode_Base, DialogueBody), Z_Construct_UScriptStruct_FSMTextGraphProperty, METADATA_PARAMS(Z_Construct_UClass_USMDialogueNode_Base_Statics::NewProp_DialogueBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueNode_Base_Statics::NewProp_DialogueBody_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMDialogueNode_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMDialogueNode_Base_Statics::NewProp_PreviousDialogueSpeaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMDialogueNode_Base_Statics::NewProp_DialogueBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMDialogueNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMDialogueNode_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMDialogueNode_Base_Statics::ClassParams = {
		&USMDialogueNode_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMDialogueNode_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueNode_Base_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMDialogueNode_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMDialogueNode_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMDialogueNode_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMDialogueNode_Base, 1392632020);
	template<> SMDIALOGUE_API UClass* StaticClass<USMDialogueNode_Base>()
	{
		return USMDialogueNode_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMDialogueNode_Base(Z_Construct_UClass_USMDialogueNode_Base, &USMDialogueNode_Base::StaticClass, TEXT("/Script/SMDialogue"), TEXT("USMDialogueNode_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMDialogueNode_Base);
	DEFINE_FUNCTION(USMDialogueNode::execGetAllDialogueSpeakers)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Speakers);
		P_GET_UBOOL(Z_Param_bConnectedOnly);
		P_GET_UBOOL(Z_Param_bBreakOnChoices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllDialogueSpeakers(Z_Param_Out_Speakers,Z_Param_bConnectedOnly,Z_Param_bBreakOnChoices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMDialogueNode::execGetAllConnectedDialogueNodes)
	{
		P_GET_TARRAY_REF(USMDialogueNode*,Z_Param_Out_OutDialogueNodes);
		P_GET_UBOOL(Z_Param_bBreakOnChoices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllConnectedDialogueNodes(Z_Param_Out_OutDialogueNodes,Z_Param_bBreakOnChoices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMDialogueNode::execGetAllDialogueNodes)
	{
		P_GET_TARRAY_REF(USMDialogueNode*,Z_Param_Out_OutDialogueNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllDialogueNodes(Z_Param_Out_OutDialogueNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMDialogueNode::execGetAvailableChoices)
	{
		P_GET_TARRAY_REF(USMDialogueChoiceNode*,Z_Param_Out_Choices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAvailableChoices(Z_Param_Out_Choices);
		P_NATIVE_END;
	}
	void USMDialogueNode::StaticRegisterNativesUSMDialogueNode()
	{
		UClass* Class = USMDialogueNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllConnectedDialogueNodes", &USMDialogueNode::execGetAllConnectedDialogueNodes },
			{ "GetAllDialogueNodes", &USMDialogueNode::execGetAllDialogueNodes },
			{ "GetAllDialogueSpeakers", &USMDialogueNode::execGetAllDialogueSpeakers },
			{ "GetAvailableChoices", &USMDialogueNode::execGetAvailableChoices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics
	{
		struct SMDialogueNode_eventGetAllConnectedDialogueNodes_Parms
		{
			TArray<USMDialogueNode*> OutDialogueNodes;
			bool bBreakOnChoices;
		};
		static void NewProp_bBreakOnChoices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBreakOnChoices;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDialogueNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutDialogueNodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::NewProp_bBreakOnChoices_SetBit(void* Obj)
	{
		((SMDialogueNode_eventGetAllConnectedDialogueNodes_Parms*)Obj)->bBreakOnChoices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::NewProp_bBreakOnChoices = { "bBreakOnChoices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMDialogueNode_eventGetAllConnectedDialogueNodes_Parms), &Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::NewProp_bBreakOnChoices_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::NewProp_OutDialogueNodes = { "OutDialogueNodes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMDialogueNode_eventGetAllConnectedDialogueNodes_Parms, OutDialogueNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::NewProp_OutDialogueNodes_Inner = { "OutDialogueNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::NewProp_bBreakOnChoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::NewProp_OutDialogueNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::NewProp_OutDialogueNodes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Get all dialogue nodes that are connected to each other starting with this node.\n\x09 * @param OutDialogueNodes All connected nodes.\n\x09 * @param bBreakOnChoices If choice nodes should break the search.\n\x09 */" },
		{ "CPP_Default_bBreakOnChoices", "false" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
		{ "ToolTip", "Get all dialogue nodes that are connected to each other starting with this node.\n@param OutDialogueNodes All connected nodes.\n@param bBreakOnChoices If choice nodes should break the search." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueNode, nullptr, "GetAllConnectedDialogueNodes", nullptr, nullptr, sizeof(SMDialogueNode_eventGetAllConnectedDialogueNodes_Parms), Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics
	{
		struct SMDialogueNode_eventGetAllDialogueNodes_Parms
		{
			TArray<USMDialogueNode*> OutDialogueNodes;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDialogueNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutDialogueNodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::NewProp_OutDialogueNodes = { "OutDialogueNodes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMDialogueNode_eventGetAllDialogueNodes_Parms, OutDialogueNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::NewProp_OutDialogueNodes_Inner = { "OutDialogueNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMDialogueNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::NewProp_OutDialogueNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::NewProp_OutDialogueNodes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/* Get all dialogue nodes in the hierarchy starting from this node. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
		{ "ToolTip", "Get all dialogue nodes in the hierarchy starting from this node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueNode, nullptr, "GetAllDialogueNodes", nullptr, nullptr, sizeof(SMDialogueNode_eventGetAllDialogueNodes_Parms), Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics
	{
		struct SMDialogueNode_eventGetAllDialogueSpeakers_Parms
		{
			TArray<UObject*> Speakers;
			bool bConnectedOnly;
			bool bBreakOnChoices;
		};
		static void NewProp_bBreakOnChoices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBreakOnChoices;
		static void NewProp_bConnectedOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConnectedOnly;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Speakers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Speakers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_bBreakOnChoices_SetBit(void* Obj)
	{
		((SMDialogueNode_eventGetAllDialogueSpeakers_Parms*)Obj)->bBreakOnChoices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_bBreakOnChoices = { "bBreakOnChoices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMDialogueNode_eventGetAllDialogueSpeakers_Parms), &Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_bBreakOnChoices_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_bConnectedOnly_SetBit(void* Obj)
	{
		((SMDialogueNode_eventGetAllDialogueSpeakers_Parms*)Obj)->bConnectedOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_bConnectedOnly = { "bConnectedOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMDialogueNode_eventGetAllDialogueSpeakers_Parms), &Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_bConnectedOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_Speakers = { "Speakers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMDialogueNode_eventGetAllDialogueSpeakers_Parms, Speakers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_Speakers_Inner = { "Speakers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_bBreakOnChoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_bConnectedOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_Speakers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::NewProp_Speakers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * Get all speaker objects for dialogues.\n\x09 * @param Speakers All found speakers.\n\x09 * @param bConnectedOnly If only dialogue nodes connected to each other should be checked.\n\x09 * @param bBreakOnChoices If choice nodes should break the search.\n\x09 */" },
		{ "CPP_Default_bBreakOnChoices", "false" },
		{ "CPP_Default_bConnectedOnly", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
		{ "ToolTip", "Get all speaker objects for dialogues.\n@param Speakers All found speakers.\n@param bConnectedOnly If only dialogue nodes connected to each other should be checked.\n@param bBreakOnChoices If choice nodes should break the search." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueNode, nullptr, "GetAllDialogueSpeakers", nullptr, nullptr, sizeof(SMDialogueNode_eventGetAllDialogueSpeakers_Parms), Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics
	{
		struct SMDialogueNode_eventGetAvailableChoices_Parms
		{
			TArray<USMDialogueChoiceNode*> Choices;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Choices;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Choices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMDialogueNode_eventGetAvailableChoices_Parms, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMDialogueChoiceNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::NewProp_Choices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::NewProp_Choices_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/* Iterates over all transitions out leading to dialogue choices and evaluates them determining which choices are visible. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
		{ "ToolTip", "Iterates over all transitions out leading to dialogue choices and evaluates them determining which choices are visible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMDialogueNode, nullptr, "GetAvailableChoices", nullptr, nullptr, sizeof(SMDialogueNode_eventGetAvailableChoices_Parms), Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMDialogueNode_NoRegister()
	{
		return USMDialogueNode::StaticClass();
	}
	struct Z_Construct_UClass_USMDialogueNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Speaker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePreviousSpeakerIfNoneSet_MetaData[];
#endif
		static void NewProp_bUsePreviousSpeakerIfNoneSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePreviousSpeakerIfNoneSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMDialogueNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMDialogueNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMDialogue,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMDialogueNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMDialogueNode_GetAllConnectedDialogueNodes, "GetAllConnectedDialogueNodes" }, // 2323053050
		{ &Z_Construct_UFunction_USMDialogueNode_GetAllDialogueNodes, "GetAllDialogueNodes" }, // 3888113350
		{ &Z_Construct_UFunction_USMDialogueNode_GetAllDialogueSpeakers, "GetAllDialogueSpeakers" }, // 592322310
		{ &Z_Construct_UFunction_USMDialogueNode_GetAvailableChoices, "GetAvailableChoices" }, // 2751359320
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue (SM Dialogue)" },
		{ "DisplayName", "Dialogue Node" },
		{ "HideCategories", "SMDialogueNode SMStateInstance SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMDialogueNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueNode_Statics::NewProp_Speaker_MetaData[] = {
		{ "Category", "Speaker" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMDialogueNode_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMDialogueNode, Speaker), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMDialogueNode_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueNode_Statics::NewProp_Speaker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMDialogueNode_Statics::NewProp_bUsePreviousSpeakerIfNoneSet_MetaData[] = {
		{ "Category", "Speaker" },
		{ "Comment", "/* If no speaker has been set the previous speaker will be used. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMDialogueNode.h" },
		{ "ToolTip", "If no speaker has been set the previous speaker will be used." },
	};
#endif
	void Z_Construct_UClass_USMDialogueNode_Statics::NewProp_bUsePreviousSpeakerIfNoneSet_SetBit(void* Obj)
	{
		((USMDialogueNode*)Obj)->bUsePreviousSpeakerIfNoneSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMDialogueNode_Statics::NewProp_bUsePreviousSpeakerIfNoneSet = { "bUsePreviousSpeakerIfNoneSet", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMDialogueNode), &Z_Construct_UClass_USMDialogueNode_Statics::NewProp_bUsePreviousSpeakerIfNoneSet_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMDialogueNode_Statics::NewProp_bUsePreviousSpeakerIfNoneSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueNode_Statics::NewProp_bUsePreviousSpeakerIfNoneSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMDialogueNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMDialogueNode_Statics::NewProp_Speaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMDialogueNode_Statics::NewProp_bUsePreviousSpeakerIfNoneSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMDialogueNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMDialogueNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMDialogueNode_Statics::ClassParams = {
		&USMDialogueNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMDialogueNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMDialogueNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMDialogueNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMDialogueNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMDialogueNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMDialogueNode, 3657343343);
	template<> SMDIALOGUE_API UClass* StaticClass<USMDialogueNode>()
	{
		return USMDialogueNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMDialogueNode(Z_Construct_UClass_USMDialogueNode, &USMDialogueNode::StaticClass, TEXT("/Script/SMDialogue"), TEXT("USMDialogueNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMDialogueNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
