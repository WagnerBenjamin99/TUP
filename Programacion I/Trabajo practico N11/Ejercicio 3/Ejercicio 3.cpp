// Ejercicio 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    double y, sumatoria = 0;

    cout << "Cual es el valor de n( nro terminos) : ";
    cin >> n;
    cout << endl;

    for (i = 1; i <= n; i++)
    {
        y = (-3 * (i + 1)) / (i * i);
        sumatoria += y;
    }

    cout << "El resultado de la sumatoria es: " << sumatoria << endl;
}

