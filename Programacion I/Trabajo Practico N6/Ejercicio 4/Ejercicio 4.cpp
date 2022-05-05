// Ejercicio 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    double salarioBruto = 0;
    double salarioNeto = 0;
    double horasTrabajadas = 0;
    double horasExtras, descuento;

    cout << "Cuantas horas trabajo? : ";
    cin >> horasTrabajadas;
    cout << endl;

    //Calculo horas extras
    horasExtras = (horasTrabajadas - 37) * 150;

    //Calculo salario bruto
    if (horasTrabajadas < 38)
        salarioBruto = horasTrabajadas*100;
    if (horasTrabajadas >= 38)
        salarioBruto = 37 * 100;
        salarioBruto += horasExtras;
    
    //Verifico si aplico descuento
    if (salarioBruto <= 3000)
    {
        salarioNeto = salarioBruto; //Calculo salario NETO
        cout << "Su salario bruto es menor o igual a $3000" << endl;
        cout << "No se aplica descuento " << endl;
    }
        
    if (salarioBruto > 3000)
    {
        descuento = salarioBruto * 0.10;
        salarioNeto = salarioBruto - descuento;
        cout << "Su salario bruto supera los $3000 " << endl;
        cout << "Se aplica un descuento de $" << descuento << endl;

    }
    //Imprimo salario NETO   
    cout << endl;
    cout << "El salario NETO es: " << salarioNeto << endl;
    

}


