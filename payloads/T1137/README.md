# T1137 - Office Application Startup
This directory contains Office related test-cases which do not fit within the other T1137 sub-techniques.

## Malicious VSTO plugin
After installation, `notepad.exe` is opened upon launching Outlook.

## Excel / Word Startup Backdoor
`t1137.xlam` and `t1137.dotm` can be added to the respective startup directories `%APPDATA%\Roaming\Microsoft\Excel\XLSTART` or `%APPDATA%\Roaming\Microsoft\Word\STARTUP`. `t1137.xlam` will spawn `cmd.exe`, whereas `t1137.dotm` will display a `MsgBox`.

## OTM file
As detailed in this [blogpost](https://www.mdsec.co.uk/2020/11/a-fresh-outlook-on-mail-based-persistence/).
The .OTM file needs to be placed in `%APPDATA%\Roaming\Microsoft\Outlook`, and macros need to be enabled in the Trust Center or Registry.