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

// BlueprintGeneratedClass UsedPlacementActorsContext.UsedPlacementActorsContext_C
// 0x0048 (0x0078 - 0x0030)
class UUsedPlacementActorsContext_C : public UEnvQueryContext_BlueprintBase
{
public:
	struct FGameplayTagQuery                           UsedTagsAddedQuery;                                       // 0x0030(0x0048) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdc8f8387);
		return ptr;
	}


	void ProvideActorsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
