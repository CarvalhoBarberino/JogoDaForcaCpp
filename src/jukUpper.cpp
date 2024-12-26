#include "jukFuncoes.h"

using namespace std;

//Esta funcao altera as letras de uma string de minuscula para maiuscula
void juk::Upper(string& entrada){
	for (int i = 0; i < entrada.size(); i++){
		entrada[i] = toupper(entrada[i]);
	}
	return;
}

//Essa funcao printa na tela n linhas com um ponto
void juk::PulaLinhas(int n){
	cout << endl;
	for (int i = 0; i < n; i++){
		cout << "." << endl;
	}
	return;
}

//Esta funcao retorna um string e formado pela repeticao de um caractere n vezes.
string juk::Repete(string branco, int n){
	string saida = "";
	for (int i = 0; i < n; i++){
		saida.append(branco);
	}
	return saida;
}

//Esta funcao atualiza a variavel display
void juk::atualizaDisplay(string& display, string palavra_secreta, char letraSugerida){
	for (int i = 0; i < palavra_secreta.size(); i++){
		if (letraSugerida == palavra_secreta[i]){
			display[i] = letraSugerida;
			cout << "Parabens. Vc acertou uma letra: " << display << endl;
		}
	}
}