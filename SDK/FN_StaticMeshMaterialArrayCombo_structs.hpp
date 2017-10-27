#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct StaticMeshMaterialArrayCombo.StaticMeshMaterialArrayCombo
// 0x0018
struct FStaticMeshMaterialArrayCombo
{
	class AStaticMeshActor*                            StaticMesh_6_F7234FBB43D39B4944E60390FB9D9D4D;            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialArray_5_FAE74D234840C6E8BEEBE4BC4590BE6C;         // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
