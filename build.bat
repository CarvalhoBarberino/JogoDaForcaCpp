rem @echo off
set PATH=C:\MinGW\bin;%PATH%
cd bin
del /Q *.*
cd ..
mingw32-make -f Make.gcc compila CABS=headers
pause
