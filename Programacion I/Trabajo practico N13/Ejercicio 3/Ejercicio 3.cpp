// Ejercicio 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(NULL));
    int matriz[5][5];
    int i, j, k, mayorNum, menorNum;

    
    //cargo matriz con numeros aleatorios entre 0 y 100
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
            cout << setw(6) << matriz[i][j];
        }
        cout << endl;
    }
    cout << endl;
    
    //primer rrecorrido(diagonal principal)
    mayorNum = matriz[0][0];
    menorNum = matriz[0][0];
    cout << "Diagonal principal: ";
    for (i = 0; i < 5; i++)
    {
        j = i;
        cout << setw(6) << matriz[i][j];
        if (matriz[i][j] >= mayorNum)
            mayorNum = matriz[i][j];
        if (matriz[i][j] <= menorNum)
            menorNum = matriz[i][j];
    }
    cout << endl;
    cout << "Mayor del primer recorrido: " << mayorNum << endl;
    cout << "Menor del primer recorrido: " << menorNum << endl;
    cout << endl;

    //segundo recorrido
    mayorNum = matriz[0][0];
    menorNum = matriz[0][0];
    cout << "Segundo recorrido : ";
    k = 0;
    for (i = 4; i >= 0; i--)
    {
        cout << setw(6) << matriz[i][k];
        if (matriz[i][k] >= mayorNum)
            mayorNum = matriz[i][k];
        if (matriz[i][k] <= menorNum)
            menorNum = matriz[i][k];
        k++;
    }
    cout << endl;
    cout << "Mayor del segundo recorrido: " << mayorNum << endl;
    cout << "Menor del segundo recorrido: " << menorNum << endl;
}


