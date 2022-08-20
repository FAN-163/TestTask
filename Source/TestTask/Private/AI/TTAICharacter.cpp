// Test task

#include "AI/TTAICharacter.h"
#include "GameFramework/Actor.h"

ATTAICharacter::ATTAICharacter()
{
    AutoPossessAI = EAutoPossessAI::Disabled;

    bUseControllerRotationYaw = false;

    PrimaryActorTick.bCanEverTick = true;
}

void ATTAICharacter::BeginPlay()
{
    Super::BeginPlay();
}

void ATTAICharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATTAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ATTAICharacter::SetStartPoint(FVector StartedPoint) 
{
    this->StartPoint = StartPoint;
}

void ATTAICharacter::SetEndPoint(FVector EndedPoint) 
{
    this->EndPoint = EndPoint;
}
