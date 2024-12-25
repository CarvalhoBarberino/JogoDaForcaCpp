rem Desabilita a visualização dos comandos deste script durante a execução
@echo off

rem A pasta contendo é adicionada à variavel PATH somente no momento da execução deste script.
rem Esta abordagem foi escolhida para permitir que se altere o compilador simplesmente alterando a pasta.
set PATH=C:\MinGW\bin;%PATH%

rem Entra na pasta bin e executa o arquivo
cd bin
jogoDaForca

echo "Fim do script test.bat"
pause