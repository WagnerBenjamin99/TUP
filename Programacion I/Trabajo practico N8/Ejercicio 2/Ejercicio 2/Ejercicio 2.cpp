// Ejercicio 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    srand(time(0));

    int dado_numero;

    dado_numero = rand() % 6 + 1;
    if (dado_numero == 1)
    {
        cout << "---------" << endl;
        cout << "+       +" << endl;
        cout << "+   *   +" << endl;
        cout << "+       +" << endl;
        cout << "---------" << endl;
    }
    else if(dado_numero == 2)
    {
        cout << "---------" << endl;
        cout << "+     * +" << endl;
        cout << "+       +" << endl;
        cout << "+ *     +" << endl;
        cout << "---------" << endl;
    }
    else if(dado_numero == 3)
    {
        cout << "---------" << endl;
        cout << "+     * +" << endl;
        cout << "+   *   +" << endl;
        cout << "+ *     +" << endl;
        cout << "---------" << endl;
    }
    else if (dado_numero == 4)
    {
        cout << "---------" << endl;
        cout << "+ *   * +" << endl;
        cout << "+       +" << endl;
        cout << "+ *   * +" << endl;
        cout << "---------" << endl;
    }
    else if (dado_numero == 5)
    {
        cout << "---------" << endl;
        cout << "+ *   * +" << endl;
        cout << "+   *   +" << endl;
        cout << "+ *   * +" << endl;
        cout << "---------" << endl;
    }
    else
    {
        cout << "---------" << endl;
        cout << "+ *   * +" << endl;
        cout << "+ *   * +" << endl;
        cout << "+ *   * +" << endl;
        cout << "---------" << endl;
    }

    
}


