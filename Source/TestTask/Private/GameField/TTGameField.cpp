// Test task

#include "GameField/TTGameField.h"
#include "AI/TTAICharacter.h"
#include "AIController.h"

DEFINE_LOG_CATEGORY_STATIC(LogCharacter, All, All)


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

    FVector StartPoint = StartPoints[inpNumberNest]->GetActorLocation();
    FVector EndPoint = EndPoints[inpNumberNest]->GetActorLocation();
    int32 NumberNest = inpNumberNest;
    

    FActorSpawnParameters SpawnParams;
    const auto TTAICharacter = Cast<ATTAICharacter>(GetWorld()->SpawnActor(AICharacterClass));
 
    if (!TTAICharacter) return;

    TTAICharacter->SetActorLocation(StartPoint);
    TTAICharacter->SetNumberType(NumberNest);
    TTAICharacter->SetStartPoint(StartPoint);
    TTAICharacter->SetEndPoint(EndPoint);
}
