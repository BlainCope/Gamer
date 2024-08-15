#include <Windows.h>
#include <iostream>
#include <thread>

#include "SDK.hpp"

// Basic.cpp was added to the VS project
// Engine_functions.cpp was added to the VS project

DWORD MainThread(HMODULE Module)
{
    // Code to open a console window
    AllocConsole();
    FILE* Dummy;
    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    freopen_s(&Dummy, "CONIN$", "r", stdin);

    // Functions returning "static" instances
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    SDK::UWorld* World = SDK::UWorld::GetWorld();

    // Getting the PlayerController, World, OwningGameInstance, ... should all be checked not to be nullptr!
    SDK::APlayerController* MyController = World->OwningGameInstance->LocalPlayers[0]->PlayerController;

    // Print the full-name of an object ("ClassName PackageName.OptionalOuter.ObjectName")
    std::cout << Engine->ConsoleClass->GetFullName() << std::endl;

    // Manually iterating GObjects and printing the FullName of every UObject that is a Pawn (not recommended)
    for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
    {
        SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

        if (!Obj)
            continue;

        if (!Obj->IsDefaultObject())
            continue;

        // Only the 'IsA' check using the cast flags is required, the other 'IsA' is redundant
        if (Obj->IsA(SDK::APawn::StaticClass()) || Obj->HasTypeFlag(SDK::EClassCastFlags::Pawn))
        {
            std::cout << Obj->GetFullName() << "\n";
        }
    }

    // You might need to loop all levels in UWorld::Levels
    SDK::ULevel* Level = World->PersistentLevel;
    SDK::TArray<SDK::AActor*>& Actors = Level->Actors;

    for (SDK::AActor* Actor : Actors)
    {
        // The 2nd and 3rd checks are equal, prefer using EClassCastFlags if available for your class.
        if (!Actor || !Actor->IsA(SDK::EClassCastFlags::Pawn) || !Actor->IsA(SDK::APawn::StaticClass()))
            continue;

        SDK::APawn* Pawn = static_cast<SDK::APawn*>(Actor);
        // Use Pawn here
    }

    // Changes the keyboard-key that's used to open the UE console
    SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"F2");

    // Creates a new UObject of class-type specified by Engine->ConsoleClass
    SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);

    // The Object we created is a subclass of UConsole, so this cast is **safe**.
    Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
    SDK::UObject* TestCheat = SDK::UObject::FindObjectFast("UCheatManagerExtension");
	if (!MyController->CheatManager)
		{
        MyController->CheatManager = (SDK::UCheatManager*)SDK::UGameplayStatics::SpawnObject(MyController->CheatClass, MyController);
        }

    if (MyController)
    {
	    MyController->AcknowledgedPawn->AChar
    }

    // Loop to check for F6 key press to uninject the DLL
    while (true)
    {
        if (GetAsyncKeyState(VK_F6) & 1)  // Check if F6 is pressed
        {
            std::cout << "F6 pressed, unloading DLL..." << std::endl;
            FreeLibraryAndExitThread(Module, 0);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Sleep to reduce CPU usage
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
        break;
    }

    return TRUE;
}
