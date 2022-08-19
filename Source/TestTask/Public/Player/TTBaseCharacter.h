// Test task

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TTBaseCharacter.generated.h"

class UCameraComponent;


UCLASS()
class TESTTASK_API ATTBaseCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ATTBaseCharacter();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UCameraComponent* CameraComponent;

    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
