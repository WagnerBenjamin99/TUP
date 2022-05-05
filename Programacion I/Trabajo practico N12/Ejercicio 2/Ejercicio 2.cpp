// Ejercicio 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nombre;
	string vocal = "aeiou";
	int i, j, contador = 0;
	
	cout << "Cual es el nombre?: ";
	getline(cin, nombre);
	
	for (i = 0; i < nombre.size(); i++)
	{
		for (j = 0; j < vocal.size(); j++)
		{
			if (toupper(nombre[i]) != toupper(vocal[j]))
				continue;
			else
				contador++;
		}
	}
	cout << nombre << " tiene " << contador << " vocales." << endl;
}

