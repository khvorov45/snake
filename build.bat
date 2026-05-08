clang core_basic_window.c -std=c2x -march=native -Wall -Wextra -g -lgdi32 -luser32 -lOpengl32 -Wl,/subsystem:windows -o core_basic_window.exe -ferror-limit=1 && core_basic_window.exe
