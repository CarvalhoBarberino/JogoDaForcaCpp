#include <iostream>
#include <string>
#define LINHAS 10// Numero de linhas que será colocadas para ocultar a palavra digitada no terminal

namespace juk
{
	void Upper(std::string&);
	void PulaLinhas(int);
	std::string Repete(std::string, int);
	void atualizaDisplay(std::string&, std::string, char);
}