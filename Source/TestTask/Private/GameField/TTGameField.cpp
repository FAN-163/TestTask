// Test task

#include "GameField/TTGameField.h"
#include "AI/TTAICharacter.h"
#include "AIController.h"

ATTGameField::ATTGameField() {}

void ATTGameField::BeginPlay()
{
    Super::BeginPlay();
}

void ATTGameField::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATTGameField::SpawnUnit(int32 inpNumberNest)
{
    if (!GetWorld()) return;

    FActorSpawnParameters SpawnParams;

    const auto TTAICharacter =
        GetWorld()->SpawnActor<ATTAICharacter>(AICharacterClass, StartPoints[inpNumberNest]->GetTransform(), SpawnParams);

    TTAICharacter->SetStartPoint(StartPoints[inpNumberNest]->GetTargetLocation());
    TTAICharacter->SetEndPoint(EndPoints[inpNumberNest]->GetTargetLocation());
    TTAICharacter->SetNubberType(inpNumberNest);
}
