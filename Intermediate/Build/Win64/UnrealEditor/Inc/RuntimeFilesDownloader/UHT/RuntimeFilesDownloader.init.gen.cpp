// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeFilesDownloader_init() {}
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature();
	RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RuntimeFilesDownloader;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RuntimeFilesDownloader()
	{
		if (!Z_Registration_Info_UPackage__Script_RuntimeFilesDownloader.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnGetDownloadContentLength__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RuntimeFilesDownloader",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF519D9A9,
				0x71A4EC0B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RuntimeFilesDownloader.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RuntimeFilesDownloader.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RuntimeFilesDownloader(Z_Construct_UPackage__Script_RuntimeFilesDownloader, TEXT("/Script/RuntimeFilesDownloader"), Z_Registration_Info_UPackage__Script_RuntimeFilesDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF519D9A9, 0x71A4EC0B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
