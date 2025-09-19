// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileToMemoryDownloader.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFileToMemoryDownloader() {}

// ********** Begin Cross Module References ********************************************************
RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UBaseFilesDownloader();
RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToMemoryDownloader();
RUNTIMEFILESDOWNLOADER_API UClass* Z_Construct_UClass_UFileToMemoryDownloader_NoRegister();
RUNTIMEFILESDOWNLOADER_API UEnum* Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult();
RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature();
RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature();
RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature();
RUNTIMEFILESDOWNLOADER_API UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RuntimeFilesDownloader();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDownloadToMemoryResult ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDownloadToMemoryResult;
static UEnum* EDownloadToMemoryResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDownloadToMemoryResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDownloadToMemoryResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult, (UObject*)Z_Construct_UPackage__Script_RuntimeFilesDownloader(), TEXT("EDownloadToMemoryResult"));
	}
	return Z_Registration_Info_UEnum_EDownloadToMemoryResult.OuterSingleton;
}
template<> RUNTIMEFILESDOWNLOADER_API UEnum* StaticEnum<EDownloadToMemoryResult>()
{
	return EDownloadToMemoryResult_StaticEnum();
}
struct Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "EDownloadToMemoryResult::Cancelled" },
		{ "Category", "File To Memory Downloader" },
		{ "Comment", "/**\n* Possible results from a download request\n*/" },
		{ "DownloadFailed.Name", "EDownloadToMemoryResult::DownloadFailed" },
		{ "InvalidURL.Name", "EDownloadToMemoryResult::InvalidURL" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "SucceededByPayload.Comment", "/** Downloaded successfully, but there was no Content-Length header in the response and thus downloaded by payload */" },
		{ "SucceededByPayload.Name", "EDownloadToMemoryResult::SucceededByPayload" },
		{ "SucceededByPayload.ToolTip", "Downloaded successfully, but there was no Content-Length header in the response and thus downloaded by payload" },
		{ "Success.Name", "EDownloadToMemoryResult::Success" },
		{ "ToolTip", "Possible results from a download request" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDownloadToMemoryResult::Success", (int64)EDownloadToMemoryResult::Success },
		{ "EDownloadToMemoryResult::SucceededByPayload", (int64)EDownloadToMemoryResult::SucceededByPayload },
		{ "EDownloadToMemoryResult::Cancelled", (int64)EDownloadToMemoryResult::Cancelled },
		{ "EDownloadToMemoryResult::DownloadFailed", (int64)EDownloadToMemoryResult::DownloadFailed },
		{ "EDownloadToMemoryResult::InvalidURL", (int64)EDownloadToMemoryResult::InvalidURL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
	nullptr,
	"EDownloadToMemoryResult",
	"EDownloadToMemoryResult",
	Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult()
{
	if (!Z_Registration_Info_UEnum_EDownloadToMemoryResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDownloadToMemoryResult.InnerSingleton, Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDownloadToMemoryResult.InnerSingleton;
}
// ********** End Enum EDownloadToMemoryResult *****************************************************

// ********** Begin Delegate FOnFileToMemoryDownloadComplete ***************************************
struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms
	{
		TArray<uint8> DownloadedContent;
		EDownloadToMemoryResult Result;
		UFileToMemoryDownloader* Downloader;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate to track download completion */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Dynamic delegate to track download completion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadedContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DownloadedContent_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DownloadedContent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Downloader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_Inner = { "DownloadedContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent = { "DownloadedContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms, DownloadedContent), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadedContent_MetaData), NewProp_DownloadedContent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms, Result), Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult, METADATA_PARAMS(0, nullptr) }; // 3183644415
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Downloader = { "Downloader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms, Downloader), Z_Construct_UClass_UFileToMemoryDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::NewProp_Downloader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnFileToMemoryDownloadComplete__DelegateSignature", Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileToMemoryDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToMemoryDownloadComplete, TArray<uint8> const& DownloadedContent, EDownloadToMemoryResult Result, UFileToMemoryDownloader* Downloader)
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms
	{
		TArray<uint8> DownloadedContent;
		EDownloadToMemoryResult Result;
		UFileToMemoryDownloader* Downloader;
	};
	_Script_RuntimeFilesDownloader_eventOnFileToMemoryDownloadComplete_Parms Parms;
	Parms.DownloadedContent=DownloadedContent;
	Parms.Result=Result;
	Parms.Downloader=Downloader;
	OnFileToMemoryDownloadComplete.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFileToMemoryDownloadComplete *****************************************

// ********** Begin Delegate FOnFileToMemoryChunkDownloadComplete **********************************
struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms
	{
		TArray<uint8> DownloadedContent;
		UFileToMemoryDownloader* Downloader;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate to track chunk download completion */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Dynamic delegate to track chunk download completion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadedContent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DownloadedContent_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DownloadedContent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Downloader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_Inner = { "DownloadedContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent = { "DownloadedContent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms, DownloadedContent), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadedContent_MetaData), NewProp_DownloadedContent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_Downloader = { "Downloader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms, Downloader), Z_Construct_UClass_UFileToMemoryDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_DownloadedContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::NewProp_Downloader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnFileToMemoryChunkDownloadComplete__DelegateSignature", Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileToMemoryChunkDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToMemoryChunkDownloadComplete, TArray<uint8> const& DownloadedContent, UFileToMemoryDownloader* Downloader)
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms
	{
		TArray<uint8> DownloadedContent;
		UFileToMemoryDownloader* Downloader;
	};
	_Script_RuntimeFilesDownloader_eventOnFileToMemoryChunkDownloadComplete_Parms Parms;
	Parms.DownloadedContent=DownloadedContent;
	Parms.Downloader=Downloader;
	OnFileToMemoryChunkDownloadComplete.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFileToMemoryChunkDownloadComplete ************************************

// ********** Begin Delegate FOnFileToMemoryAllChunksDownloadComplete ******************************
struct Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms
	{
		EDownloadToMemoryResult Result;
		UFileToMemoryDownloader* Downloader;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic delegate to track download completion */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Dynamic delegate to track download completion" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Downloader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms, Result), Z_Construct_UEnum_RuntimeFilesDownloader_EDownloadToMemoryResult, METADATA_PARAMS(0, nullptr) }; // 3183644415
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::NewProp_Downloader = { "Downloader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(_Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms, Downloader), Z_Construct_UClass_UFileToMemoryDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::NewProp_Downloader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader, nullptr, "OnFileToMemoryAllChunksDownloadComplete__DelegateSignature", Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::_Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileToMemoryAllChunksDownloadComplete_DelegateWrapper(const FScriptDelegate& OnFileToMemoryAllChunksDownloadComplete, EDownloadToMemoryResult Result, UFileToMemoryDownloader* Downloader)
{
	struct _Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms
	{
		EDownloadToMemoryResult Result;
		UFileToMemoryDownloader* Downloader;
	};
	_Script_RuntimeFilesDownloader_eventOnFileToMemoryAllChunksDownloadComplete_Parms Parms;
	Parms.Result=Result;
	Parms.Downloader=Downloader;
	OnFileToMemoryAllChunksDownloadComplete.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFileToMemoryAllChunksDownloadComplete ********************************

// ********** Begin Class UFileToMemoryDownloader Function DownloadFileToMemory ********************
struct Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics
{
	struct FileToMemoryDownloader_eventDownloadFileToMemory_Parms
	{
		FString URL;
		float Timeout;
		FString ContentType;
		bool bForceByPayload;
		FScriptDelegate OnProgress;
		FScriptDelegate OnComplete;
		UFileToMemoryDownloader* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Memory" },
		{ "Comment", "/**\n\x09 * Download the file and save it as a byte array in temporary memory (RAM)\n\x09 *\n\x09 * @param URL The URL of the file to be downloaded\n\x09 * @param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n\x09 * @param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n\x09 * @param bForceByPayload If true, download the file regardless of the Content-Length header's presence (useful for servers without support for this header)\n\x09 * @param OnProgress Delegate for download progress updates\n\x09 * @param OnComplete Delegate for broadcasting the completion of the download\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Download the file and save it as a byte array in temporary memory (RAM)\n\n@param URL The URL of the file to be downloaded\n@param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n@param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n@param bForceByPayload If true, download the file regardless of the Content-Length header's presence (useful for servers without support for this header)\n@param OnProgress Delegate for download progress updates\n@param OnComplete Delegate for broadcasting the completion of the download" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, ContentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentType_MetaData), NewProp_ContentType_MetaData) };
void Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_bForceByPayload_SetBit(void* Obj)
{
	((FileToMemoryDownloader_eventDownloadFileToMemory_Parms*)Obj)->bForceByPayload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_bForceByPayload = { "bForceByPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(FileToMemoryDownloader_eventDownloadFileToMemory_Parms), &Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_bForceByPayload_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, OnProgress), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgress_MetaData), NewProp_OnProgress_MetaData) }; // 2944499637
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, OnComplete), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryDownloadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 1294633299
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemory_Parms, ReturnValue), Z_Construct_UClass_UFileToMemoryDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_bForceByPayload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFileToMemoryDownloader, nullptr, "DownloadFileToMemory", Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::FileToMemoryDownloader_eventDownloadFileToMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::FileToMemoryDownloader_eventDownloadFileToMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileToMemoryDownloader::execDownloadFileToMemory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
	P_GET_UBOOL(Z_Param_bForceByPayload);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnProgress);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFileToMemoryDownloader**)Z_Param__Result=UFileToMemoryDownloader::DownloadFileToMemory(Z_Param_URL,Z_Param_Timeout,Z_Param_ContentType,Z_Param_bForceByPayload,FOnDownloadProgress(Z_Param_Out_OnProgress),FOnFileToMemoryDownloadComplete(Z_Param_Out_OnComplete));
	P_NATIVE_END;
}
// ********** End Class UFileToMemoryDownloader Function DownloadFileToMemory **********************

// ********** Begin Class UFileToMemoryDownloader Function DownloadFileToMemoryPerChunk ************
struct Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics
{
	struct FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms
	{
		FString URL;
		float Timeout;
		FString ContentType;
		int32 MaxChunkSize;
		FScriptDelegate OnProgress;
		FScriptDelegate OnChunkDownloadComplete;
		FScriptDelegate OnAllChunksDownloadComplete;
		UFileToMemoryDownloader* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Runtime Files Downloader|Memory" },
		{ "Comment", "/**\n\x09 * Download the file and save it as a byte array in temporary memory (RAM). Continuously broadcasts the download result per chunk\n\x09 *\n\x09 * @param URL The URL of the file to be downloaded\n\x09 * @param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n\x09 * @param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n\x09 * @param MaxChunkSize The maximum size of each chunk to download in bytes\n\x09 * @param OnProgress Delegate for download progress updates\n\x09 * @param OnChunkDownloadComplete Delegate for broadcasting the completion of the download. Will be called for each chunk\n\x09 * @param OnAllChunksDownloadComplete Delegate for broadcasting the completion of the download of all chunks\n\x09 */" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Download the file and save it as a byte array in temporary memory (RAM). Continuously broadcasts the download result per chunk\n\n@param URL The URL of the file to be downloaded\n@param Timeout The maximum time to wait for the download to complete, in seconds. Works only for engine versions >= 4.26\n@param ContentType A string to set in the Content-Type header field. Use a MIME type to specify the file type\n@param MaxChunkSize The maximum size of each chunk to download in bytes\n@param OnProgress Delegate for download progress updates\n@param OnChunkDownloadComplete Delegate for broadcasting the completion of the download. Will be called for each chunk\n@param OnAllChunksDownloadComplete Delegate for broadcasting the completion of the download of all chunks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChunkDownloadComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAllChunksDownloadComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChunkSize;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnProgress;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnChunkDownloadComplete;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAllChunksDownloadComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, ContentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentType_MetaData), NewProp_ContentType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_MaxChunkSize = { "MaxChunkSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, MaxChunkSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, OnProgress), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnDownloadProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgress_MetaData), NewProp_OnProgress_MetaData) }; // 2944499637
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnChunkDownloadComplete = { "OnChunkDownloadComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, OnChunkDownloadComplete), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryChunkDownloadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChunkDownloadComplete_MetaData), NewProp_OnChunkDownloadComplete_MetaData) }; // 496989421
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnAllChunksDownloadComplete = { "OnAllChunksDownloadComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, OnAllChunksDownloadComplete), Z_Construct_UDelegateFunction_RuntimeFilesDownloader_OnFileToMemoryAllChunksDownloadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAllChunksDownloadComplete_MetaData), NewProp_OnAllChunksDownloadComplete_MetaData) }; // 2145096535
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms, ReturnValue), Z_Construct_UClass_UFileToMemoryDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ContentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_MaxChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnChunkDownloadComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_OnAllChunksDownloadComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFileToMemoryDownloader, nullptr, "DownloadFileToMemoryPerChunk", Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::FileToMemoryDownloader_eventDownloadFileToMemoryPerChunk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileToMemoryDownloader::execDownloadFileToMemoryPerChunk)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxChunkSize);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnProgress);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnChunkDownloadComplete);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnAllChunksDownloadComplete);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFileToMemoryDownloader**)Z_Param__Result=UFileToMemoryDownloader::DownloadFileToMemoryPerChunk(Z_Param_URL,Z_Param_Timeout,Z_Param_ContentType,Z_Param_MaxChunkSize,FOnDownloadProgress(Z_Param_Out_OnProgress),FOnFileToMemoryChunkDownloadComplete(Z_Param_Out_OnChunkDownloadComplete),FOnFileToMemoryAllChunksDownloadComplete(Z_Param_Out_OnAllChunksDownloadComplete));
	P_NATIVE_END;
}
// ********** End Class UFileToMemoryDownloader Function DownloadFileToMemoryPerChunk **************

