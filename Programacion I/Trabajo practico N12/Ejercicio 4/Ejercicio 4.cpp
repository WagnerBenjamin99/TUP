// Ejercicio 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombres[10] = { "Abril", "Benjamin", "Cristian", "Enzo", "Jonatan", "Miriam", "Ricardo", "Ruben", "Sebastian", "Tomas" };
    string clave;
    int n = 10;
    int medio = 0, high = n-1, low = 0, posicion = 0;;
    cout << "Que nombre desea buscar?: ";
    getline(cin, clave);

    while (low <= high)        // Si se invierten los limites el elemnto
    {                           // no se encuentra en el arreglo

        medio = (low + high) / 2;       // Divisi�n entera

        if (clave == nombres[medio])        // Valor hallado
        {
            posicion = medio;
            break;
        }
        else if (clave < nombres[medio])    // Eliminar semiarreglo superior
            high = medio - 1;

        else                              // Eliminar semiarreglo inferior
            low = medio + 1;

    }

    // Imprimir resultado
    if (nombres[posicion] != clave)
        cout << "Valor " << clave << " no encontrado." << endl;
    else
        cout << "Valor " << clave << " encontrado en la posicion "
        << posicion << endl;


}


