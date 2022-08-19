// Test task

#include "GameField/TTGameField.h"
#include "GameField/Components/TTGameFieldSpawnerComponent.h"

ATTGameField::ATTGameField()
{
    GameFieldSpawnerComponent = CreateDefaultSubobject<UTTGameFieldSpawnerComponent>("GameFieldSpawnerComponent");
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

void ATTGameField::SpawnUnit(AActor *StartPoint, AActor *Endpoint, int Type) const {

}