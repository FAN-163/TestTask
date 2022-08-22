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

    void SetStartPoint(const FVector& StartedPoint) { StartPoint = StartedPoint; }
    void SetEndPoint(FVector& EndedPoint) { EndPoint = EndedPoint; }
    void SetNumberType(int32& Type) { NumberType = Type; }

    UFUNCTION(BlueprintCallable, Category = "AICharacter")
    int32 GetNumberType() const { return NumberType; }

    UFUNCTION(BlueprintCallable, Category = "AICharacter")
    FVector GetStartPoint() const { return StartPoint; }

    UFUNCTION(BlueprintCallable, Category = "AICharacter")
    FVector GetEndPoint() const { return EndPoint; }

    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FVector StartPoint;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    FVector EndPoint;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    int32 NumberType;

    virtual void BeginPlay() override;
};
