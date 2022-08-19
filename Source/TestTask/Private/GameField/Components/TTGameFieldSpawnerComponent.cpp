// Test task

#include "GameField/Components/TTGameFieldSpawnerComponent.h"

UTTGameFieldSpawnerComponent::UTTGameFieldSpawnerComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UTTGameFieldSpawnerComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UTTGameFieldSpawnerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
