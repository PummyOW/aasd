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

// WidgetBlueprintGeneratedClass ItemManagementMulchModeBox.ItemManagementMulchModeBox_C
// 0x0010 (0x0440 - 0x0430)
class UItemManagementMulchModeBox_C : public UFortItemMulchModeActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UItemWindow_C*                               Recycle_Info_Window;                                      // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xaa82122b);
		return ptr;
	}


	void HandleLeaveInventory(bool* PassThrough);
	void HandleCursorModeChanging(bool IsEnabled);
	void HandleMulchListChanged();
	void HandleInfo(bool* Pass_Through);
	void HandleBack(bool* PassThrough);
	void HandleDifferentItemToDetailSetBP();
	void Construct();
	void OnActivated();
	void Destruct();
	void ExecuteUbergraph_ItemManagementMulchModeBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
