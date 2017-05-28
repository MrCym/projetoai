#include <iostream>

 /* This program's basic calculator for start our project.
    Case your operational system be GNU/Linux, compile with g++.
    This code's in portuguese (Brazil)
    @author MrCym
    @Date 28/05/2017
 */
using namespace std;

int main(){

int chg=0, x=0, y=0;

    // Interface basic calculator
	cout << "---- Calculadora ----" << endl;
	cout << "[1] Adicao" << endl  << "[2] Subtracao" << endl << "[3] Multiplicao" << endl << "[4] Divisao" << endl;
	cout << "Qual operador aritmetico vai trabalhar? ";
	cin >> chg;

    // Here's using conditional struture for operaters
		switch(chg){

			case 1:
				cout << "---- Adicao ----" << endl;
				cout << "Insira o valor de x >> ";
				cin >> x;
				cout << "Insira o valor de y >> ";
				cin >> y;
				cout << "\n O resultado desta operacao e: " << x + y << endl << endl;
				cout << "---- Programa finalizado ----" << endl;
			break;

			case 2:
				cout << "---- Subtracao ----" << endl;
				cout << "Insira o valor de x >> ";
				cin >> x;
				cout << "Insira o valor de y >> ";
				cin >> y;
				cout << "\n O resultado desta operacao e: " << x - y << endl << endl;
				cout << "---- Programa finalizado ----" << endl;
			break;

			case 3:
				cout << "---- Multiplicacao ----" << endl;
				cout << "Insira o valor de x >> ";
				cin >> x;
				cout << "Insira o valor de y >>";
				cin >> y;
				cout << "\n O resultado desta opercao e: " << x * y << endl << endl;
				cout << "---- Programa finalizado ----" << endl;
			break;

			case 4:
				cout << "---- Divisao ----" << endl;
				cout << "Insira o valor de x >> ";
				cin >> x;
				cout << "Insira o valor de y >> ";
				cin >> y;
				cout << "\n O resultado desta operacao e: " << x / y << endl << endl;
				cout << "---- Programa finalizado ----" << endl;
			break;

			default: // If the option is other than 1,2,3,4
				cout << "ERROR!" << endl;
				cout << "Nao reconhecemos isso, tente novamente!" << endl;
		}

 return 0;
}
