#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    //Desclaracion de variables
    srand(time(NULL));
    int arreglo_numeros[10];
    int i = 0, nroPares = 0;
    int sumaImpares = 0, sumaPares = 0;
    int nroImpares = 0;
    
    //cargo arreglo con numeros aleatorios
    for (i = 0; i < 10; i++)
    {
        arreglo_numeros[i] = rand() % 100;
        cout << arreglo_numeros[i] << "   ";
    }
    cout << endl << endl;

    //saco promedio de numeros pares e impares
    for (i = 0; i < 10; i++)
    {
        
        if (arreglo_numeros[i] % 2 == 0)
        {
            sumaPares += arreglo_numeros[i];
            nroPares++;
        }
        else
        {
            sumaImpares += arreglo_numeros[i];
            nroImpares++;
        }
    }
    cout << "El promedio de numeros pares es: " << sumaPares / nroPares << endl << endl;
    cout << "El promedio de numeros impares es : " << sumaImpares / nroImpares << endl << endl;
    
    sumaImpares = 0;
    nroImpares = 0;
   
    //saco promedio de numeros divisibles por 3
    for (i = 0; i < 10; i++)
    {
        if (arreglo_numeros[i] % 3 == 0)
        {
            sumaImpares += arreglo_numeros[i];
            nroImpares++;
        }
    }
    cout << "El promedio de los numeros divisibles por 3 es: " << sumaImpares / nroImpares << endl;
}