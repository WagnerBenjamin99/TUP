// Ejercicio 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int matriz[10][10];
    int i, j, mayorNum, menorNum;

    mayorNum = matriz[0][0];

    //recorrida barriendo por filas 
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            //cargo matriz con numeros aleatorios entre 0 y 9999
            matriz[i][j] = rand() % 10000;
            cout << setw(6) << matriz[i][j];
            //busco el numero mayor
            if (matriz[i][j] > mayorNum)
            {
                mayorNum = matriz[i][j];
            }
        }
        cout << endl;
    }
    menorNum = matriz[0][0];
    //recorrido barriendo columnas
    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 10; i++)
        {
            if (matriz[i][j] < menorNum)
            {
                menorNum = matriz[i][j];
            }
        }
    }

    cout << endl << endl;
    cout << "El numero mayor de la matriz es: " << mayorNum << endl;
    cout << "El numero menor de la matriz es: " << menorNum << endl;
}


