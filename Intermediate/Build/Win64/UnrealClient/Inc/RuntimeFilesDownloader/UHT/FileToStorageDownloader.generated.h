// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileToStorageDownloader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFileToStorageDownloader;
enum class EDownloadToStorageResult : uint8;
#ifdef RUNTIMEFILESDOWNLOADER_FileToStorageDownloader_generated_h
#error "FileToStorageDownloader.generated.h already included, missing '#pragma once' in FileToStorageDownloader.h"
#endif
#define RUNTIMEFILESDOWNLOADER_FileToStorageDownloader_generated_h

#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_30_DELEGATE \
RUNTIMEFILESDOWNLOADER_API void FOnFileToStorageDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToStorageDownloadComplete, EDownloadToStorageResult Result, const FString& SavedPath, UFileToStorageDownloader* Downloader);


#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDownloadFileToStorage);


#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileToStorageDownloader(); \
	friend struct Z_Construct_UClass_UFileToStorageDownloader_Statics; \
public: \
	DECLARE_CLASS(UFileToStorageDownloader, UBaseFilesDownloader, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFilesDownloader"), NO_API) \
	DECLARE_SERIALIZER(UFileToStorageDownloader)


#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileToStorageDownloader(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFileToStorageDownloader(UFileToStorageDownloader&&); \
	UFileToStorageDownloader(const UFileToStorageDownloader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileToStorageDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileToStorageDownloader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFileToStorageDownloader) \
	NO_API virtual ~UFileToStorageDownloader();


#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_37_PROLOG
#define FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<class UFileToStorageDownloader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h


#define FOREACH_ENUM_EDOWNLOADTOSTORAGERESULT(op) \
	op(EDownloadToStorageResult::Success) \
	op(EDownloadToStorageResult::SucceededByPayload) \
	op(EDownloadToStorageResult::Cancelled) \
	op(EDownloadToStorageResult::DownloadFailed) \
	op(EDownloadToStorageResult::SaveFailed) \
	op(EDownloadToStorageResult::DirectoryCreationFailed) \
	op(EDownloadToStorageResult::InvalidURL) \
	op(EDownloadToStorageResult::InvalidSavePath) 

enum class EDownloadToStorageResult : uint8;
template<> struct TIsUEnumClass<EDownloadToStorageResult> { enum { Value = true }; };
template<> RUNTIMEFILESDOWNLOADER_API UEnum* StaticEnum<EDownloadToStorageResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
