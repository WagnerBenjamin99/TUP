// Ejercicio 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j;
    int matriz[11][11];

    for (j = 0; j <= 10; j++)
    {
     
        for (i = 0; i <= 10; i++)
        {
            matriz[i][j] = j * i;
            cout << setw(2) << i << setw(1) << "x" << setw(1) << j << "= " << setw(2) << matriz[i][j] << setw(4);
            
        }
       
        cout << endl;
    }
}


