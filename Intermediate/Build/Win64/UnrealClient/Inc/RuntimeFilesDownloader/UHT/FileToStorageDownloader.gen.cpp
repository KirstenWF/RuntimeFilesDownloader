// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFilesDownloader/Public/FileToStorageDownloader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileToStorageDownloader() {}

// Begin Cross Module References
RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader();
RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToStorageDownloader();
RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToStorageDownloader_NoRegister();
RUNTIMEFILESDOWNLOADER_API UEnum* Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult();
RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature();
RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RuntimeFilesDownloader();
// End Cross Module References

// Begin Enum EDownloadToStorageResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDownloadToStorageResult;
static UEnum* EDownloadToStorageResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDownloadToStorageResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDownloadToStorageResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult, (UObject*)Z_Construct_UPackage__Script_RuntimeFilesDownloader(), TEXT("EDownloadToStorageResult"));
	}
	return Z_Registration_Info_UEnum_EDownloadToStorageResult.OuterSingleton;
}
template<> RUNTIMEFILESDOWNLOADER_API UEnum* StaticEnum<EDownloadToStorageResult>()
{
	return EDownloadToStorageResult_StaticEnum();
}
struct Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "EDownloadToStorageResult::Cancelled" },
		{ "Category", "File To Storage Downloader" },
		{ "Comment", "/** Possible results from a download request */" },
		{ "DirectoryCreationFailed.Name", "EDownloadToStorageResult::DirectoryCreationFailed" },
		{ "DownloadFailed.Name", "EDownloadToStorageResult::DownloadFailed" },
		{ "InvalidSavePath.Name", "EDownloadToStorageResult::InvalidSavePath" },
		{ "InvalidURL.Name", "EDownloadToStorageResult::InvalidURL" },
		{ "ModuleRelativePath", "Public/FileToStorageDownloader.h" },
		{ "SaveFailed.Name", "EDownloadToStorageResult::SaveFailed" },
		{ "SucceededByPayload.Comment", "/** Downloaded successfully, but there was no Content-Length header in the response and thus downloaded by payload */" },
		{ "SucceededByPayload.Name", "EDownloadToStorageResult::SucceededByPayload" },
		{ "SucceededByPayload.ToolTip", "Downloaded successfully, but there was no Content-Length header in the response and thus downloaded by payload" },
		{ "Success.Name", "EDownloadToStorageResult::Success" },
		{ "ToolTip", "Possible results from a download request" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDownloadToStorageResult::Success", (int64)EDownloadToStorageResult::Success },
		{ "EDownloadToStorageResult::SucceededByPayload", (int64)EDownloadToStorageResult::SucceededByPayload },
		{ "EDownloadToStorageResult::Cancelled", (int64)EDownloadToStorageResult::Cancelled },
		{ "EDownloadToStorageResult::DownloadFailed", (int64)EDownloadToStorageResult::DownloadFailed },
		{ "EDownloadToStorageResult::SaveFailed", (int64)EDownloadToStorageResult::SaveFailed },
		{ "EDownloadToStorageResult::DirectoryCreationFailed", (int64)EDownloadToStorageResult::DirectoryCreationFailed },
		{ "EDownloadToStorageResult::InvalidURL", (int64)EDownloadToStorageResult::InvalidURL },
		{ "EDownloadToStorageResult::InvalidSavePath", (int64)EDownloadToStorageResult::InvalidSavePath },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
	nullptr,
	"EDownloadToStorageResult",
	"EDownloadToStorageResult",
	Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult()
{
	if (!Z_Registration_Info_UEnum_EDownloadToStorageResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDownloadToStorageResult.InnerSingleton, Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDownloadToStorageResult.InnerSingleton;
}
// End Enum EDownloadToStorageResult

// Begin Delegate FOnFileToStorageDownloadComplete
struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms
	{
		EDownloadToStorageResult Result;
		FString SavedPath;
		UFileToStorageDownloader* Downloader;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate broadcast after the download is complete */" },
		{ "ModuleRelativePath", "Public/FileToStorageDownloader.h" },
		{ "ToolTip", "Dynamic delegate broadcast after the download is complete" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavedPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Downloader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms, Result), Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToStorageResult, METADATA_PARAMS(0, nullptr) }; // 3819729896
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_SavedPath = { "SavedPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms, SavedPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedPath_MetaData), NewProp_SavedPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_Downloader = { "Downloader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms, Downloader), Z_Construct_UClass_UFileToStorageDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_SavedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::NewProp_Downloader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnFileToStorageDownloadComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileToStorageDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToStorageDownloadComplete, EDownloadToStorageResult Result, const FString& SavedPath, UFileToStorageDownloader* Downloader)
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms
	{
		EDownloadToStorageResult Result;
		FString SavedPath;
		UFileToStorageDownloader* Downloader;
	};
	_Script_RuntimeFilesDownloader_eventOnFileToStorageDownloadComplete_Parms Parms;
	Parms.Result=Result;
	Parms.SavedPath=SavedPath;
	Parms.Downloader=Downloader;
	OnFileToStorageDownloadComplete.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnFileToStorageDownloadComplete

// Begin Class UFileToStorageDownloader Function DownloadFileToStorage
struct Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics
{
	struct FileToStorageDownloader_eventDownloadFileToStorage_Parms
	{
		FString URL;
		FString SavePath;
		float Timeout;
		FString ContentType;
		bool bForceByPayload;
		FScriptDelegate OnProgress;
		FScriptDelegate OnComplete;
		UFileToStorageDownloader* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Storage" },
		{ "Comment", "/**\n\x09 * Download the file and save it to storage\n\x09 *\n\x09 * @param URL The URL of the file to be downloaded\n\x09 * @param SavePath The absolute path and file name to save the downloaded file\n\x09 * @param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n\x09 * @param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n\x09 * @param bForceByPayload If true, download the file regardless of the Content-Length header's presence (useful for servers without support for this header)\n\x09 * @param OnProgress Delegate for download progress updates\n\x09 * @param OnComplete Delegate for broadcasting the completion of the download\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileToStorageDownloader.h" },
		{ "ToolTip", "Download the file and save it to storage\n\n@param URL The URL of the file to be downloaded\n@param SavePath The absolute path and file name to save the downloaded file\n@param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n@param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n@param bForceByPayload If true, download the file regardless of the Content-Length header's presence (useful for servers without support for this header)\n@param OnProgress Delegate for download progress updates\n@param OnComplete Delegate for broadcasting the completion of the download" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
	static void NewProp_bForceByPayload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceByPayload;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnProgress;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePath_MetaData), NewProp_SavePath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, ContentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentType_MetaData), NewProp_ContentType_MetaData) };
void Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_bForceByPayload_SetBit(void* Obj)
{
	((FileToStorageDownloader_eventDownloadFileToStorage_Parms*)Obj)->bForceByPayload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_bForceByPayload = { "bForceByPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(FileToStorageDownloader_eventDownloadFileToStorage_Parms), &Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_bForceByPayload_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, OnProgress), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgress_MetaData), NewProp_OnProgress_MetaData) }; // 1817734726
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, OnComplete), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToStorageDownloadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 61895612
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(FileToStorageDownloader_eventDownloadFileToStorage_Parms, ReturnValue), Z_Construct_UClass_UFileToStorageDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_SavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_bForceByPayload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileToStorageDownloader, nullptr, "DownloadFileToStorage", nullptr, nullptr, Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::FileToStorageDownloader_eventDownloadFileToStorage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::FileToStorageDownloader_eventDownloadFileToStorage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileToStorageDownloader::execDownloadFileToStorage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
	P_GET_UBOOL(Z_Param_bForceByPayload);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnProgress);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFileToStorageDownloader**)Z_Param__Result=UFileToStorageDownloader::DownloadFileToStorage(Z_Param_URL,Z_Param_SavePath,Z_Param_Timeout,Z_Param_ContentType,Z_Param_bForceByPayload,FOnDownloadProgress(Z_Param_Out_OnProgress),FOnFileToStorageDownloadComplete(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// End Class UFileToStorageDownloader Function DownloadFileToStorage

// Begin Class UFileToStorageDownloader
void UFileToStorageDownloader::StaticRegisterNativesUFileToStorageDownloader()
{
	UClass* Class = UFileToStorageDownloader::StaticClass();
	static constexpr FNameNativePtrPair Funcs[] = {
		{ "DownloadFileToStorage", &UFileToStorageDownloader::execDownloadFileToStorage, ERASE_FUNCTION_PTR(&UFileToStorageDownloader::DownloadFileToStorage,(const FString&, const FString&, float, const FString&, bool, const FOnDownloadProgress&, const FOnFileToStorageDownloadComplete&),ERASE_ARGUMENT_PACK(UFileToStorageDownloader*)) },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileToStorageDownloader);
UClass* Z_Construct_UClass_UFileToStorageDownloader_NoRegister()
{
	return UFileToStorageDownloader::StaticClass();
}
struct Z_Construct_UClass_UFileToStorageDownloader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Files Downloader|Storage" },
		{ "Comment", "/**\n * Downloads a file and saves it to permanent storage\n */" },
		{ "IncludePath", "FileToStorageDownloader.h" },
		{ "ModuleRelativePath", "Public/FileToStorageDownloader.h" },
		{ "ToolTip", "Downloads a file and saves it to permanent storage" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileToStorageDownloader_DownloadFileToStorage, "DownloadFileToStorage" }, // 2650335231
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileToStorageDownloader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFileToStorageDownloader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFilesDownloader,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileToStorageDownloader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileToStorageDownloader_Statics::ClassParams = {
	&UFileToStorageDownloader::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileToStorageDownloader_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileToStorageDownloader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFileToStorageDownloader()
{
	if (!Z_Registration_Info_UClass_UFileToStorageDownloader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileToStorageDownloader.OuterSingleton, Z_Construct_UClass_UFileToStorageDownloader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFileToStorageDownloader.OuterSingleton;
}
template<> RUNTIMEFILESDOWNLOADER_API UClass* StaticClass<UFileToStorageDownloader>()
{
	return UFileToStorageDownloader::StaticClass();
}
UFileToStorageDownloader::UFileToStorageDownloader() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFileToStorageDownloader);
UFileToStorageDownloader::~UFileToStorageDownloader() {}
// End Class UFileToStorageDownloader

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDownloadToStorageResult_StaticEnum, TEXT("EDownloadToStorageResult"), &Z_Registration_Info_UEnum_EDownloadToStorageResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3819729896U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFileToStorageDownloader, UFileToStorageDownloader::StaticClass, TEXT("UFileToStorageDownloader"), &Z_Registration_Info_UClass_UFileToStorageDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileToStorageDownloader), 2298628573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_2144484833(TEXT("/Script/RuntimeFilesDownloader"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToStorageDownloader_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
