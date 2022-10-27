# T1546.001 - Hijacking default file extensions

Change the `HKEY_CLASSES_ROOT\txtfile\shell\open\command` value to point to `shell.cmd`. When opening a text file, this will run `cmd.exe` in addition to opening `notepad.exe`.