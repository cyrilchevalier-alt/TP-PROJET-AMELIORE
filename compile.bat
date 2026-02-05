@echo off
cd /d "%~dp0"
C:\MinGW\bin\g++.exe -Wall -Wextra -g3 menuboucle.cpp ajoutereleve.cpp affichageetmoyenne.cpp -o output\menuboucle.exe
if %ERRORLEVEL% EQU 0 (
    echo Compilation reussie!
    echo Lancement du programme...
    output\menuboucle.exe
) else (
    echo Erreur de compilation!
    pause
)
