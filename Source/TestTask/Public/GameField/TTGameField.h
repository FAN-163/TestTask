// Test task

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TTGameField.generated.h"

class UTTGameFieldSpawnerComponent;
class ATTAIController;
class ATTAICharacter;


UCLASS()
class TESTTASK_API ATTGameField : public AActor
{
    GENERATED_BODY()

public:
    ATTGameField();

    UFUNCTION(BlueprintCallable, Category = "GameField")
    void SpawnUnit();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Start & End Points")
    TArray<AActor*> StartPoints;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Start & End Points")
    TArray<AActor*> EndPoints;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UTTGameFieldSpawnerComponent* GameFieldSpawnerComponent;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
    TSubclassOf<ATTAIController> AIControllerClass;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
    TSubclassOf<ATTAICharacter> AICharacterClass;
    
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
