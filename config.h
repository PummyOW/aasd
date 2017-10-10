#ifndef __CONFIG_H
#define __CONFIG_H

#include "renderer.h"

class Config
{
    public:
    // Chams
    unsigned char m_ChamsHotkey = VK_F8;
    bool m_EnableChams = true;

    // Aimbot
    unsigned char m_AimbotHotkey = VK_RBUTTON;
	unsigned char m_IgnoreHotkey = VK_XBUTTON2;
	unsigned char m_AimbotToggle = VK_F7;
	bool m_EnableAimbot = true;
    float m_AimbotFieldOfViewPixels = 140.0f;
    float m_MaxAimbotLockDistance = 6000.0f;
    float m_MinAimbotHeadshotDistance = 450.0f;
	float m_AimbotSmoothing = 570.0f;
	float m_AimVelocityDamping = 0.85f;

    // ESP
    unsigned char m_ESPHotkey = VK_F9;
    bool m_EnableESP = true;
    float m_MaxESPRange = 8000.0f; // may cause crashes if set to a large value
    unsigned int m_MaxESPLabelsCount = 256u;
    Color m_EnemyTextColor = Color{ 0.9f, 0.9f, 0.15f, 0.95f };
	Color m_InfoTextColor = Color{ 0.7f, 0.7f, 0.9f, 0.95f };
    const wchar_t* m_DefaultFont = L"Verdana";
    float m_TextSize = 11.0f;

	//  Teleport
	unsigned char m_TeleportHotkey = VK_F6;
	unsigned char m_AmmoHotkey = 0x55; // U Key
};

#endif
