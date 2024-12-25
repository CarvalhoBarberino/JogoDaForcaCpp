rem Desabilita a visualização dos comandos deste script durante a execução
@echo off

rem A pasta contendo o compilador é colocado na variavel PATH somente no momento da execução deste script.
rem Esta abordagem foi escolhida para permitir que se altere o compilador simplesmente alterando a pasta.
set PATH=C:\MinGW\bin;%PATH%

rem Deleta os binarios da compilação anterior
cd bin
del /Q *.*
cd ..

rem Executa o makefile
rem "CABS=headers" Este parametro informa a pasta que contem os arquivos de cabeçalho
mingw32-make -f Make.gcc compila CABS=headers

echo "Fim do script build.bat"
pause
