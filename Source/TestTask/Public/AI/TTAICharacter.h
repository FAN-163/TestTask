// Test task

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TTAICharacter.generated.h"

UCLASS()
class TESTTASK_API ATTAICharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ATTAICharacter();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