// ********** Begin Class UFileToMemoryDownloader **************************************************
void UFileToMemoryDownloader::StaticRegisterNativesUFileToMemoryDownloader()
{
	UClass* Class = UFileToMemoryDownloader::StaticClass();
	static constexpr FNameNativePtrPair Funcs[] = {
		{ "DownloadFileToMemory", &UFileToMemoryDownloader::execDownloadFileToMemory, ERASE_FUNCTION_PTR(&UFileToMemoryDownloader::DownloadFileToMemory,(const FString&, float, const FString&, bool, const FOnDownloadProgress&, const FOnFileToMemoryDownloadComplete&),ERASE_ARGUMENT_PACK(UFileToMemoryDownloader*)) },
		{ "DownloadFileToMemoryPerChunk", &UFileToMemoryDownloader::execDownloadFileToMemoryPerChunk, ERASE_FUNCTION_PTR(&UFileToMemoryDownloader::DownloadFileToMemoryPerChunk,(const FString&, float, const FString&, int32, const FOnDownloadProgress&, const FOnFileToMemoryChunkDownloadComplete&, const FOnFileToMemoryAllChunksDownloadComplete&),ERASE_ARGUMENT_PACK(UFileToMemoryDownloader*)) },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFileToMemoryDownloader;
UClass* UFileToMemoryDownloader::GetPrivateStaticClass()
{
	using TClass = UFileToMemoryDownloader;
	if (!Z_Registration_Info_UClass_UFileToMemoryDownloader.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FileToMemoryDownloader"),
			Z_Registration_Info_UClass_UFileToMemoryDownloader.InnerSingleton,
			StaticRegisterNativesUFileToMemoryDownloader,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFileToMemoryDownloader.InnerSingleton;
}
UClass* Z_Construct_UClass_UFileToMemoryDownloader_NoRegister()
{
	return UFileToMemoryDownloader::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFileToMemoryDownloader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Files Downloader|Memory" },
		{ "Comment", "/**\n * Downloads a file into temporary memory (RAM) and outputs a byte array\n */" },
		{ "IncludePath", "FileToMemoryDownloader.h" },
		{ "ModuleRelativePath", "Public/FileToMemoryDownloader.h" },
		{ "ToolTip", "Downloads a file into temporary memory (RAM) and outputs a byte array" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemory, "DownloadFileToMemory" }, // 1621508660
		{ &Z_Construct_UFunction_UFileToMemoryDownloader_DownloadFileToMemoryPerChunk, "DownloadFileToMemoryPerChunk" }, // 1225505941
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileToMemoryDownloader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFileToMemoryDownloader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFilesDownloader,
	(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFilesDownloader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileToMemoryDownloader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileToMemoryDownloader_Statics::ClassParams = {
	&UFileToMemoryDownloader::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileToMemoryDownloader_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileToMemoryDownloader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFileToMemoryDownloader()
{
	if (!Z_Registration_Info_UClass_UFileToMemoryDownloader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileToMemoryDownloader.OuterSingleton, Z_Construct_UClass_UFileToMemoryDownloader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFileToMemoryDownloader.OuterSingleton;
}
UFileToMemoryDownloader::UFileToMemoryDownloader() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFileToMemoryDownloader);
UFileToMemoryDownloader::~UFileToMemoryDownloader() {}
// ********** End Class UFileToMemoryDownloader ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h__Script_RuntimeFilesDownloader_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDownloadToMemoryResult_StaticEnum, TEXT("EDownloadToMemoryResult"), &Z_Registration_Info_UEnum_EDownloadToMemoryResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3183644415U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFileToMemoryDownloader, UFileToMemoryDownloader::StaticClass, TEXT("UFileToMemoryDownloader"), &Z_Registration_Info_UClass_UFileToMemoryDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileToMemoryDownloader), 65342455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h__Script_RuntimeFilesDownloader_2569372268(TEXT("/Script/RuntimeFilesDownloader"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h__Script_RuntimeFilesDownloader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h__Script_RuntimeFilesDownloader_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h__Script_RuntimeFilesDownloader_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_RuntimeFilesDownloader_Source_RuntimeFilesDownloader_Public_FileToMemoryDownloader_h__Script_RuntimeFilesDownloader_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
