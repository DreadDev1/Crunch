// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/CCharacter.h"
#include "CPlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class CRUNCH_API ACPlayerCharacter : public ACCharacter
{
	GENERATED_BODY()

public:
	ACPlayerCharacter();

private:
	UPROPERTY(EditDefaultsOnly, Category = "Player|Camera")
	USpringArmComponent* CameraBoom;
	UPROPERTY(EditDefaultsOnly, Category = "Player|Camera")
	UCameraComponent* FollowCamera;
	
	
};
