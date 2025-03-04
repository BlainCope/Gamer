#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcDamageBase

#include "Basic.hpp"

#include "CalcDamageBase_classes.hpp"
#include "CalcDamageBase_parameters.hpp"


namespace SDK
{

// Function CalcDamageBase.CalcDamageBase_C.SetAdditionalDamageInfo
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcDamageBase_C::SetAdditionalDamageInfo(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "SetAdditionalDamageInfo");

	Params::CalcDamageBase_C_SetAdditionalDamageInfo Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcDamageBase.CalcDamageBase_C.Execute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1AbilityOpExecCalcOutput       Output                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCalcDamageBase_C::Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "Execute");

	Params::CalcDamageBase_C_Execute Parms{};

	Parms.Param = std::move(Param);
	Parms.Output = std::move(Output);

	UObject::ProcessEvent(Func, &Parms);

	Output = std::move(Parms.Output);
}


// Function CalcDamageBase.CalcDamageBase_C.DoCalculation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcDamageBase_C::DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "DoCalculation");

	Params::CalcDamageBase_C_DoCalculation Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcDamageBase.CalcDamageBase_C.DetermineGaugeStatMultiplier_Bunny
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// EM1StatType                             WatchStat                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1StatType                             MaxStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MinValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MaxValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AddPower                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AddAttack                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 AddPowerValue                                          (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 AddAttackValue                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::DetermineGaugeStatMultiplier_Bunny(struct FM1AbilityOpCalcParam& Param, EM1StatType WatchStat, EM1StatType MaxStat, class FName MinValue, class FName MaxValue, class FName AddPower, class FName AddAttack, struct FM1ScaledInteger* AddPowerValue, struct FM1ScaledInteger* AddAttackValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "DetermineGaugeStatMultiplier_Bunny");

	Params::CalcDamageBase_C_DetermineGaugeStatMultiplier_Bunny Parms{};

	Parms.Param = std::move(Param);
	Parms.WatchStat = WatchStat;
	Parms.MaxStat = MaxStat;
	Parms.MinValue = MinValue;
	Parms.MaxValue = MaxValue;
	Parms.AddPower = AddPower;
	Parms.AddAttack = AddAttack;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);

	if (AddPowerValue != nullptr)
		*AddPowerValue = std::move(Parms.AddPowerValue);

	if (AddAttackValue != nullptr)
		*AddAttackValue = std::move(Parms.AddAttackValue);
}


// Function CalcDamageBase.CalcDamageBase_C.DetermineGaugeStatMultiplier
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// EM1StatType                             WatchStat                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1StatType                             MaxStat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MinValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MaxValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AddPower                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AddAttack                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 AddPowerValue                                          (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 AddAttackValue                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::DetermineGaugeStatMultiplier(struct FM1AbilityOpCalcParam& Param, EM1StatType WatchStat, EM1StatType MaxStat, class FName MinValue, class FName MaxValue, class FName AddPower, class FName AddAttack, struct FM1ScaledInteger* AddPowerValue, struct FM1ScaledInteger* AddAttackValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "DetermineGaugeStatMultiplier");

	Params::CalcDamageBase_C_DetermineGaugeStatMultiplier Parms{};

	Parms.Param = std::move(Param);
	Parms.WatchStat = WatchStat;
	Parms.MaxStat = MaxStat;
	Parms.MinValue = MinValue;
	Parms.MaxValue = MaxValue;
	Parms.AddPower = AddPower;
	Parms.AddAttack = AddAttack;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);

	if (AddPowerValue != nullptr)
		*AddPowerValue = std::move(Parms.AddPowerValue);

	if (AddAttackValue != nullptr)
		*AddAttackValue = std::move(Parms.AddAttackValue);
}


