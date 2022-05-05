// Ejercicio 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{
    srand(time(0));

    int dado = 0;

    dado = rand() % 6 + 1;
    cout << "Numero de dado: " << dado << endl;

    switch (dado)
    {
    case 1:
    {
        cout << "---------" << endl;
        cout << "+       +" << endl;
        cout << "+   *   +" << endl;
        cout << "+       +" << endl;
        cout << "---------" << endl;
    }
        break;
    case 2:
    {
        cout << "---------" << endl;
        cout << "+     * +" << endl;
        cout << "+       +" << endl;
        cout << "+ *     +" << endl;
        cout << "---------" << endl;
    }
        break;
    case 3:
    {
        cout << "---------" << endl;
        cout << "+     * +" << endl;
        cout << "+   *   +" << endl;
        cout << "+ *     +" << endl;
        cout << "---------" << endl;
    }
        break;
    case 4:
    {
        cout << "---------" << endl;
        cout << "+ *   * +" << endl;
        cout << "+       +" << endl;
        cout << "+ *   * +" << endl;
        cout << "---------" << endl;
    }
        break;
    case 5:
    {
        cout << "---------" << endl;
        cout << "+ *   * +" << endl;
        cout << "+   *   +" << endl;
        cout << "+ *   * +" << endl;
        cout << "---------" << endl;
    }
    break;
  
    
    default:
    {
        cout << "---------" << endl;
        cout << "+ *   * +" << endl;
        cout << "+ *   * +" << endl;
        cout << "+ *   * +" << endl;
        cout << "---------" << endl;
    }
        break;
    }
}


