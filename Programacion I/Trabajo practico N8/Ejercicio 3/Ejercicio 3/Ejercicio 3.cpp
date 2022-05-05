// Ejercicio 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int nro1, nro2, nro3, nro4;
    int nro_mayor;

    srand(time(0));

    nro1 = rand() % 100;
    nro2 = rand() % 100;
    nro3 = rand() % 100;
    nro4 = rand() % 100;

    cout << "Los numeros son " << nro1 << " " << nro2;
    cout << " " << nro3 << " " << nro4;
    cout << " respectivamente" << endl;

    if ((nro1 > nro2 && nro1 > nro3) && nro1 > nro4)
        nro_mayor = nro1;
    else if ((nro2 > nro1 && nro2 > nro3) && nro2 > nro4)
        nro_mayor = nro2;
    else if ((nro3 > nro1 && nro3 > nro2) && nro3 > nro4)
        nro_mayor = nro3;
    else
        nro_mayor = nro4;

    cout << "El mayor de los numeros es: " << nro_mayor << endl;

}