// Function CalcDamageBase.CalcDamageBase_C.DetermineElemetalDEF
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// EM1ElementalDamageChannel               ElementalChannel                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 ElementalDEF                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::DetermineElemetalDEF(struct FM1AbilityOpCalcParam& Param, EM1ElementalDamageChannel ElementalChannel, struct FM1ScaledInteger* ElementalDEF) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "DetermineElemetalDEF");

	Params::CalcDamageBase_C_DetermineElemetalDEF Parms{};

	Parms.Param = std::move(Param);
	Parms.ElementalChannel = ElementalChannel;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);

	if (ElementalDEF != nullptr)
		*ElementalDEF = std::move(Parms.ElementalDEF);
}


// Function CalcDamageBase.CalcDamageBase_C.DetermineCritical
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DanageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcDamageBase_C::DetermineCritical(struct FM1AbilityOpCalcParam& Param, const struct FM1CalcDamageInfo& DanageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "DetermineCritical");

	Params::CalcDamageBase_C_DetermineCritical Parms{};

	Parms.Param = std::move(Param);
	Parms.DanageInfo = std::move(DanageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
}


// Function CalcDamageBase.CalcDamageBase_C.DetermineATKMultiplierByDistance
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1ScaledInteger                 RetATKMultiplierByDistance                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::DetermineATKMultiplierByDistance(const struct FM1AbilityOpCalcParam& Param, struct FM1ScaledInteger* RetATKMultiplierByDistance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "DetermineATKMultiplierByDistance");

	Params::CalcDamageBase_C_DetermineATKMultiplierByDistance Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	if (RetATKMultiplierByDistance != nullptr)
		*RetATKMultiplierByDistance = std::move(Parms.RetATKMultiplierByDistance);
}


// Function CalcDamageBase.CalcDamageBase_C.Determine Skill Critical
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcDamageBase_C::Determine_Skill_Critical(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "Determine Skill Critical");

	Params::CalcDamageBase_C_Determine_Skill_Critical Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcDamageBase.CalcDamageBase_C.Determine Monster SkillDEF
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1ScaledInteger                 SkillDEF                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::Determine_Monster_SkillDEF(struct FM1AbilityOpCalcParam& Param, struct FM1ScaledInteger* SkillDEF) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "Determine Monster SkillDEF");

	Params::CalcDamageBase_C_Determine_Monster_SkillDEF Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);

	if (SkillDEF != nullptr)
		*SkillDEF = std::move(Parms.SkillDEF);
}


// Function CalcDamageBase.CalcDamageBase_C.ApplySkillCritical
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcDamageBase_C::ApplySkillCritical(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "ApplySkillCritical");

	Params::CalcDamageBase_C_ApplySkillCritical Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcDamageBase.CalcDamageBase_C.ApplyInvokeChanceElementalSE
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcDamageBase_C::ApplyInvokeChanceElementalSE(struct FM1AbilityOpCalcParam& Param, const struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "ApplyInvokeChanceElementalSE");

	Params::CalcDamageBase_C_ApplyInvokeChanceElementalSE Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
}


// Function CalcDamageBase.CalcDamageBase_C.ApplyDEFWithInflection
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FM1ScaledInteger                 AttackerLevelValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 DEFInflection_VarX1                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 DEFInflection_VarX2                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 DEFInflection_VarX3                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::ApplyDEFWithInflection(struct FM1AbilityOpCalcParam& Param, const struct FM1CalcDamageInfo& DamageInfo, const struct FM1ScaledInteger& AttackerLevelValue, const struct FM1ScaledInteger& DEFInflection_VarX1, const struct FM1ScaledInteger& DEFInflection_VarX2, const struct FM1ScaledInteger& DEFInflection_VarX3) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "ApplyDEFWithInflection");

	Params::CalcDamageBase_C_ApplyDEFWithInflection Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.AttackerLevelValue = std::move(AttackerLevelValue);
	Parms.DEFInflection_VarX1 = std::move(DEFInflection_VarX1);
	Parms.DEFInflection_VarX2 = std::move(DEFInflection_VarX2);
	Parms.DEFInflection_VarX3 = std::move(DEFInflection_VarX3);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
}


