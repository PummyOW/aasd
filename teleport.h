#ifndef __TELEPORT_H
#define __TELEPORT_H

#include <windows.h>

#include "SDK.hpp"
#include "config.h"
#include "util.h"

class Teleport
{
public:
	void GetWeapons(Config& cfg)
	{
		if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->AcknowledgedPawn == nullptr)
		{
			return;
		}

		SDK::FVector loc = Global::m_LocalPlayer->PlayerController->AcknowledgedPawn->K2_GetActorLocation();

		auto actors = Global::m_PersistentLevel->AActors;
		SDK::AActor * bestitem = nullptr;
		int bestTier = 0;

		for (int i = 0; i < actors.Num(); i++)
		{
			if (!actors.IsValidIndex(i))
			{
				continue;
			}

			auto actor = Global::m_PersistentLevel->AActors[i];
			if (actor == nullptr || actor->RootComponent == nullptr)
			{
				continue;
			}

			if (actor->IsA(SDK::AB_Pickups_C::StaticClass()))
			{
				auto pickup = static_cast<SDK::AB_Pickups_C*>(actor);

				if (!pickup->ItemDefinition)
					continue;

				auto itemDef = pickup->ItemDefinition;

				if (itemDef->ItemType == SDK::EFortItemType::Ammo)
					continue;

				if (pickup->RootComponent == nullptr)
					continue;

				int tier;

				switch (itemDef->Tier.GetValue())
				{
				case SDK::EFortItemTier::I: // white
					tier = 1;
				case SDK::EFortItemTier::II: // green
					tier = 2;
				case SDK::EFortItemTier::III: // blue
					tier = 3;
				case SDK::EFortItemTier::IV: // purple
					tier = 4;
				case SDK::EFortItemTier::V: // orange
					tier = 5;
				case SDK::EFortItemTier::VI: // gold
					tier = 6;
				}

				if (tier > bestTier)
				{
					bestTier = tier;
					bestitem = actor;
				}
			}
		}
			

		if (!bestitem)
			return;

		loc = bestitem->K2_GetActorLocation();

		Global::m_LocalPlayer->PlayerController->AcknowledgedPawn->K2_SetActorRelativeLocation(loc, false, true, nullptr);
		INPUT in;
		in.type = INPUT_KEYBOARD;
		in.ki.wScan = 0;
		in.ki.time = 0;
		in.ki.dwExtraInfo = 0;
		in.ki.wVk = 0x45; // 'E' E
		in.ki.dwFlags = 0;
		SendInput(1, &in, sizeof(INPUT));
		Sleep(30);
		in.ki.dwFlags = KEYEVENTF_KEYUP;
		SendInput(1, &in, sizeof(INPUT));
		}

	void GetResources(Config& cfg)
	{
		if (Global::m_LocalPlayer->PlayerController == nullptr || Global::m_LocalPlayer->PlayerController->AcknowledgedPawn == nullptr)
		{
			return;
		}

		SDK::FVector loc = Global::m_LocalPlayer->PlayerController->AcknowledgedPawn->K2_GetActorLocation();

		auto actors = Global::m_PersistentLevel->AActors;
		SDK::AActor * bestitem = nullptr;
		float bestDist = 99999.f;

		for (int i = 0; i < actors.Num(); i++)
		{
			if (!actors.IsValidIndex(i))
			{
				continue;
			}

			auto actor = Global::m_PersistentLevel->AActors[i];
			if (actor == nullptr || actor->RootComponent == nullptr)
			{
				continue;
			}

			if (actor->IsA(SDK::AB_Pickups_C::StaticClass()))
			{
				auto pickup = static_cast<SDK::AB_Pickups_C*>(actor);

				if (!pickup->ItemDefinition)
					continue;

				auto itemDef = pickup->ItemDefinition;

				if (itemDef->ItemType != SDK::EFortItemType::Ammo && itemDef->ItemType != SDK::EFortItemType::WorldResource && itemDef->ItemType != SDK::EFortItemType::Trap)
					continue;

				if (pickup->RootComponent == nullptr)
					continue;

				auto distance = Util::GetDistance(loc, pickup->RootComponent->Location);

				if (distance < bestDist)
				{
					bestDist = distance;
					bestitem = actor;
				}
			}
		}


		if (!bestitem)
			return;

		loc = bestitem->K2_GetActorLocation();

		Global::m_LocalPlayer->PlayerController->AcknowledgedPawn->K2_SetActorRelativeLocation(loc, false, true, nullptr);
		INPUT in;
		in.type = INPUT_KEYBOARD;
		in.ki.wScan = 0;
		in.ki.time = 0;
		in.ki.dwExtraInfo = 0;
		in.ki.wVk = 0x45; // 'E' E
		in.ki.dwFlags = 0;
		SendInput(1, &in, sizeof(INPUT));
		Sleep(30);
		in.ki.dwFlags = KEYEVENTF_KEYUP;
		SendInput(1, &in, sizeof(INPUT));
	}
};
#endif
