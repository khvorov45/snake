clang windows_entry.c -std=c2x -march=native -Wall -Wextra -g -lgdi32 -luser32 -lOpengl32 -Wl,/subsystem:windows -o windows_entry.exe -ferror-limit=1 && windows_entry.exe
