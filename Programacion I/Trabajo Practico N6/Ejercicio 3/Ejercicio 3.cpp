// Ejercicio 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int anio = 0;

    cout << "Cual es el anio? : ";
    cin >> anio;

    if (anio % 4 == 0 && anio % 100 != 0)
        cout << "El anio es bisiesto " << endl;
    
    if (anio % 100 == 0 && anio % 400 == 0)
        cout << "El anio es bisiesto " << endl;
    
    if (anio % 4 == 0)
    {
        if (anio % 100 == 0 && anio % 400 != 0)
            cout << "El anio NO es bisiesto " << endl;
        if (anio % 100 != 0 && anio % 400 == 0)
            cout << "El anio NO es bisiesto " << endl;
    }

    if (anio % 4 != 0)
    {
        if (anio % 100 != 0 || anio % 400 != 0)
            cout << "El anio NO es bisSiesto " << endl;
    }

}


