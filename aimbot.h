#ifndef __AIMBOT_H
#define __AIMBOT_H

#include <chrono>

#include <windows.h>

#include "SDK.hpp"
#include "config.h"
#include "util.h"

class Aimbot
{
    public:
    float m_LastAimDistance = 0.0f;

    void Run(Config& cfg, SDK::APlayerController* playerController)
    {
        auto now = m_Timer.now();
        auto deltaTime = std::chrono::duration_cast<std::chrono::milliseconds>(now - m_LastTime);
        m_LastTime = now;

        if (playerController == nullptr || playerController->AcknowledgedPawn == nullptr)
        {
            return;
        }

		if (GetAsyncKeyState(cfg.m_AimbotHotkey) & 0x8000 && !(GetAsyncKeyState(cfg.m_IgnoreHotkey) & 0x8000)) // Ignore Aimbot when Mouse5 pressed
		{
            if (m_TargetPlayer == nullptr)
            {
                m_TargetPlayer = Util::GetClosestVisiblePlayer(cfg, playerController);
            }
        }
        else
        {
            m_TargetPlayer = nullptr;
        }

        if (m_TargetPlayer != nullptr)
        {
            auto pawn = static_cast<SDK::AFortPawn*>(m_TargetPlayer);
            if (pawn->bIsDBNO)
            {
                m_TargetPlayer = nullptr;
                return;
            }

            SDK::FVector playerLoc;
            Util::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(m_TargetPlayer)->Mesh, &playerLoc, eBone::BONE_CHEST);

            auto dist = Util::GetDistance(playerController->AcknowledgedPawn->RootComponent->Location, playerLoc);
            m_LastAimDistance = dist;

            if (dist < cfg.m_MinAimbotHeadshotDistance)
            {
                Util::Engine::GetBoneLocation(static_cast<SDK::ACharacter*>(m_TargetPlayer)->Mesh, &playerLoc, eBone::BONE_HEAD);
            }

            LookAt(cfg, playerController, playerLoc, deltaTime.count() / 1000.0f);
        }
    }

    void LookAt(Config& cfg, SDK::APlayerController* m_Player, SDK::FVector position, float deltaTime)
    {
        using namespace Util;

        SDK::FVector localPos = m_Player->PlayerCameraManager->TransformComponent->Location;
        SDK::FVector relativePos = position - localPos;
        float tmp = atan2(relativePos.Y, relativePos.X) * 180.0f / M_PI;
        float yaw = tmp;
        float pitch = -((acos(relativePos.Z / GetDistance(localPos, position)) * 180.0f / M_PI) - 90.0f);

        m_Player->ControlRotation.Pitch = pitch;
        m_Player->ControlRotation.Yaw = yaw;
    }

    SDK::AActor* GetTargetPlayer() const
    {
        return m_TargetPlayer;
    }

    private:
    SDK::FVector2D m_AimVelocity{ 0.0f, 0.0f };
    float m_Agressiveness = 1.0f;

    SDK::AActor* m_TargetPlayer = nullptr;
    std::chrono::high_resolution_clock m_Timer;
    std::chrono::high_resolution_clock::time_point m_LastTime;
};

#endif
