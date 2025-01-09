// Copyright Epic Games, Inc. All Rights Reserved.

#include "Team3ShotInTheDarkPickUpComponent.h"

UTeam3ShotInTheDarkPickUpComponent::UTeam3ShotInTheDarkPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UTeam3ShotInTheDarkPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UTeam3ShotInTheDarkPickUpComponent::OnSphereBeginOverlap);
}

void UTeam3ShotInTheDarkPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ATeam3ShotInTheDarkCharacter* Character = Cast<ATeam3ShotInTheDarkCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
