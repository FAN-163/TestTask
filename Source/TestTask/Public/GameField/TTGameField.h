// Test task

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TTGameField.generated.h"

class UTTGameFieldSpawnerComponent;

UCLASS()
class TESTTASK_API ATTGameField : public AActor
{
    GENERATED_BODY()

public:
    ATTGameField();

    UFUNCTION()
    void SpawnUnit(AActor* StartPoint, AActor* Endpoint, int Type) const;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Start & End Points")
    TArray<AActor*> StartPoints;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Start & End Points")
    TArray<AActor*> EndtPoints;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UTTGameFieldSpawnerComponent* GameFieldSpawnerComponent;

    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
