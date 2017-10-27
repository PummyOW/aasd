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

// BlueprintGeneratedClass v2_PlayerCameraModeTargetingScope.v2_PlayerCameraModeTargetingScope_C
// 0x0000 (0x0110 - 0x0110)
class Uv2_PlayerCameraModeTargetingScope_C : public Uv2_PlayerCameraModeRanged_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4abf4ded);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
