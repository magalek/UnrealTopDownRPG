// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseStats.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, DefaultToInstanced, EditInlineNew)
class TOPDOWNRPGNEW_API UBaseStats : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Stamina;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxStamina;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Health;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxHealth;
};
