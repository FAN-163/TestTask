// Test task

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TTGameField.generated.h"

class ATTAICharacter;

UCLASS()
class TESTTASK_API ATTGameField : public AActor
{
    GENERATED_BODY()

public:
    ATTGameField();

    UFUNCTION(BlueprintCallable, Category = "GameField")
    void SpawnUnit(int32 inpNumberNest);



protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Start & End Points")
    TArray<AActor*> StartPoints;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Start & End Points")
    TArray<AActor*> EndPoints;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    TSubclassOf<ATTAICharacter> AICharacterClass;
    
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
