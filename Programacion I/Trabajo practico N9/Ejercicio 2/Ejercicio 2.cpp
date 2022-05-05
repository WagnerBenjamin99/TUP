// Ejercicio 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    char c;

    cout << "Ingrese inicial del color: ";
    cin >> c;
	
	c = toupper(c);
	
	switch (c)
	{
	case 'R': cout << "ROJO" << endl;
		break;
	case 'V': cout << "VERDE" << endl;
		break;
	case 'A': cout << "AZUL" << endl;
		break;
	default: cout << "NEGRO" << endl;
		break;
	}
}

