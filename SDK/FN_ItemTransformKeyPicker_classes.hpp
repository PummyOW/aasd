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

// WidgetBlueprintGeneratedClass ItemTransformKeyPicker.ItemTransformKeyPicker_C
// 0x0000 (0x0300 - 0x0300)
class UItemTransformKeyPicker_C : public UFortTransformKeyPicker
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb83559c1);
		return ptr;
	}


	void NavigateToFirstItem();
	void NavigateToSelectedItem(class UFortItem* InItem);
	void GetSelectedKey(class UFortItem** SelectedKey);
	void SetSelectedKey(class UFortAccountItem* AccountKey);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
