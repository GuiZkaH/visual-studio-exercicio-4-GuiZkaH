#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	char escolha;
	cout << "Menu" << endl;
	cout << "+ Soma" << endl;
	cout << "- Subtração" << endl;
	cout << " " << endl;
	cout << "Insira uma escolha" << endl;
	cin >> escolha;

	if (escolha == '+') {
		cout << "Insira dois numeros inteiros para serem somados: " << endl;
		cin >> num1;
		cin >> num2;
		cout << "A sua soma= " << num1 + num2 << endl;
	}
	else if (escolha == '-') {
		cout << "Insira dois numeros inteiros para serem subtraidos: " << endl;
		cin >> num1;
		cin >> num2;
		cout << "A sua subtração= " << num1 - num2 << endl;
	}
	else {
		cout << "Escolha não reconhecida" << endl;
	}
}