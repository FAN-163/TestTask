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

    FVector GetStartPoint() const { return StartPoint; }
    FVector GetEndPoint() const { return EndPoint; }
    int32 GetNumberType() const { return NumberType; }

    void SetStartPoint(FVector StartPoint);
    void SetEndPoint(FVector EndPoint);
    void SetNubberType(int32 NumberType);

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private: 
    FVector StartPoint;
    FVector EndPoint;
    int32 NumberType;
};
