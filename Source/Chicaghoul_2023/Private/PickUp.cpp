// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"

// Sets default values for this component's properties
UPickUp::UPickUp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPickUp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPickUp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

/*TSubclassOf<class AActor> UPickUp::GetClassFromIngredient(EIngredient ingredient) {
	switch (ingredient) {
		case EIngredient::None:
			return NULL;
		case EIngredient::Cauldron:
			return NULL;
		case EIngredient::NewtEye:
			return NULL;
	}
	return NULL;
}*/
