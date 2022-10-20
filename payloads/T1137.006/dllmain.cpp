// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH: {
        LPSTARTUPINFOA *si = new LPSTARTUPINFOA();
        LPPROCESS_INFORMATION *pi = new LPPROCESS_INFORMATION();
        CreateProcessA(NULL, (LPSTR)"cmd.exe /k echo \"WithSecure - T1137.006 - Office Add-Ins\"", NULL, NULL, TRUE, CREATE_SUSPENDED, NULL, NULL, *si, *pi);
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

