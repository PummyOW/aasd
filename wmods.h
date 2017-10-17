#ifndef __WMODS_H
#define __WMODS_H

#include "SDK.hpp"
#include "util.h"
#include "global.h"

#undef max

class WeaponMods
{
    public:
		float KnockbackZ;
		float KnockbackMag;
    void Run(SDK::APlayerController* playerController)
    {
        if (!m_Initialized)
        {
            auto btAddrGetWeaponStatsRow = (DWORD_PTR)Util::FindPattern((PBYTE)Global::BaseAddress, Global::info.SizeOfImage, (PBYTE)"\x48\x83\xEC\x58\x48\x8B\x01\x48\x85\xC0\x0F\x85\x00\x00\x00\x00\x48\x83\xC1\x08\x48\x89\x44\x24\x00", "xxxxxxxxxxxx????xxxxxxxx?", 0);
            m_GetWeaponStatsRow = (_GetWeaponStatsRow)(btAddrGetWeaponStatsRow);
            m_Initialized = true;
        }

        if (playerController == nullptr || playerController->AcknowledgedPawn == nullptr)
        {
            return;
        }

        if (!playerController->AcknowledgedPawn->IsA(SDK::AFortPawn::StaticClass()))
        {
            return;
        }

        auto m_LocalPawn = static_cast<SDK::AFortPawn*>(playerController->AcknowledgedPawn);

        if (m_LocalPawn->CurrentWeapon == nullptr || !m_LocalPawn->CurrentWeapon->IsA(SDK::AFortWeaponRanged::StaticClass()))
        {
            return;
        }

        auto weaponStats = m_GetWeaponStatsRow(&m_LocalPawn->CurrentWeapon->WeaponData->WeaponStatHandle, &SDK::FString(L"UFortKismetLibrary::GetWeaponStatsRow"), 0, 0);
        if (weaponStats != nullptr)
        {
			// Currently work in progress
			// Attempt to remove sniper bullet drop
        }
    }

    private:
    bool m_Initialized = false;
    typedef SDK::FFortRangedWeaponStats* (__thiscall* _GetWeaponStatsRow)(SDK::FDataTableRowHandle *pDataRow, SDK::FString *tableName, UINT32 unk1, UINT32 unk2);
    _GetWeaponStatsRow m_GetWeaponStatsRow;
};

#endif
