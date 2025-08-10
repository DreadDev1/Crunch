// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/CCharacter.h"


// Sets default values
ACCharacter::ACCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
