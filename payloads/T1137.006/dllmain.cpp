// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

void exec() {
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));
    TCHAR command[65] = TEXT("cmd.exe /k echo \"WithSecure - T1137.006 - XLL / WLL backdoor\"");
    CreateProcess(NULL, command, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH: {
        exec();
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

//rundll32 out.dll,0
extern "C" __declspec(dllexport) void test()
{
    exec();
}

