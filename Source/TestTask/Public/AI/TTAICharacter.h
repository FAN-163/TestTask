// Test task

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TTAICharacter.generated.h"

class UBehaviorTree;

UCLASS()
class TESTTASK_API ATTAICharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ATTAICharacter();

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI")
    UBehaviorTree* BehaviorTreeAsset;

    FVector GetStartPoint() const;
    FVector GetEndPoint() const;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private: 
    FVector StartPoint;
    FVector EndPoint;
};
