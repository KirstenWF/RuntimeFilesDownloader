// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseFilesDownloader.h"

#ifdef RUNTIMEFILESDOWNLOADER_BaseFilesDownloader_generated_h
#error "BaseFilesDownloader.generated.h already included, missing '#pragma once' in BaseFilesDownloader.h"
#endif
#define RUNTIMEFILESDOWNLOADER_BaseFilesDownloader_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTexture2D;

// ********** Begin Delegate FOnDownloadProgress ***************************************************
#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_11_DELEGATE \
RUNTIMEFILESDOWNLOADER_API void FOnDownloadProgress_DelegateWrapper(const FScriptDelegate& OnDownloadProgress, int64 BytesReceived, int64 ContentLength, float ProgressRatio);


// ********** End Delegate FOnDownloadProgress *****************************************************

// ********** Begin Delegate FOnGetDownloadContentLength *******************************************
#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_17_DELEGATE \
RUNTIMEFILESDOWNLOADER_API void FOnGetDownloadContentLength_DelegateWrapper(const FScriptDelegate& OnGetDownloadContentLength, int64 ContentLength);


// ********** End Delegate FOnGetDownloadContentLength *********************************************

// ********** Begin Class UBaseFilesDownloader *****************************************************
#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsFileExist); \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execLoadFileToString); \
	DECLARE_FUNCTION(execSaveArrayToFile); \
	DECLARE_FUNCTION(execLoadFileToArray); \
	DECLARE_FUNCTION(execBytesToTexture); \
	DECLARE_FUNCTION(execBytesToString); \
	DECLARE_FUNCTION(execGetContentSize); \
	DECLARE_FUNCTION(execCancelDownload);


RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader_NoRegister();

#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseFilesDownloader(); \
	friend struct Z_Construct_UClass_UBaseFilesDownloader_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseFilesDownloader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), Z_Construct_UClass_UBaseFilesDownloader_NoRegister) \
	DECLARE_SERIALIZER(UBaseFilesDownloader)


#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseFilesDownloader(UBaseFilesDownloader&&) = delete; \
	UBaseFilesDownloader(const UBaseFilesDownloader&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseFilesDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseFilesDownloader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseFilesDownloader) \
	NO_API virtual ~UBaseFilesDownloader();


#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_27_PROLOG
#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseFilesDownloader;

// ********** End Class UBaseFilesDownloader *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_BaseFilesDownloader_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
