// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>
#include <iostream>
#define DLLEXPORT extern "C" __declspec(dllexport)
#define KSDIAG_FASTCALL __fastcall
#define FASTNAME_INT64 DLLEXPORT __int64 KSDIAG_FASTCALL
#define FASTNAME_CONSTCHAR DLLEXPORT const char* KSDIAG_FASTCALL
const char* empty_string = "";
DLLEXPORT __int64 KSDIAG_FASTCALL AddExited(__int64 a1, __int64 a2, int a3)
{
    return 0;
}

DLLEXPORT __int64 KSDIAG_FASTCALL AddOutputDataReceived(__int64 a1, __int64 a2, int a3) {
    return 0;
}

DLLEXPORT __int64 __fastcall BeginOutputReadLine(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall CancelOutputRead(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 CreateProcessStartInfo() {
    return 0;
}

DLLEXPORT __int64 __fastcall DisposeProcess(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall DisposeProcessStartInfo(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall Free(unsigned __int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall FreeGCHandle(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetArguments(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetCreateNoWindow(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetEnableRaisingEvents(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetFileName(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetProcessName(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetProcesses(__int64 a1, __int64 a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetProcessesByName(__int64 a1, __int64 a2, __int64 a3) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetProcessesString(__int64 a1, __int64 a2, __int64 a3) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetRedirectStandardOutput(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetUseShellExecute(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall GetWorkingDirectory(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall Kill(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall KillBool(__int64 a1, unsigned __int8 a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall RemoveExited(__int64 a1, int a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall RemoveOutputDataReceived(__int64 a1, int a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall SetArguments(__int64 a1, __int64 a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall SetCreateNoWindow(__int64 a1, char a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall SetEnableRaisingEvents(__int64 a1, unsigned __int8 a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall SetFileName(__int64 a1, __int64 a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall SetRedirectStandardOutput(__int64 a1, char a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall SetStartInfo(__int64 a1, __int64 a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall SetUseShellExecute(__int64 a1, char a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall SetWorkingDirectory(__int64 a1, __int64 a2) {
    return 0;
}

DLLEXPORT __int64 __fastcall Start(__int64 a1) {
    return 0;
}

DLLEXPORT void __fastcall TlsCallback_0(__int64 a1, int a2) {
    return;
}

DLLEXPORT __int64 __fastcall WaitForExit(__int64 a1) {
    return 0;
}

DLLEXPORT __int64 __fastcall WaitForExitMilliseconds(__int64 a1, unsigned int a2) {
    return 0;
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

