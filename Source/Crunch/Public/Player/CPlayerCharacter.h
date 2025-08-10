// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/CCharacter.h"
#include "CPlayerCharacter.generated.h"

struct FInputActionValue;
class UInputMappingContext;
class UInputAction;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class CRUNCH_API ACPlayerCharacter : public ACCharacter
{
	GENERATED_BODY()

public:
	ACPlayerCharacter();
	virtual void PawnClientRestart() override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Player|Camera")
	USpringArmComponent* CameraBoom;
	UPROPERTY(EditDefaultsOnly, Category = "Player|Camera")
	UCameraComponent* FollowCamera;

	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|MappingContext")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	UInputAction* JumpAction;
	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	UInputAction* LookAction;
	void LookInput(const FInputActionValue& InputActionValue);
	UPROPERTY(EditDefaultsOnly, Category = "Player|Input|Actions")
	UInputAction* MoveAction;
	void MoveInput(const FInputActionValue& InputActionValue);
	FVector GetLookRightDir();
	FVector GetLookForwardDir();
	FVector GetMoveFwdDir();
	
};
