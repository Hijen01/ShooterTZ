// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoWidget.h"
#include "Components/TextBlock.h"

void UAmmoWidget::SetAmmo(int32 Ammo)
{
	FString CountAmmo = FString::FromInt(Ammo);
	AmmoText->SetText(FText::FromString(CountAmmo));
}

void UAmmoWidget::SetAllAmmo(int32 AllAmmo)
{
	FString CountAllAmmo = FString::FromInt(AllAmmo);
	AllAmmoText->SetText(FText::FromString(CountAllAmmo));
}
