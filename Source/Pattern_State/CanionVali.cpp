#include "CanionVali.h"
#include "StateDispararHielo.h"
#include "StateDispararBala.h"
#include "StateDispararLazer.h"
#include "StateDispararMisil.h"
#include "ProyectilHielo.h"
#include "ProyectilBala.h"
#include "ProyectilLazer.h"
#include "Proyectil.h"

// Sets default values
ACanionVali::ACanionVali()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    meshCanion = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CanonMesh"));
    meshCanion->SetupAttachment(RootComponent);
    RootComponent = meshCanion;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CanonMesh(TEXT("StaticMesh'/Game/Meshes/Shield.Shield'"));
    meshCanion->SetStaticMesh(CanonMesh.Object);
    SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
    SetActorRelativeScale3D(FVector(4.0f, 4.0f, 4.0f));
    MaxProjectile = 1;
    NumberFired = 0;
    bCanFire = true;
}

// Called when the game starts or when spawned
void ACanionVali::BeginPlay()
{
    Super::BeginPlay();

    contador = 0;

    StateDispararHielo = GetWorld()->SpawnActor<AStateDispararHielo>(AStateDispararHielo::StaticClass());
    StateDispararBala = GetWorld()->SpawnActor<AStateDispararBala>(AStateDispararBala::StaticClass());
    StateDispararLazer = GetWorld()->SpawnActor<AStateDispararLazer>(AStateDispararLazer::StaticClass());
    StateDispararMisil = GetWorld()->SpawnActor<AStateDispararMisil>(AStateDispararMisil::StaticClass());

    CambioDeEstado();
}

// Called every frame
void ACanionVali::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ACanionVali::EstablecerState(IIState* _State)
{
    StateActual = _State;
}

void ACanionVali::activarDispararHielo()
{
    if (bCanFire && NumberFired < MaxProjectile) {
        bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

        // creador de proyectiles
        UWorld* const World = GetWorld();
        if (World != NULL)
        {
            FVector Location = GetActorLocation() + FVector(0, 0, 300);
            FRotator Rotation = GetActorRotation();

            World->SpawnActor<AProyectilHielo>(Location, Rotation);
            NumberFired++;
           
            // Establecer el temporizador para el próximo disparo
            FTimerHandle TimerHandle;
            GetWorldTimerManager().SetTimer(TimerHandle, this, &ACanionVali::DesactivarDisparoHielo, rand() % 6 + 1, false);
        }
    }
}

void ACanionVali::activarDispararBala()
{
    if (bCanFire && NumberFired < MaxProjectile) {
        bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

        // creador de proyectiles
        UWorld* const World = GetWorld();
        if (World != NULL)
        {
            FVector Location = GetActorLocation() + FVector(0, 0, 190);
            FRotator Rotation = GetActorRotation();

            World->SpawnActor<AProyectilBala>(Location, Rotation);
            NumberFired++;

            // Establecer el temporizador para el próximo disparo
            FTimerHandle TimerHandle;
            GetWorldTimerManager().SetTimer(TimerHandle, this, &ACanionVali::DesactivarDisparoBala, rand() % 6 + 1, false);
        }
    }
}

void ACanionVali::activarDispararLazer()
{
    if (bCanFire && NumberFired < MaxProjectile) {
        bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

        // creador de proyectiles
        UWorld* const World = GetWorld();
        if (World != NULL)
        {
            FVector Location = GetActorLocation() + FVector(0, 0, 240);
            FRotator Rotation = GetActorRotation();
            World->SpawnActor<AProyectilLazer>(Location, Rotation);
            NumberFired++;

            // Establecer el temporizador para el próximo disparo
            FTimerHandle TimerHandle;
            GetWorldTimerManager().SetTimer(TimerHandle, this, &ACanionVali::DesactivarDisparoLazer, rand() % 6 + 1, false);
        }
    }
}

void ACanionVali::activarDispararMisil()
{
    if (bCanFire && NumberFired < MaxProjectile) {
        bCanFire = false;  // Prevenir nuevos disparos hasta que el temporizador expire

        // creador de proyectiles
        UWorld* const World = GetWorld();
        if (World != NULL)
        {
            FVector Location = GetActorLocation() + FVector(0, 0, 300);
            FRotator Rotation = GetActorRotation();
            World->SpawnActor<AProyectil>(Location, Rotation);
            NumberFired++;

            // Establecer el temporizador para el próximo disparo
            FTimerHandle TimerHandle;
            GetWorldTimerManager().SetTimer(TimerHandle, this, &ACanionVali::DesactivarDisparoMisil, rand() % 6 + 1, false);
        }
    }
}

void ACanionVali::InicializarCanion(FString _State)
{
    if (_State.Equals("Dispararhielo")) {
        EstablecerState(StateDispararHielo);
        activarDispararHielo();
    }
    else if (_State.Equals("DispararBala")) {
        EstablecerState(StateDispararBala);
        activarDispararBala();
    }
    else if (_State.Equals("DispararLazer")) {
        EstablecerState(StateDispararLazer);
        activarDispararLazer();
    }
    else if (_State.Equals("DispararMisil")) {
        EstablecerState(StateDispararMisil);
        activarDispararMisil();
    }
    else {
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("No se pudo crear el estado")));
    }
}

void ACanionVali::DesactivarDisparoHielo()
{
    if (NumberFired < MaxProjectile)
    {
        bCanFire = true;
        activarDispararHielo();
    }
    else
    {
        NumberFired = 0;
        bCanFire = true;
        CambioDeEstado();
    }
}

void ACanionVali::DesactivarDisparoBala()
{
    if (NumberFired < MaxProjectile)
    {
        bCanFire = true;
        activarDispararBala();
    }
    else
    {
        NumberFired = 0;
        bCanFire = true;
        CambioDeEstado();
    }
}

void ACanionVali::DesactivarDisparoLazer()
{
    if (NumberFired < MaxProjectile)
    {
        bCanFire = true;
        activarDispararLazer();
    }
    else
    {
        NumberFired = 0;
        bCanFire = true;
        CambioDeEstado();
    }
}

void ACanionVali::DesactivarDisparoMisil()
{
    if (NumberFired < MaxProjectile)
    {
        bCanFire = true;
        activarDispararMisil();
    }
    else
    {
        NumberFired = 0;
        bCanFire = true;
        CambioDeEstado();
    }
}

IIState* ACanionVali::C_ObtenerEstado()
{
    return StateActual;
}

IIState* ACanionVali::C_ObtenerStateDispararHielo()
{
    return StateDispararHielo;
}

IIState* ACanionVali::C_ObtenerStateDispararBala()
{
    return StateDispararBala;
}

IIState* ACanionVali::C_ObtenerStateDispararLazer()
{
    return StateDispararLazer;
}

IIState* ACanionVali::C_ObtenerStateDispararMisil()
{
    return StateDispararMisil;
}

FString ACanionVali::C_ObtenerEstadoActual()
{
    if (StateActual) {
        return "El estado actual del cañón es: " + StateActual->ObtenerEstado();
    }
    else {
        return "No hay estado actual";
    }
}

void ACanionVali::CambioDeEstado()
{
    contador = (contador + 1) % 4; // Incrementa y reinicia el contador si llega a 4

    switch (contador)
    {
    case 0:
        InicializarCanion("Dispararhielo");
        break;
    case 1:
        InicializarCanion("DispararBala");
        break;
    case 2:
        InicializarCanion("DispararLazer");
        break;
    case 3:
        InicializarCanion("DispararMisil");
        break;
    default:
        break;
    }
}



	
	

