#include <iostream>
#include <locale>

using namespace std;

int main() {
	locale::global(locale("pt_BR.UTF-8"));

	int numero = 1;
	//while (numero <= 10) {
	//	cout << numero;
	//	numero += 1;
	//}

	/*int tabuada;
	cout << "Informe um Número:";
	cin >> tabuada;
	for (int j = 1; j <= 10; j++) {
		int resultado = tabuada * j;
		cout << tabuada << "x" << j << "=" << resultado << "\n";
	}*/

	//for (int g = 0; g <= 50; g += 5) {
	//	cout << g ;
	//}

	/*int num;

	for (int g = 0; g< 5; ++g) {
		cout << "Digite um número: ";
		cin >> num;

		if (num > 100) {
			cout << "NÚMERO ESPECIAL";
		}
		else {
			cout << "NÚMERO COMUM";
		}
	}*/

	/*for (int g = 1; g <= 31; g += 2) {
		cout << g;
	}*/

	/*int num;

	for (int g = 0; g < 5; ++g) {
		cout << "Digite um número";
		cin >> num;

		if (num > 0) {
			cout << "Número Positivo";
		}
		else if (num < 0) {
			cout << "Número Negativo";
		}
		else {
			cout << "O Número é Zero";
		}
	}*/

}