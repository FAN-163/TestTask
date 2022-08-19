// Test task

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TTGameField.generated.h"

UCLASS()
class TESTTASK_API ATTGameField : public AActor
{
    GENERATED_BODY()

public:
    ATTGameField();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
