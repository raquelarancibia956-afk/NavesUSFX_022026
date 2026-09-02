// Copyright Epic Games, Inc. All Rights Reserved.

#include "NavesUSFX_022026GameMode.h"
#include "NavesUSFX_022026Pawn.h"
#include "Enemigo.h"  // ? IMPORTANTE: Incluir la clase Enemigo
#include "Kismet/GameplayStatics.h"  // Para obtener referencia al jugador
#include "Engine/World.h"  // Para spawnear actores

ANavesUSFX_022026GameMode::ANavesUSFX_022026GameMode()
{
	// Set default pawn class to our character class
	DefaultPawnClass = ANavesUSFX_022026Pawn::StaticClass();
}

// ===== SE EJECUTA AL INICIAR EL JUEGO =====
void ANavesUSFX_022026GameMode::BeginPlay()
{
	Super::BeginPlay();

	// ===== CREAR LOS ENEMIGOS =====
	CrearEnemigos();
}

// ===== FUNCION PARA CREAR ENEMIGOS =====
void ANavesUSFX_022026GameMode::CrearEnemigos()
{
    UWorld* Mundo = GetWorld();
    if (!Mundo) return;

    // Crear 8 enemigos en linea horizontal
    int32 CantidadEnemigos = 8;
    float Espaciado = 150.0f;

    for (int i = 0; i < CantidadEnemigos; i++)
    {
        // Calcular posicion en la linea
        float X = (i - (CantidadEnemigos / 2.0f)) * Espaciado;
        float Y = 0.0f;
        FVector Posicion = FVector(X, Y, 214.0f);

        // Crear enemigo
        AEnemigo* NuevoEnemigo = Mundo->SpawnActor<AEnemigo>(
            AEnemigo::StaticClass(),
            Posicion,
            FRotator::ZeroRotator
        );

        if (NuevoEnemigo)
        {
            // Todos se mueven hacia arriba, pero rebotan
            NuevoEnemigo->DireccionMovimiento = FVector(0.0f, 1.0f, 0.0f);
            NuevoEnemigo->LimiteMovimiento = FVector(2000.0f, 500.0f, 0.0f);
            NuevoEnemigo->VelocidadMovimiento = 100.0f + (i * 20);
            Enemigos.Add(NuevoEnemigo);
        }
    }
}