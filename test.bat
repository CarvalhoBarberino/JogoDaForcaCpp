@echo off
echo "Testa_via_MinGW32.bat"
set PATH=C:\MinGW\bin;%PATH%
set PATH=C:\ApagueMe;%PATH%
copy /Y ".\bin\jogoDaForca.exe" "C:\ApagueMe\jogoDaForca.exe"
jogoDaForca
pause