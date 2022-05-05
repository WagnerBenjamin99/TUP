// Ejercicio 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    double numero1, numero2, resultado;
    int opcion;

    cout << "     CALCULADORA" << endl;
    cout << "Ingrese primer numero: ";
    cin >> numero1;
    cout << "Ingrese segundo numero: ";
    cin >> numero2;

    cout << "Menu operaciones: " << endl;
    cout << "[1] Sumar numeros " << endl;
    cout << "[2] Restar numeros " << endl;
    cout << "[3] Multiplicar numeros " << endl;
    cout << "[4] Dividir numeros " << endl;
    cout << "[5] Resto division entera " << endl;
    cout << "Operacion?: ";
    cin >> opcion;
    cout << endl;

    switch (opcion)
    {
    case 1:
    {
        resultado = numero1 + numero2;
        cout << "El resultado de la suma es: " << resultado << endl;
    }
    break;
    case 2:
    {
        resultado = numero1 - numero2;
        cout << "El resultado de la resta es: " << resultado << endl;
    }
    break;
    case 3:
    {
        resultado = numero1 * numero2;
        cout << "El resultado de la multiplicacion es: " << resultado << endl;
    }
    break;
    case 4:
    {
        if (numero2==0)
        {
            cout << "No se puede dividir por 0" << endl;
        }
        else
        {
            resultado = numero1 / numero2;
            cout << "El resultado de la division es: " << resultado << endl;
        }
    }
    break;
    case 5:
    {
        resultado = int(numero1) % int(numero2);
        cout << "El resultado del resto de la division entera es: " << resultado << endl;
    }
    default:
        cout << "Opcion invalida" << endl;
        break;
    }
}


