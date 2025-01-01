#include "jukFuncoes.h"
#define MAX 26

using namespace std;

int main(){
	// Cria palavra secreta
	string palavra_secreta;
	cout << "Jogo da Forca" << endl;
	cout << "Digite uma palavra a ser adivinhada sem que o jogador veja: ";
	cin >> palavra_secreta;
	juk::Upper(palavra_secreta);
	juk::PulaLinhas(80);

	// Inicia display
	string display = juk::Repete("_", palavra_secreta.size());
	
	// Inicia tentativas
	bool acertouTodas = false;
	string entrada;
	char letraSugerida;
	int i = 1;
	
	while (!acertouTodas && i <= MAX)
	{
		cout << "Jogo da Forca" << endl;
		cout << "Numero maximo de tentativas: " << MAX << endl;
		cout << "Veja como ficou: " << display << endl;
		cout << "Tentativa: " << i << endl;
		cout << "Digite uma letra: ";
		cin >> entrada;
		juk::Upper(entrada);
		letraSugerida = entrada[0];
		juk::PulaLinhas(80);// Espacamento entre tentativas
		juk::atualizaDisplay(display, palavra_secreta, letraSugerida);
		//string::npos == display.find("_") ? acertouTodas = true : cout << "ainda falta" << endl;
		if (string::npos == display.find("_")){
			acertouTodas = true;
			juk::PulaLinhas(80);
			cout << "Parabens voce acertou todas as letras" << endl;
			cout << display << endl;
		}
		i++;
	}
	
	return 0;
}