// Function CalcDamageBase.CalcDamageBase_C.ApplyDEFOnlyWeapon
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcDamageBase_C::ApplyDEFOnlyWeapon(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "ApplyDEFOnlyWeapon");

	Params::CalcDamageBase_C_ApplyDEFOnlyWeapon Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcDamageBase.CalcDamageBase_C.ApplyDamageCoefficient
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcDamageBase_C::ApplyDamageCoefficient(struct FM1AbilityOpCalcParam& Param, const struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "ApplyDamageCoefficient");

	Params::CalcDamageBase_C_ApplyDamageCoefficient Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
}


// Function CalcDamageBase.CalcDamageBase_C.ApplyCritical
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcDamageBase_C::ApplyCritical(struct FM1AbilityOpCalcParam& Param, const struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "ApplyCritical");

	Params::CalcDamageBase_C_ApplyCritical Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
}


// Function CalcDamageBase.CalcDamageBase_C.ApplyATKMultiplierByExplosionRadius
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// double                                  ExplosionRadius                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::ApplyATKMultiplierByExplosionRadius(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, double ExplosionRadius) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "ApplyATKMultiplierByExplosionRadius");

	Params::CalcDamageBase_C_ApplyATKMultiplierByExplosionRadius Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.ExplosionRadius = ExplosionRadius;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}


// Function CalcDamageBase.CalcDamageBase_C.ApplyATKMultiplierByDistance
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FM1ScaledInteger                 ATKMultiplierByDistance                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::ApplyATKMultiplierByDistance(struct FM1AbilityOpCalcParam& Param, const struct FM1CalcDamageInfo& DamageInfo, const struct FM1ScaledInteger& ATKMultiplierByDistance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "ApplyATKMultiplierByDistance");

	Params::CalcDamageBase_C_ApplyATKMultiplierByDistance Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.ATKMultiplierByDistance = std::move(ATKMultiplierByDistance);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
}


// Function CalcDamageBase.CalcDamageBase_C.ApplyATKMultiplierByCharge
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DanageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                                   ATKMultiplierByCharge                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::ApplyATKMultiplierByCharge(struct FM1AbilityOpCalcParam& Param, const struct FM1CalcDamageInfo& DanageInfo, float ATKMultiplierByCharge) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "ApplyATKMultiplierByCharge");

	Params::CalcDamageBase_C_ApplyATKMultiplierByCharge Parms{};

	Parms.Param = std::move(Param);
	Parms.DanageInfo = std::move(DanageInfo);
	Parms.ATKMultiplierByCharge = ATKMultiplierByCharge;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
}


// Function CalcDamageBase.CalcDamageBase_C.ApplyATK
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class FName                             ATKType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::ApplyATK(struct FM1AbilityOpCalcParam& Param, const struct FM1CalcDamageInfo& DamageInfo, class FName ATKType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "ApplyATK");

	Params::CalcDamageBase_C_ApplyATK Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.ATKType = ATKType;

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
}


// Function CalcDamageBase.CalcDamageBase_C.Apply Skill ATK
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// EM1ElementalDamageChannel               ElementalChannel                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1SkillArcheType                       ArcheType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 AddPower                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FM1ScaledInteger                 AddAttack                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UCalcDamageBase_C::Apply_Skill_ATK(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, EM1ElementalDamageChannel ElementalChannel, EM1SkillArcheType ArcheType, const struct FM1ScaledInteger& AddPower, const struct FM1ScaledInteger& AddAttack) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcDamageBase_C", "Apply Skill ATK");

	Params::CalcDamageBase_C_Apply_Skill_ATK Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.ElementalChannel = ElementalChannel;
	Parms.ArcheType = ArcheType;
	Parms.AddPower = std::move(AddPower);
	Parms.AddAttack = std::move(AddAttack);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}

}

