# Toolkit
A collection of scripts / payloads and so on which I have found to be helpful during engagements.

## One-Liners

### Bash
| Command | Description |
|-----------------------------------------|----------------------------------------------------------|
| `find / -perm -222 -type d 2>/dev/null` | Prints all the directories the user has write access to. |
| `find / -type f -group [GROUP] 2>/dev/null` | Prints any special permissions for GROUP. |
| `touch -a -m -t 202104251300.10 [FILE]` | Change access / last modified time of FILE to 25/04/2021 13:00.10 |
|||

### PowerShell
