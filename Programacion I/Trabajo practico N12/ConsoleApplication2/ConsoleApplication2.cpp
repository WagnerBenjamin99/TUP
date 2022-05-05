// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string personas[10] = { "Luca", "Benjamin", "Tiziano", "Facundo", "Alan", "Ricardo", "Abril", "Miriam", "Jonatan", "Luana" };
    string persona_busqueda;
    int i = 0;

    cout << "Nombre de la persona?: ";
    cin >> persona_busqueda;

    for (i = 0; i < 10; i++)
    {
        if (i<9 && persona_busqueda==personas[i])
        {
            cout << "Persona encontrada en la posicion " << i << endl;
            break;
        }
    }
    if (persona_busqueda!=personas[i])
    {
        cout << "Persona no encontrada " << endl;
    }

    
}


