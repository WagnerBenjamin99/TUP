// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int indicador = 0;

    cout << "Ingrese indicador(valor del 1 al 3): ";
    cin >> indicador;
    cout << endl;

    switch (indicador)
    {
    case 1: cout << "Calor" << endl;
        break;
    case 2: cout << "Templado " << endl;
        break;
    case 3: cout << "Frio " << endl;
        break;
    default: cout << "Fuera de rango" << endl;
        break;
    }
    

}


