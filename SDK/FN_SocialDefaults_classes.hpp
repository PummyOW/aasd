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

// Class SocialDefaults.ChatColorSchemeDataAsset
// 0x0120 (0x0148 - 0x0028)
class UChatColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatColorScheme                            ChatColorData;                                            // 0x0028(0x0120) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x538061c4);
		return ptr;
	}

};


// Class SocialDefaults.SocialActionButtonStyleDataAsset
// 0x02A8 (0x02D0 - 0x0028)
class USocialActionButtonStyleDataAsset : public UDataAsset
{
public:
	struct FButtonStyle                                Style;                                                    // 0x0028(0x02A8) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3ab7fa00);
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeColorSchemeDataAsset
// 0x0050 (0x0078 - 0x0028)
class USocialChatChromeColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatChromeColorScheme                      Style;                                                    // 0x0028(0x0050) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1a8e612b);
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeMarginsDataAsset
// 0x0068 (0x0090 - 0x0028)
class USocialChatChromeMarginsDataAsset : public UDataAsset
{
public:
	struct FChatChromeMargins                          Style;                                                    // 0x0028(0x0064) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbc1435d8);
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeStyleDataAsset
// 0x0850 (0x0878 - 0x0028)
class USocialChatChromeStyleDataAsset : public UDataAsset
{
public:
	struct FChatChromeStyle                            Style;                                                    // 0x0028(0x0850) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdef505fe);
		return ptr;
	}

};


// Class SocialDefaults.SocialChatMarkupStyleDataAsset
// 0x0670 (0x0698 - 0x0028)
class USocialChatMarkupStyleDataAsset : public UDataAsset
{
public:
	struct FChatMarkupStyle                            Style;                                                    // 0x0028(0x0670) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdf41a804);
		return ptr;
	}

};


// Class SocialDefaults.SocialChatStyleDataAsset
// 0x1490 (0x14B8 - 0x0028)
class USocialChatStyleDataAsset : public UDataAsset
{
public:
	struct FChatStyle                                  Style;                                                    // 0x0028(0x1490) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x70f7a56c);
		return ptr;
	}

};


// Class SocialDefaults.SocialCheckBoxStyleDataAsset
// 0x05E0 (0x0608 - 0x0028)
class USocialCheckBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                              Style;                                                    // 0x0028(0x05E0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe5175e91);
		return ptr;
	}

};


// Class SocialDefaults.SocialFontStyleDataAsset
// 0x02A0 (0x02C8 - 0x0028)
class USocialFontStyleDataAsset : public UDataAsset
{
public:
	struct FSocialFontStyle                            Style;                                                    // 0x0028(0x02A0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdcca3039);
		return ptr;
	}

};


// Class SocialDefaults.SocialListMarginsDataAsset
// 0x0200 (0x0228 - 0x0028)
class USocialListMarginsDataAsset : public UDataAsset
{
public:
	struct FSocialListMargins                          Style;                                                    // 0x0028(0x0200) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x314a9d34);
		return ptr;
	}

};


// Class SocialDefaults.SocialListStyleDataAsset
// 0x2870 (0x2898 - 0x0028)
class USocialListStyleDataAsset : public UDataAsset
{
public:
	struct FSocialListStyle                            Style;                                                    // 0x0028(0x2870) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa244b2ea);
		return ptr;
	}

};


// Class SocialDefaults.SocialProfanityDataAsset
// 0x0010 (0x0038 - 0x0028)
class USocialProfanityDataAsset : public UDataAsset
{
public:
	TArray<struct FProfanityData>                      ProfanityData;                                            // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbe7b6c0f);
		return ptr;
	}

};


// Class SocialDefaults.SocialRadioBoxStyleDataAsset
// 0x05E0 (0x0608 - 0x0028)
class USocialRadioBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                              Style;                                                    // 0x0028(0x05E0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa9005296);
		return ptr;
	}

};


// Class SocialDefaults.SocialScrollBarStyleDataAsset
// 0x0518 (0x0540 - 0x0028)
class USocialScrollBarStyleDataAsset : public UDataAsset
{
public:
	struct FScrollBarStyle                             Style;                                                    // 0x0028(0x0518) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9aeb84d2);
		return ptr;
	}

};


// Class SocialDefaults.SocialSoundSchemaDataAsset
// 0x0048 (0x0070 - 0x0028)
class USocialSoundSchemaDataAsset : public UDataAsset
{
public:
	struct FSocialSoundSchema                          SoundSchema;                                              // 0x0028(0x0048) (CPF_Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3cc121db);
		return ptr;
	}

};


// Class SocialDefaults.SocialStyleDataAsset
// 0x6E70 (0x6E98 - 0x0028)
class USocialStyleDataAsset : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*                   SmallFontStyle;                                           // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialFontStyleDataAsset*                   NormalFontStyle;                                          // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialFontStyleDataAsset*                   LargeFontStyle;                                           // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialFontStyleDataAsset*                   ChatFontStyle;                                            // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialListStyleDataAsset*                   SocialListStyle;                                          // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialListMarginsDataAsset*                 SocialListMargins;                                        // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialChatStyleDataAsset*                   ChatStyle;                                                // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialChatChromeStyleDataAsset*             ChatChromeStyle;                                          // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialChatChromeMarginsDataAsset*           ChatChromeMargins;                                        // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialChatChromeColorSchemeDataAsset*       ChatChromeColorScheme;                                    // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChatColorSchemeDataAsset*                   ChatColorScheme;                                          // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialSoundSchemaDataAsset*                 SoundSchema;                                              // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialActionButtonStyleDataAsset*           ActionButtonStyle;                                        // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialCheckBoxStyleDataAsset*               CheckBoxStyle;                                            // 0x0090(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialRadioBoxStyleDataAsset*               RadioBoxStyle;                                            // 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialScrollBarStyleDataAsset*              ScrollBoxStyle;                                           // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialChatMarkupStyleDataAsset*             MarkupStyle;                                              // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USocialProfanityDataAsset*                   ProfanityDataAsset;                                       // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6DE0];                                    // 0x00B8(0x6DE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2d98306e);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
