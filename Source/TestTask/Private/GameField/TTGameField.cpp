// Test task

#include "GameField/TTGameField.h"

ATTGameField::ATTGameField()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ATTGameField::BeginPlay()
{
    Super::BeginPlay();
}

void ATTGameField::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
