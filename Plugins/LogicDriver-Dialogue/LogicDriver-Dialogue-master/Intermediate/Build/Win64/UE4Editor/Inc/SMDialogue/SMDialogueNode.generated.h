// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USMDialogueNode;
class USMDialogueChoiceNode;
#ifdef SMDIALOGUE_SMDialogueNode_generated_h
#error "SMDialogueNode.generated.h already included, missing '#pragma once' in SMDialogueNode.h"
#endif
#define SMDIALOGUE_SMDialogueNode_generated_h

#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_SPARSE_DATA
#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_RPC_WRAPPERS \
	virtual UObject* GetDialogueSpeaker_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetDialogueSpeaker); \
	DECLARE_FUNCTION(execGetDialogueText);


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDialogueSpeaker); \
	DECLARE_FUNCTION(execGetDialogueText);


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_EVENT_PARMS \
	struct SMDialogueNode_Base_eventGetDialogueSpeaker_Parms \
	{ \
		UObject* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SMDialogueNode_Base_eventGetDialogueSpeaker_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_CALLBACK_WRAPPERS
#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMDialogueNode_Base(); \
	friend struct Z_Construct_UClass_USMDialogueNode_Base_Statics; \
public: \
	DECLARE_CLASS(USMDialogueNode_Base, USMStateInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMDialogue"), NO_API) \
	DECLARE_SERIALIZER(USMDialogueNode_Base)


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSMDialogueNode_Base(); \
	friend struct Z_Construct_UClass_USMDialogueNode_Base_Statics; \
public: \
	DECLARE_CLASS(USMDialogueNode_Base, USMStateInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMDialogue"), NO_API) \
	DECLARE_SERIALIZER(USMDialogueNode_Base)


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMDialogueNode_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMDialogueNode_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMDialogueNode_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMDialogueNode_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMDialogueNode_Base(USMDialogueNode_Base&&); \
	NO_API USMDialogueNode_Base(const USMDialogueNode_Base&); \
public:


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMDialogueNode_Base(USMDialogueNode_Base&&); \
	NO_API USMDialogueNode_Base(const USMDialogueNode_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMDialogueNode_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMDialogueNode_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMDialogueNode_Base)


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DialogueBody() { return STRUCT_OFFSET(USMDialogueNode_Base, DialogueBody); } \
	FORCEINLINE static uint32 __PPO__PreviousDialogueSpeaker() { return STRUCT_OFFSET(USMDialogueNode_Base, PreviousDialogueSpeaker); }


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_9_PROLOG \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_EVENT_PARMS


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_SPARSE_DATA \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_RPC_WRAPPERS \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_CALLBACK_WRAPPERS \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_INCLASS \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_SPARSE_DATA \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_CALLBACK_WRAPPERS \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_INCLASS_NO_PURE_DECLS \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMDIALOGUE_API UClass* StaticClass<class USMDialogueNode_Base>();

#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_SPARSE_DATA
#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllDialogueSpeakers); \
	DECLARE_FUNCTION(execGetAllConnectedDialogueNodes); \
	DECLARE_FUNCTION(execGetAllDialogueNodes); \
	DECLARE_FUNCTION(execGetAvailableChoices);


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllDialogueSpeakers); \
	DECLARE_FUNCTION(execGetAllConnectedDialogueNodes); \
	DECLARE_FUNCTION(execGetAllDialogueNodes); \
	DECLARE_FUNCTION(execGetAvailableChoices);


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMDialogueNode(); \
	friend struct Z_Construct_UClass_USMDialogueNode_Statics; \
public: \
	DECLARE_CLASS(USMDialogueNode, USMDialogueNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMDialogue"), NO_API) \
	DECLARE_SERIALIZER(USMDialogueNode)


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUSMDialogueNode(); \
	friend struct Z_Construct_UClass_USMDialogueNode_Statics; \
public: \
	DECLARE_CLASS(USMDialogueNode, USMDialogueNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMDialogue"), NO_API) \
	DECLARE_SERIALIZER(USMDialogueNode)


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMDialogueNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMDialogueNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMDialogueNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMDialogueNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMDialogueNode(USMDialogueNode&&); \
	NO_API USMDialogueNode(const USMDialogueNode&); \
public:


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMDialogueNode(USMDialogueNode&&); \
	NO_API USMDialogueNode(const USMDialogueNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMDialogueNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMDialogueNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMDialogueNode)


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bUsePreviousSpeakerIfNoneSet() { return STRUCT_OFFSET(USMDialogueNode, bUsePreviousSpeakerIfNoneSet); } \
	FORCEINLINE static uint32 __PPO__Speaker() { return STRUCT_OFFSET(USMDialogueNode, Speaker); }


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_40_PROLOG
#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_PRIVATE_PROPERTY_OFFSET \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_SPARSE_DATA \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_RPC_WRAPPERS \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_INCLASS \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_PRIVATE_PROPERTY_OFFSET \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_SPARSE_DATA \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_INCLASS_NO_PURE_DECLS \
	ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h_44_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMDIALOGUE_API UClass* StaticClass<class USMDialogueNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAdom_Plugins_LogicDriver_Dialogue_LogicDriver_Dialogue_master_Source_SMDialogue_Public_Nodes_States_SMDialogueNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
