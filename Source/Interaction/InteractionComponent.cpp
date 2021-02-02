// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponent.h"
#include "Interactable.h"

// Sets default values for this component's properties
UInteractionComponent::UInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UInteractionComponent::Interact()
{
	/*
	FHitResult OutHit;
	FVector Start = GetFirstPersonCameraComponent()->GetComponentLocation();
	FVector End = Start + GetFirstPersonCameraComponent()->GetForwardVector() * 300;

	if (GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility))
	{
		AInteractable* Interactable = Cast<AInteractable>(OutHit.Actor);
		if (Interactable)
		{
			Interactable->Interact();
		}
	}
	*/
}

// Called when the game starts
void UInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

