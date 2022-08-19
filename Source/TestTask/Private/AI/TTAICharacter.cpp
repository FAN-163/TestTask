// Test task

#include "AI/TTAICharacter.h"
#include "GameFramework/Actor.h"

ATTAICharacter::ATTAICharacter()
{
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
