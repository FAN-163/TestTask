// Test task

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TTGameFieldSpawnerComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TESTTASK_API UTTGameFieldSpawnerComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UTTGameFieldSpawnerComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
