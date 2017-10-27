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

// AnimBlueprintGeneratedClass Female_Commando_01_Skeleton_AnimBP.Female_Commando_01_Skeleton_AnimBP_C
// 0x0058 (0x0468 - 0x0410)
class UFemale_Commando_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3D36AA2D48E736954157ABB046C8C983;      // 0x0418(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x308c9a72);
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Female_Commando_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
