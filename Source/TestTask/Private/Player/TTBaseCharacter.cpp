// Test task

#include "Player/TTBaseCharacter.h"
#include "Camera/CameraComponent.h"
ATTBaseCharacter::ATTBaseCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    CameraComponent = CreateAbstractDefaultSubobject<UCameraComponent>("CameraComponent");
    CameraComponent->SetupAttachment(GetRootComponent());
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
