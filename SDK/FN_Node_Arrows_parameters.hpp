#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Node_Arrows.Node_Arrows_C.OverideColorOnBrush
struct UNode_Arrows_C_OverideColorOnBrush_Params
{
	class UImage*                                      InBrush;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Node_Arrows.Node_Arrows_C.ApplyOverideColor
struct UNode_Arrows_C_ApplyOverideColor_Params
{
};

// Function Node_Arrows.Node_Arrows_C.PreConstruct
struct UNode_Arrows_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Node_Arrows.Node_Arrows_C.Construct
struct UNode_Arrows_C_Construct_Params
{
};

// Function Node_Arrows.Node_Arrows_C.ExecuteUbergraph_Node_Arrows
struct UNode_Arrows_C_ExecuteUbergraph_Node_Arrows_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
