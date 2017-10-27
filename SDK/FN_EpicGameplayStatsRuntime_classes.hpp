#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayStatsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x82f6080e);
		return ptr;
	}


	bool STATIC_NotEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B);
	bool STATIC_EqualEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B);
};


// Class EpicGameplayStatsRuntime.GameplayTagTableManager
// 0x0068 (0x0090 - 0x0028)
class UGameplayTagTableManager : public UDataAsset
{
public:
	TArray<struct FManagedGameplayTagDataTableItem>    Tables;                                                   // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2b2561b4);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
