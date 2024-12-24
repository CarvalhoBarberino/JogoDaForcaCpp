#include "jukFuncoes.h"

using namespace std;

int main(){
	string palavra_secreta = "MELANCIA";
	cout << "Digite uma palavra: ";
	cin >> palavra_secreta;
	jukUpper(palavra_secreta);
	cout << palavra_secreta << " Fora" << endl;
	return 0;
}