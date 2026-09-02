// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class NAVESUSFX_022026_API AEnemigo : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// ===== COMPONENTE VISUAL =====
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Colision")
	UStaticMeshComponent* MallaEnemigo;

	// ===== PROPIEDADES DE MOVIMIENTO =====
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VelocidadMovimiento = 200.0f;

	// Direccion actual del movimiento
	FVector DireccionMovimiento;

	// Limites de movimiento (rebote)
	FVector LimiteMovimiento;

	// Posicion inicial
	FVector PosicionInicial;

	// ===== FUNCIONES =====
	void Moverse(float DeltaTime);
};