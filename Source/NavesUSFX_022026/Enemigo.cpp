// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

// Sets default values
AEnemigo::AEnemigo()
{
	// Set this actor to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;

	// ===== 1. CREAR EL COMPONENTE VISUAL =====
	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = MallaEnemigo;

	// ===== 2. CARGAR UNA MALLA (FIGURA) =====
	// Buscamos una malla de StarterContent (Shape_Torus)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(
		TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'")
	);
	if (MallaAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MallaAsset.Object);
	}

	// ===== 3. CONFIGURAR MOVIMIENTO INICIAL =====
	DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f); // Se mueve a la derecha
	LimiteMovimiento = FVector(800.0f, 800.0f, 0.0f); // Rebota en ±800 en X e Y
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();

	// Guardar la posicion inicial
	PosicionInicial = GetActorLocation();
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Llamar a la funcion de movimiento
	Moverse(DeltaTime);
}

// ===== FUNCION DE MOVIMIENTO =====
void AEnemigo::Moverse(float DeltaTime)
{
	// Obtener posicion actual
	FVector PosicionActual = GetActorLocation();

	// ===== SISTEMA DE REBOTE =====
	// Si se pasa del limite en X, invertir direccion en X
	if (FMath::Abs(PosicionActual.X - PosicionInicial.X) > LimiteMovimiento.X)
	{
		DireccionMovimiento.X = -DireccionMovimiento.X;
	}

	// Si se pasa del limite en Y, invertir direccion en Y
	if (FMath::Abs(PosicionActual.Y - PosicionInicial.Y) > LimiteMovimiento.Y)
	{
		DireccionMovimiento.Y = -DireccionMovimiento.Y;
	}

	// ===== CALCULAR NUEVA POSICION =====
	FVector NuevaPosicion = PosicionActual + (DireccionMovimiento * VelocidadMovimiento * DeltaTime);

	// ===== APLICAR NUEVA POSICION =====
	SetActorLocation(NuevaPosicion);
}