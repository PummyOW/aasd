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

// BlueprintGeneratedClass CollectionHeader-Progress-Solid.CollectionHeader-Progress-Solid_C
// 0x0000 (0x00B8 - 0x00B8)
class UCollectionHeader_Progress_Solid_C : public UCollectionHeader_Level_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc09f0c05);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
