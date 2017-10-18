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

// BlueprintGeneratedClass EnemyPawn_Parent.EnemyPawn_Parent_C
// 0x0300 (0x1DF0 - 0x1AF0)
class AEnemyPawn_Parent_C : public AFortAIPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1AF0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCapsuleComponent*                           WeaponCapsuleCollision;                                   // 0x1AF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             Elemental_Layer_Audio_Loop;                               // 0x1B00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeathMaterialParamsTL_RemoveShadow_07AA619C445DCC77E615709CFA0BD94D;// 0x1B08(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DeathMaterialParamsTL__Direction_07AA619C445DCC77E615709CFA0BD94D;// 0x1B0C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1B0D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DeathMaterialParamsTL;                                    // 0x1B10(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_ColorFadeOutTrack_999FBE184F147A4FE3025AB553DBFA9C;// 0x1B18(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_FadeInTrack_999FBE184F147A4FE3025AB553DBFA9C;// 0x1B1C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Enemy_Spawn_Out_TL__Direction_999FBE184F147A4FE3025AB553DBFA9C;// 0x1B20(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1B21(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Enemy_Spawn_Out_TL;                                       // 0x1B28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnemySpawnInTL_ColorFadeOutTrack_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1B30(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnemySpawnInTL_FadeInTrack_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1B34(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EnemySpawnInTL__Direction_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1B38(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1B39(0x0007) MISSED OFFSET
	class UTimelineComponent*                          EnemySpawnInTL;                                           // 0x1B40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance_0;                              // 0x1B48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StartingMinCapsuleShadowVis;                              // 0x1B50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1B54(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Death_Effects;                                            // 0x1B58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             HQ_Death_Particle_System;                                 // 0x1B60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HQ_DeathFX_SpawnRateScale;                                // 0x1B68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HQ_DeathFX_MaxDistance;                                   // 0x1B6C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             LQ_Death_Particle_System;                                 // 0x1B70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LQ_DeathFX_CylinderHeight;                                // 0x1B78(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LQ_DeathFX_CylinderRadius;                                // 0x1B7C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LQ_DeathFX_SpawnRateScale;                                // 0x1B80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1B84(0x0004) MISSED OFFSET
	struct FName                                       LQ_PS_Socket_Attach;                                      // 0x1B88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Death_Socket;                                             // 0x1B90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               UsePOCScaleAndMaterials;                                  // 0x1B98(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               POCShouldOverrideMaterial;                                // 0x1B99(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               POCShouldOverrideMaterialValues;                          // 0x1B9A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x1B9B(0x0005) MISSED OFFSET
	class UMaterialInterface*                          POCOverrideMaterial;                                      // 0x1BA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                POCMaterialHairColor;                                     // 0x1BA8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                POCMaterialSkinColor;                                     // 0x1BB8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                POCMaterialPantColor;                                     // 0x1BC8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                POCMaterialShirtColor;                                    // 0x1BD8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x1BE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              PseudoRandomNetworkedFloat;                               // 0x1BF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               UseRandomColorVariation;                                  // 0x1BF4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1BF5(0x0003) MISSED OFFSET
	TArray<struct FLinearColor>                        MaleHuskHairColors;                                       // 0x1BF8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskSkinColors;                                       // 0x1C08(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskPantColors;                                       // 0x1C18(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskShirtColors;                                      // 0x1C28(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UCurveFloat*                                 HieghtDistributionCurve;                                  // 0x1C38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               RandomizeMeshScale;                                       // 0x1C40(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0xF];                                       // 0x1C41(0x000F) MISSED OFFSET
	struct FTransform                                  SpawnParticlesTransform;                                  // 0x1C50(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance_1;                              // 0x1C80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             SpawnParticles;                                           // 0x1C88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    CharacterAmbientParticles;                                // 0x1C90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               AllowHeadshot;                                            // 0x1C98(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x1C99(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_RangedWeapon;                                          // 0x1CA0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UParticleSystemComponent*                    HeadshotParticleSystemComp;                               // 0x1CC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Additive_Hit_React_Montage;                               // 0x1CC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  Death_Normal_Sound;                                       // 0x1CD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Elemental_Audio_Layer_Sound;                              // 0x1CD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               SpecialEventHalloweenPumpkinHead;                         // 0x1CE0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x1CE1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_NPCCharacterTypeHuskBasic;                             // 0x1CE8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              PumpkinHeadPercentage;                                    // 0x1D08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1D0C(0x0004) MISSED OFFSET
	class UClass*                                      GE_SpecialEvent_Halloween_PumpkinHead;                    // 0x1D10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FActiveGameplayEffectHandle                 PumpkinHeadActiveGE;                                      // 0x1D18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	class UStaticMeshComponent*                        Pumpkin_Head_Mesh;                                        // 0x1D20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Pumpkin_Eyeglow_Mesh;                                     // 0x1D28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    PumpkinHeadRotation;                                      // 0x1D30(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     PumpkinHeadScale;                                         // 0x1D3C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     PumpkinHeadOffset;                                        // 0x1D48(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x1D54(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Pumpkin_Eye_R;                                            // 0x1D58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Pumpking_Eye_L;                                           // 0x1D60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Headshot_FX_Socket;                                       // 0x1D68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterial*                                   Material_Alteration_0;                                    // 0x1D70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterial*                                   Material_Alteration_1;                                    // 0x1D78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Temp_Disable_Elemental_Effects;                           // 0x1D80(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ElementalEnum>                         ElementalType;                                            // 0x1D81(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x1D82(0x0006) MISSED OFFSET
	class UParticleSystem*                             Particle_Fire_Ambient;                                    // 0x1D88(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Particle_Ice_Ambient;                                     // 0x1D90(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             Particle_Electrical_Ambient;                              // 0x1D98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    SleepParticleSystemComp;                                  // 0x1DA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USoundBase*                                  Husk_Sleeping_Sound;                                      // 0x1DA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAudioComponent*                             HuskSleepSound;                                           // 0x1DB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    WakeUpParticleSystemComp;                                 // 0x1DB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AwokenMaxDistance;                                        // 0x1DC0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x1DC4(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      AwokenSkeletalMesh;                                       // 0x1DC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    AwokenSkelMeshMID;                                        // 0x1DD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AwokenFadeInTime;                                         // 0x1DD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AwokenFadeOutTime;                                        // 0x1DDC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AwokenDuration;                                           // 0x1DE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Sleeping;                                                 // 0x1DE4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               HasGlowColorsAssigned;                                    // 0x1DE5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               SpawnInTimelineCompletedSuccessfully;                     // 0x1DE6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x1DE7(0x0001) MISSED OFFSET
	struct FTimerHandle                                CharacterSpawnInSafetyCheckHandle;                        // 0x1DE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EnemyPawn_Parent.EnemyPawn_Parent_C");
		return ptr;
	}


	void CharacterSpawnInSafetyCheck();
	void SetCharacterEyeColors(const struct FLinearColor& Eye_Color_Inner, const struct FLinearColor& Eye_Color_Outer);
	void SetCharacterFresnelGlowColors(const struct FLinearColor& Inner_Color, const struct FLinearColor& Outer_Color);
	void SpawnParticleSystemAttachedToCharacterMesh(class UParticleSystem* Particle_System, const struct FName& Attach_Point_Name, const struct FVector& Location, const struct FRotator& Rotation);
	void OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override);
	void DestroyAwokenSkeletalMesh();
	void OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterial* New_Material_To_Apply);
	void OnRep_PumpkinHeadActiveGE();
	void PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage);
	void SetActiveElementalAmbientParticles(bool Active, bool Reset);
	void SetScalarParameterOnAllMIDs(const struct FName& Parameter_Name, float Scalar_Value);
	void SetVectorParameterOnAllMIDs(const struct FName& Parameter_Name, const struct FLinearColor& Linear_Color);
	void PickColorFromAnArrayOfColors(TArray<struct FLinearColor>* ArrayOfColors, struct FLinearColor* Color);
	void StopDeathFX();
	void StopMaterialTimeline();
	void EnemyDeathVisuals(bool* HQ);
	void UserConstructionScript();
	void DeathMaterialParamsTL__FinishedFunc();
	void DeathMaterialParamsTL__UpdateFunc();
	void Enemy_Spawn_Out_TL__FinishedFunc();
	void Enemy_Spawn_Out_TL__UpdateFunc();
	void EnemySpawnInTL__FinishedFunc();
	void EnemySpawnInTL__UpdateFunc();
	void EnemySpawnInTL__Spawn__EventFunc();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BeginDeathFX();
	void DeactivateEffectsPreDespawn();
	void ActivateEffectsPostSpawnIn();
	void DespawnEnemy(const struct FVector& RiftLocationWS);
	void DebugEnemySpawnIn();
	void OnFinishedEncounterSpawn();
	void OnStartedEncounterSpawn();
	void PawnUniqueIDSet();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void AdditiveHitReactDelay();
	void OnBeginSleepEffects();
	void OnEndSleepEffects();
	void ExecuteUbergraph_EnemyPawn_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
