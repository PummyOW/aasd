#ifndef __ESP_H
#define __ESP_H

#include <string>
#include <sstream>

#include "config.h"
#include "global.h"
#include "util.h"
#include "renderer.h"

class ESP
{
    public:
    void Draw(Config& cfg, Renderer& renderer)
    {
        if (!cfg.m_EnableESP)
        {
            return;
        }

        if (Global::m_PersistentLevel == nullptr || Global::m_LocalPlayer == nullptr)
        {
            return;
        }

        if (Global::m_LocalPlayer == nullptr || Global::m_LocalPlayer->PlayerController == nullptr)
        {
            return;
        }

        auto playerController = Global::m_LocalPlayer->PlayerController;
        if (playerController->AcknowledgedPawn == nullptr)
        {
            return;
        }

        auto localPos = playerController->AcknowledgedPawn->RootComponent->Location;

        auto itemsDrawn = 0u;

        auto actors = Global::m_PersistentLevel->AActors;
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

			if (actor->IsA(SDK::AFortPawn::StaticClass()))
			{
				auto pawn = static_cast<SDK::AFortPawn*>(actor);
				if (pawn->GetName().find("PlayerPawn_Athena_C") == std::string::npos)
				{
					continue;
				}

				if (Util::IsTeammate(actor) || Util::IsLocalPlayer(actor))
				{
					continue;
				}

				if (pawn->PlayerState == nullptr || !pawn->PlayerState->IsA(SDK::AFortPlayerStateAthena::StaticClass()))
				{
					continue;
				}

				auto state = static_cast<SDK::AFortPlayerStateAthena*>(pawn->PlayerState);
				if (!state->PlayerName.IsValid() || pawn->RootComponent == nullptr)
				{
					continue;
				}

				SDK::FVector playerLoc;
				SDK::FVector headLoc;
				SDK::FVector footLoc;
				Util::Engine::GetBoneLocation(pawn->Mesh, &playerLoc, 66);
				Util::Engine::GetBoneLocation(pawn->Mesh, &headLoc, 66);
				Util::Engine::GetBoneLocation(pawn->Mesh, &footLoc, 0);
				headLoc.Z += 15;

				SDK::FVector2D screenPos;
				SDK::FVector2D iPos;
				SDK::FVector2D hPos;
				if (!Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, playerLoc, &screenPos) || !Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, footLoc, &iPos) || !Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, headLoc, &hPos))
				{
					continue;
				}

				auto name = state->PlayerName.c_str();
				auto distance = Util::GetDistance(localPos, pawn->RootComponent->Location);
				auto curWeapon = pawn->CurrentWeapon;
				auto health = static_cast<int>(state->CurrentHealth);
				auto shield = static_cast<int>(state->CurrentShield);
				float height = abs(hPos.Y - iPos.Y);
				float width = height * 0.65f;

				if (curWeapon == nullptr || curWeapon->WeaponData == nullptr)
				{
					continue;
				}

				auto itemDef = static_cast<SDK::UFortWorldItemDefinition*>(curWeapon->WeaponData);

				Color BoxColor = cfg.m_EnemyTextColor;

				switch (itemDef->Tier.GetValue())
				{
				case SDK::EFortItemTier::I: // white
					break;
				case SDK::EFortItemTier::II: // green
					BoxColor = Color{ 0.0f, 0.95f, 0.0f, 0.95f };
					break;
				case SDK::EFortItemTier::III: // blue
					BoxColor = Color{ 0.4f, 0.65f, 1.0f, 0.95f };
					break;
				case SDK::EFortItemTier::IV: // purple
					BoxColor = Color{ 0.7f, 0.25f, 0.85f, 0.95f };
					break;
				case SDK::EFortItemTier::V: // orange
					BoxColor = Color{ 0.85f, 0.65f, 0.0f, 0.95f };
					break;
				case SDK::EFortItemTier::VI: // gold
				case SDK::EFortItemTier::VII:
					BoxColor = Color{ 0.95f, 0.85f, 0.45f, 0.95f };
					break;
				case SDK::EFortItemTier::VIII:
				case SDK::EFortItemTier::IX:
				case SDK::EFortItemTier::X:
					BoxColor = Color{ 1.0f, 0.0f, 1.0f, 0.95f };
					break;
				}

				std::wstringstream ss;
				std::wstringstream info;

				if (itemDef->ItemType == SDK::EFortItemType::WeaponRanged || itemDef->ItemType == SDK::EFortItemType::WeaponMelee || itemDef->ItemType == SDK::EFortItemType::WeaponHarvest)
					ss << name << L" [" << Util::DistanceToString(distance) << L"] " << itemDef->DisplayName.Get();
				else
					ss << name << L" [" << Util::DistanceToString(distance) << L"]";

				info << health << L" HP | " << shield << L" Shield | " << curWeapon->AmmoCount << L" Ammo";

				auto size = renderer.getTextExtent(ss.str(), cfg.m_TextSize, cfg.m_DefaultFont);
				auto isize = renderer.getTextExtent(info.str(), cfg.m_TextSize, cfg.m_DefaultFont);
				renderer.drawText(Vec2(screenPos.X - size.x * 0.5f, screenPos.Y - size.y - 16.0f), ss.str(), BoxColor, 0, cfg.m_TextSize, cfg.m_DefaultFont);
				renderer.drawText(Vec2(iPos.X - isize.x * 0.5f, iPos.Y - isize.y + 16.0f), info.str(), cfg.m_InfoTextColor, 0, cfg.m_TextSize, cfg.m_DefaultFont);
				renderer.drawOutlinedRect(Vec4(hPos.X - (width / 2), hPos.Y, width, height), 1.f, BoxColor, Color{ 0.f , 0.f, 0.f, 0.2f });
				itemsDrawn++;
			}
			else if (actor->IsA(SDK::AB_Pickups_C::StaticClass()))
			{
				if (itemsDrawn >= cfg.m_MaxESPLabelsCount)
				{
					continue;
				}

				SDK::FVector2D screenPos;
				if (!Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, actor->RootComponent->Location, &screenPos))
				{
					continue;
				}

				auto pickup = static_cast<SDK::AB_Pickups_C*>(actor);

				if (!pickup->ItemDefinition)
				{
					continue;
				}

				auto itemDef = pickup->ItemDefinition;

				Color color{ 0.8f, 0.8f, 0.8f, 0.95f };

				if (itemDef->ItemType == SDK::EFortItemType::Ammo)
				{
					color = { 0.8f, 0.8f, 0.8f, 0.35f };
				}

				switch (itemDef->Tier.GetValue())
				{
				case SDK::EFortItemTier::I: // white
					break;
				case SDK::EFortItemTier::II: // green
					color = Color{ 0.0f, 0.95f, 0.0f, 0.95f };
					break;
				case SDK::EFortItemTier::III: // blue
					color = Color{ 0.4f, 0.65f, 1.0f, 0.95f };
					break;
				case SDK::EFortItemTier::IV: // purple
					color = Color{ 0.7f, 0.25f, 0.85f, 0.95f };
					break;
				case SDK::EFortItemTier::V: // orange
					color = Color{ 0.85f, 0.65f, 0.0f, 0.95f };
					break;
				case SDK::EFortItemTier::VI: // gold
				case SDK::EFortItemTier::VII:
					color = Color{ 0.95f, 0.85f, 0.45f, 0.95f };
					break;
				case SDK::EFortItemTier::VIII:
				case SDK::EFortItemTier::IX:
				case SDK::EFortItemTier::X:
					color = Color{ 1.0f, 0.0f, 1.0f, 0.95f };
					break;
				}

				if (!itemDef->DisplayName.Get())
				{
					continue;
				}

				std::wstring name = itemDef->DisplayName.Get();
				if (name == L"Bandage" || name == L"Med Kit")
				{
					color = Color{ 0.9f, 0.55f, 0.55f, 0.95f };
				}
				else if (name == L"Shield Potion")
				{
					color = Color{ 0.35f, 0.55f, 0.85f, 0.95f };
				}

				if (pickup->RootComponent == nullptr)
				{
					continue;
				}

				auto distance = Util::GetDistance(localPos, pickup->RootComponent->Location);
				if (distance > cfg.m_MaxESPRange)
				{
					continue;
				}

				std::wstringstream ss;
				ss << name << L" [" << Util::DistanceToString(distance) << L"]";

				auto size = renderer.getTextExtent(ss.str(), cfg.m_TextSize, cfg.m_DefaultFont);
				renderer.drawText(Vec2(screenPos.X - size.x, screenPos.Y - size.y), ss.str(), color, 0, cfg.m_TextSize, cfg.m_DefaultFont);
				itemsDrawn++;
			}
            else if (actor->GetName().find("AthenaSupplyDrop_02_C") != std::string::npos)
            {
                if (itemsDrawn >= cfg.m_MaxESPLabelsCount)
                {
                    continue;
                }

                SDK::FVector2D screenPos;
                if (!Util::Engine::WorldToScreen(Global::m_LocalPlayer->PlayerController, actor->RootComponent->Location, &screenPos))
                {
                    continue;
                }

                if (actor->RootComponent == nullptr)
                {
                    continue;
                }

                auto distance = Util::GetDistance(localPos, actor->RootComponent->Location);
                if (distance > cfg.m_MaxESPRange)
                {
                    continue;
                }

                std::wstringstream ss;
                ss << L"Supply Drop [" << Util::DistanceToString(distance) << L"]";

                auto size = renderer.getTextExtent(ss.str(), cfg.m_TextSize, cfg.m_DefaultFont);
                renderer.drawText(Vec2(screenPos.X - size.x, screenPos.Y - size.y), ss.str(), Color{ 0.4f, 0.9f, 0.4f, 0.75f }, 0, cfg.m_TextSize, cfg.m_DefaultFont);
                itemsDrawn++;
            }
        }
    }

    private:

};

#endif
