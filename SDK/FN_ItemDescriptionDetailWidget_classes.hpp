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

// WidgetBlueprintGeneratedClass ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C
// 0x0012 (0x028A - 0x0278)
class UItemDescriptionDetailWidget_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCommonTextBlock*                            ItemDescriptionTextBlock;                                 // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	bool                                               ShouldShowOnlyIfItemIsSimple;                             // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InCollectionBook;                                         // 0x0289(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8f6867c5);
		return ptr;
	}


	void IsItemSimple(bool* Result);
	void HandlePostDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemDescriptionDetailWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
