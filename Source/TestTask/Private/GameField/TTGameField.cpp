// Test task

#include "GameField/TTGameField.h"
#include "GameField/Components/TTGameFieldSpawnerComponent.h"
#include "AI/TTAIController.h"
#include "AI/TTAICharacter.h"
#include "AIController.h"

ATTGameField::ATTGameField()
{
    GameFieldSpawnerComponent = CreateDefaultSubobject<UTTGameFieldSpawnerComponent>("GameFieldSpawnerComponent");
    PrimaryActorTick.bCanEverTick = true;
}

void ATTGameField::BeginPlay()
{
   Super::BeginPlay();
    SpawnUnit();
}

void ATTGameField::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATTGameField::SpawnUnit()
{
    if (!GetWorld()) return;

    FActorSpawnParameters SpawnParams;

    //const auto TTAIController = GetWorld()->SpawnActor<ATTAIController>(AIControllerClass, StartPoints[0]->GetTransform(), SpawnParams);
    const auto TTAICharacter = GetWorld()->SpawnActor<ATTAICharacter>(AICharacterClass, StartPoints[0]->GetTransform(), SpawnParams);
    
   // TTAICharacter->Controller->AddControllingMatineeActor(TTAIController);
    // TTAICharacter->SetActorLocation(StartPoints[0]->GetTargetLocation());
    //TTAICharacter->SetStartPoint(StartPoints[0]->GetTargetLocation());
    //TTAICharacter->SetEndPoint(EndPoints[0]->GetTargetLocation());
}
