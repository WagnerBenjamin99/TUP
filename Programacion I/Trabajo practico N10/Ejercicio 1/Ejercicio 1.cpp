// Ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    double x1 = 0, x2 = 0;
    int opcion = 0, resultado = 0;

    do
    {
        
        

        cout << "      -----------  " << endl;
        cout << "     |Calculadora| " << endl;
        cout << "      -----------  " << endl;
        cout << "[1] INGRESAR X1  "   << endl;
        cout << "[2] INGRESAR X2 "    << endl;
        cout << "[3] SUMA "           << endl;
        cout << "[4] RESTA       "    << endl;
        cout << "[5] MULTIPLICACION " << endl;
        cout << "[6] DIVISION "       << endl;
        cout << "[7] TERMINAR  "      << endl;
        cout << "Ingrese operacion: ";
        cin >> opcion;

 
            switch (opcion)
            {
            case 1:
            {
                cout << "Ingrese numero 1: ";
                cin >> x1;
                system("cls");
            }break;
            case 2:
            {
                cout << "Ingrese numero 2: ";
                cin >> x2;
                system("cls");
            }break;
            case 3:
            {
                resultado = x1 + x2;
                cout << "El resultado de la suma es: " << resultado << endl;
            }break;
            case 4:
            {
                resultado = x1 - x2;
                cout << "El resultado de la resta es: " << resultado << endl;
            }break;
            case 5:
            {
                resultado = x1 * x2;
                cout << "El resultado del producto es: " << resultado << endl;
            }break;
            case 6:
            {
                if (x2 == 0)
                {
                    cout << "[error] no se puede dividir por 0 " << endl;
                }
                else
                {
                    resultado = x1 / x2;
                    cout << "El resultado de la division es: " << resultado << endl;
                }

            }break;
            case 7:
            {
                system("cls");
                cout << "Programa finalizado " << endl;
            }break;

            default:
                cout << "Opcion incorrecta " << endl;
                break;
            }
    } while (opcion != 7);
        
}


