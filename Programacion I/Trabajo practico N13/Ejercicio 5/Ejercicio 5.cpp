// Ejercicio 5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(NULL));
    bool tablero[10][10];
    int i, j;
    int contador = 0;
    int fichasporfila = 0;

    //ubico las fichas
    for (contador = 0; contador < 20; contador++)
    {
        i = rand() % 10;
        j = rand() % 10;
        tablero[i][j] = true;
    }
    //imprimo tablero
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            cout << setw(6) << tablero[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;
    //cuento cant de fichas por fila
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (tablero[i][j] == true)
                fichasporfila++;
        }
        cout << "La fila " << i << "tiene " << fichasporfila << " fichas" << endl;
        fichasporfila = 0;
    }
}


