@echo off
gcc %1.c -o executable
executable
del executable.exe