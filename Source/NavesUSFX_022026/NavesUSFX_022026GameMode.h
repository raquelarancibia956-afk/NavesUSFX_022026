// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NavesUSFX_022026GameMode.generated.h"

// DECLARAR LA CLASE Enemigo (para que el compilador la conozca)
class AEnemigo;

UCLASS(MinimalAPI)
class ANavesUSFX_022026GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANavesUSFX_022026GameMode();

	// ===== FUNCIÓN QUE SE EJECUTA AL INICIAR EL JUEGO =====
	virtual void BeginPlay() override;

	// ===== CONTENEDOR DE ENEMIGOS =====
	UPROPERTY()
	TArray<AEnemigo*> Enemigos;

	// ===== FUNCION PARA CREAR ENEMIGOS =====
	void CrearEnemigos();
};