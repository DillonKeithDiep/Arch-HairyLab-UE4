// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Head.generated.h"

UCLASS()
class ARCHSHAIRYLAB_API AHead : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHead();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Mesh Components")
	class UStaticMeshComponent* StaticMesh;
	
	
};
