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

// BlueprintGeneratedClass StructuralBuildingsAroundPrimaryAssignments.StructuralBuildingsAroundPrimaryAssignments_C
// 0x0000 (0x00D0 - 0x00D0)
class UStructuralBuildingsAroundPrimaryAssignments_C : public UFortAIGoalProvider_EnvQuery
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x51176991);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
