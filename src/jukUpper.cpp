#include "jukFuncoes.h"

using namespace std;

void jukUpper(string& entrada){
	for (int i = 0; i < entrada.size(); i++){
		cout << entrada[i] << endl;
		entrada[i] = toupper(entrada[i]);
		cout << entrada[i] << endl;
	}
	cout << entrada << " Dentro" << endl;
	return;
}