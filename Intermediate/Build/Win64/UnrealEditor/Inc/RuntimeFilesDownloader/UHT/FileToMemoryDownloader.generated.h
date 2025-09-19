// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileToMemoryDownloader.h"

#ifdef RUNTIMEFILESDOWNLOADER_FileToMemoryDownloader_generated_h
#error "FileToMemoryDownloader.generated.h already included, missing '#pragma once' in FileToMemoryDownloader.h"
#endif
#define RUNTIMEFILESDOWNLOADER_FileToMemoryDownloader_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFileToMemoryDownloader;
enum class EDownloadToMemoryResult : uint8;

// ********** Begin Delegate FOnFileToMemoryDownloadComplete ***************************************
#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_28_DELEGATE \
RUNTIMEFILESDOWNLOADER_API void FOnFileToMemoryDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToMemoryDownloadComplete, TArray<uint8> const& DownloadedContent, EDownloadToMemoryResult Result, UFileToMemoryDownloader* Downloader);


// ********** End Delegate FOnFileToMemoryDownloadComplete *****************************************

// ********** Begin Delegate FOnFileToMemoryChunkDownloadComplete **********************************
#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_34_DELEGATE \
RUNTIMEFILESDOWNLOADER_API void FOnFileToMemoryChunkDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToMemoryChunkDownloadComplete, TArray<uint8> const& DownloadedContent, UFileToMemoryDownloader* Downloader);


// ********** End Delegate FOnFileToMemoryChunkDownloadComplete ************************************

// ********** Begin Delegate FOnFileToMemoryAllChunksDownloadComplete ******************************
#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_40_DELEGATE \
RUNTIMEFILESDOWNLOADER_API void FOnFileToMemoryAllChunksDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToMemoryAllChunksDownloadComplete, EDownloadToMemoryResult Result, UFileToMemoryDownloader* Downloader);


// ********** End Delegate FOnFileToMemoryAllChunksDownloadComplete ********************************

// ********** Begin Class UFileToMemoryDownloader **************************************************
#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDownloadFileToMemoryPerChunk); \
	DECLARE_FUNCTION(execDownloadFileToMemory);


RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToMemoryDownloader_NoRegister();

#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileToMemoryDownloader(); \
	friend struct Z_Construct_UClass_UFileToMemoryDownloader_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToMemoryDownloader_NoRegister(); \
public: \
	DECLARE_CLASS2(UFileToMemoryDownloader, UBaseFilesDownloader, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), Z_Construct_UClass_UFileToMemoryDownloader_NoRegister) \
	DECLARE_SERIALIZER(UFileToMemoryDownloader)


#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileToMemoryDownloader(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFileToMemoryDownloader(UFileToMemoryDownloader&&) = delete; \
	UFileToMemoryDownloader(const UFileToMemoryDownloader&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileToMemoryDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileToMemoryDownloader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFileToMemoryDownloader) \
	NO_API virtual ~UFileToMemoryDownloader();


#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_45_PROLOG
#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFileToMemoryDownloader;

// ********** End Class UFileToMemoryDownloader ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h

// ********** Begin Enum EDownloadToMemoryResult ***************************************************
#define FOREACH_ENUM_EDOWNLOADTOMEMORYRESULT(op) \
	op(EDownloadToMemoryResult::Success) \
	op(EDownloadToMemoryResult::SucceededByPayload) \
	op(EDownloadToMemoryResult::Cancelled) \
	op(EDownloadToMemoryResult::DownloadFailed) \
	op(EDownloadToMemoryResult::InvalidURL) 

enum class EDownloadToMemoryResult : uint8;
template<> struct TIsUEnumClass<EDownloadToMemoryResult> { enum { Value = true }; };
template<> RUNTIMEFILESDOWNLOADER_API UEnum* StaticEnum<EDownloadToMemoryResult>();
// ********** End Enum EDownloadToMemoryResult *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
