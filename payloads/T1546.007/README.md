# T1546.007 - netsh helper DLL
Run `netsh add helper <PATH TO DLL>` to load the specified DLL each time netsh runs. The DLL in this directory will open `notepad.exe`.
Cleanup can be done via `netsh delete helper <PATH TO DLL>`.

ATTENTION: Requires an elevated prompt.