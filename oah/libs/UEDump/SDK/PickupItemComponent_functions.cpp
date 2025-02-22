#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupItemComponent

#include "Basic.hpp"

#include "PickupItemComponent_classes.hpp"
#include "PickupItemComponent_parameters.hpp"


namespace SDK
{

// Function PickupItemComponent.PickupItemComponent_C.PickUpItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Pickuplocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         PickupRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItemComponent_C::PickUpItem__DelegateSignature(class AActor* Player, const struct FVector& Pickuplocation, const struct FRotator& PickupRotation, const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "PickUpItem__DelegateSignature");

	Params::PickupItemComponent_C_PickUpItem__DelegateSignature Parms{};

	Parms.Player = Player;
	Parms.Pickuplocation = std::move(Pickuplocation);
	Parms.PickupRotation = std::move(PickupRotation);
	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PickupItemComponent.PickupItemComponent_C.DropItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItemComponent_C::DropItem__DelegateSignature(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "DropItem__DelegateSignature");

	Params::PickupItemComponent_C_DropItem__DelegateSignature Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PickupItemComponent.PickupItemComponent_C.InteractHolding__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Overlap                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItemComponent_C::InteractHolding__DelegateSignature(class AActor* Instigator, class AActor* Overlap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "InteractHolding__DelegateSignature");

	Params::PickupItemComponent_C_InteractHolding__DelegateSignature Parms{};

	Parms.Instigator = Instigator;
	Parms.Overlap = Overlap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PickupItemComponent.PickupItemComponent_C.ExecuteUbergraph_PickupItemComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItemComponent_C::ExecuteUbergraph_PickupItemComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "ExecuteUbergraph_PickupItemComponent");

	Params::PickupItemComponent_C_ExecuteUbergraph_PickupItemComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PickupItemComponent.PickupItemComponent_C.InitializeInLevelItem
// (BlueprintCallable, BlueprintEvent)

void UPickupItemComponent_C::InitializeInLevelItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "InitializeInLevelItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickupItemComponent.PickupItemComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UPickupItemComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickupItemComponent.PickupItemComponent_C.InitializeItem
// (BlueprintCallable, BlueprintEvent)

void UPickupItemComponent_C::InitializeItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "InitializeItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickupItemComponent.PickupItemComponent_C.AddComponents
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UPickupItemComponent_C::AddComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "AddComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickupItemComponent.PickupItemComponent_C.ImpactSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Normal_impulse                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItemComponent_C::ImpactSound(const struct FVector& Normal_impulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "ImpactSound");

	Params::PickupItemComponent_C_ImpactSound Parms{};

	Parms.Normal_impulse = std::move(Normal_impulse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PickupItemComponent.PickupItemComponent_C.OnDropped
// (BlueprintCallable, BlueprintEvent)

void UPickupItemComponent_C::OnDropped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "OnDropped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickupItemComponent.PickupItemComponent_C.OnPickedUp
// (BlueprintCallable, BlueprintEvent)

void UPickupItemComponent_C::OnPickedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "OnPickedUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickupItemComponent.PickupItemComponent_C.OnHit
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SelfActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UPickupItemComponent_C::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "OnHit");

	Params::PickupItemComponent_C_OnHit Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PickupItemComponent.PickupItemComponent_C.EndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItemComponent_C::EndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "EndOverlap");

	Params::PickupItemComponent_C_EndOverlap Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PickupItemComponent.PickupItemComponent_C.InteractHoldingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItemComponent_C::InteractHoldingEvent(class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickupItemComponent_C", "InteractHoldingEvent");

	Params::PickupItemComponent_C_InteractHoldingEvent Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);
}

}

