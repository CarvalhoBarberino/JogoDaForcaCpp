#include "jukFuncoes.h"

using namespace std;

int main(){
	// Cria palavra secreta
	string palavra_secreta;
	cout << "Digite uma palavra: ";
	cin >> palavra_secreta;
	juk::Upper(palavra_secreta);
	juk::PulaLinhas(20);

	// Inicia display
	string display = juk::Repete("_", palavra_secreta.size());
	cout << "display: " << display;
	
	// Inicia tentativas
	bool acertouTodas = false;
	string entrada;
	char letraSugerida;
	int i = 0;
	while (!acertouTodas && i < 6)
	{
		juk::PulaLinhas(3);// Espacamento entre tentativas
		cout << "Digite uma letra sugerida";
		cin >> entrada;
		letraSugerida = entrada[0];
		i++;
	}
	
	return 0;
}