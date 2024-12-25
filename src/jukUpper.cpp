#include "jukFuncoes.h"

using namespace std;

void juk::Upper(string& entrada){
	for (int i = 0; i < entrada.size(); i++){
		entrada[i] = toupper(entrada[i]);
	}
	return;
}

void juk::PulaLinhas(int n){
	cout << endl;
	for (int i = 0; i < n; i++){
		cout << "." << endl;
	}
	return;
}

string juk::Repete(string branco, int n){
	string saida = "";
	for (int i = 0; i < n; i++){
		saida.append(branco);
	}
	return saida;
}