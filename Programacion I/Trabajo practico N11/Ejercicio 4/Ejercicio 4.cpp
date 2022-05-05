// Ejercicio 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265359
using namespace std;

int main()
{
    double funcion_sinc = 0;
    double x;

    for (x = 0; x < PI; x += 0.1)
    {
        if (x == 0)
        {
            funcion_sinc = 1;
            cout << setw(3) <<"X" << "|" << "SINC(X)" << endl;
            cout << setw(3) << x << "|" << setw(3) << fixed << setprecision(3) << funcion_sinc << endl;
        }
        else
        {

            funcion_sinc =  sin(x)/x;
            cout << setw(3) << fixed << setprecision(1) << x << "|" << setw(3) << fixed << setprecision(3) << funcion_sinc << endl;
        }

        
        
    }
}


