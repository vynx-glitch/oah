#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPCInterface

#include "Basic.hpp"

#include "NPCInterface_classes.hpp"
#include "NPCInterface_parameters.hpp"


namespace SDK
{

// Function NPCInterface.NPCInterface_C.CantOpenDoor
// (Public, BlueprintCallable, BlueprintEvent)

void INPCInterface_C::CantOpenDoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCInterface_C", "CantOpenDoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPCInterface.NPCInterface_C.RagdollPickedUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Picked_up_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void INPCInterface_C::RagdollPickedUp(bool Picked_up_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCInterface_C", "RagdollPickedUp");

	Params::NPCInterface_C_RagdollPickedUp Parms{};

	Parms.Picked_up_ = Picked_up_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPCInterface.NPCInterface_C.PoliceAlerted
// (Public, BlueprintCallable, BlueprintEvent)

void INPCInterface_C::PoliceAlerted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCInterface_C", "PoliceAlerted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPCInterface.NPCInterface_C.SpawnAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void INPCInterface_C::SpawnAmmo(const struct FVector& Location, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCInterface_C", "SpawnAmmo");

	Params::NPCInterface_C_SpawnAmmo Parms{};

	Parms.Location = std::move(Location);
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPCInterface.NPCInterface_C.DestroyOldestPoliceBody
// (Public, BlueprintCallable, BlueprintEvent)

void INPCInterface_C::DestroyOldestPoliceBody()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCInterface_C", "DestroyOldestPoliceBody");

	UObject::ProcessEvent(Func, nullptr);
}

}

