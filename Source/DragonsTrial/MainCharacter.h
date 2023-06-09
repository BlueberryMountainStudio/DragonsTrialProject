// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS()
class DRAGONSTRIAL_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();
	UPROPERTY(EditAnywhere, Category = "GameDesign")
		float JumpEndDownwardVelocity = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void StopJumping() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
