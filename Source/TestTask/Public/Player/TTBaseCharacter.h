// Test task

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TTBaseCharacter.generated.h"

UCLASS()
class TESTTASK_API ATTBaseCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ATTBaseCharacter();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
