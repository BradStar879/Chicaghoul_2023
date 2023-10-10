// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PickUp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CHICAGHOUL_2023_API UPickUp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPickUp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};

UENUM(BlueprintType)
enum class EIngredient : uint8 {
	Cauldron		UMETA(DisplayName = "Cauldron"),
	Pumpkin			UMETA(DisplayName = "Pumpkin"),
	Flask			UMETA(DisplayName = "Flask"),
	NewtEye			UMETA(DisplayName = "Newt Eye"),
	FrogTongue		UMETA(DisplayName = "Frog Tongue"), 
	PixieWings		UMETA(DisplayName = "Pixie Wings"),
	LizardLeg		UMETA(DisplayName = "Lizard Leg"),
};