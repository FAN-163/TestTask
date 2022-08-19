// Test task

#include "Player/TTBaseCharacter.h"

ATTBaseCharacter::ATTBaseCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ATTBaseCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void ATTBaseCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATTBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}
