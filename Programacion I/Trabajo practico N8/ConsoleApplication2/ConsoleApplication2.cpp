// Ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int plazoFijo_meses = 0;
    double plazoFijo_deposito = 0;
    double plazoFijo_intereses = 0;
    double plazoFijo_saldo;

    cout << "Monto del deposito?: ";
    cin >> plazoFijo_deposito;
    cout << endl;
    cout << "Meses de plazo fijo?: ";
    cin >> plazoFijo_meses;

    if (plazoFijo_deposito > 0 && plazoFijo_deposito < 1000)
    {
        if (plazoFijo_meses == 3)
        {
            plazoFijo_intereses = (plazoFijo_deposito * 0.2) * 3;
            plazoFijo_saldo = plazoFijo_deposito + plazoFijo_intereses;
        }
        else if (plazoFijo_meses == 6)
        {
            plazoFijo_intereses = (plazoFijo_deposito * 0.3) * 6;
            plazoFijo_saldo = plazoFijo_deposito + plazoFijo_intereses;
        }
        else if (plazoFijo_meses == 12)
        {
            plazoFijo_intereses = (plazoFijo_deposito * 0.4) * 12;
            plazoFijo_saldo = plazoFijo_deposito + plazoFijo_intereses;
        }
        else
        {
            cout << "Plazo incorrecto " << endl;
        }
    }
    else
    {
        if (plazoFijo_deposito >= 1000 && plazoFijo_deposito <= 10000)
        {
            if (plazoFijo_meses == 3)
            {
                plazoFijo_intereses = (plazoFijo_deposito * 0.3) * 3;
                plazoFijo_saldo = plazoFijo_deposito + plazoFijo_intereses;
            }
            else if (plazoFijo_meses == 6)
            {
                plazoFijo_intereses = (plazoFijo_deposito * 0.4) * 6;
                plazoFijo_saldo = plazoFijo_deposito + plazoFijo_intereses;
            }
            else if (plazoFijo_meses == 12)
            {
                plazoFijo_intereses = (plazoFijo_deposito * 0.5) * 12;
                plazoFijo_saldo = plazoFijo_deposito + plazoFijo_intereses;
            }
            else
            {
                cout << "Plazo incorrecto " << endl;
            }

        }
        else
        {
            if (plazoFijo_deposito > 10000)
            {
                if (plazoFijo_meses == 3)
                {
                    plazoFijo_intereses = (plazoFijo_deposito * 0.4) * 3;
                    plazoFijo_saldo = plazoFijo_deposito + plazoFijo_intereses;
                }
                else if (plazoFijo_meses == 6)
                {
                    plazoFijo_intereses = (plazoFijo_deposito * 0.5) * 6;
                    plazoFijo_saldo = plazoFijo_deposito + plazoFijo_intereses;
                }
                else if (plazoFijo_meses == 12)
                {
                    plazoFijo_intereses = (plazoFijo_deposito * 0.6) * 12;
                    plazoFijo_saldo = plazoFijo_deposito + plazoFijo_intereses;
                }
                else
                {
                    cout << "Plazo incorrecto " << endl;
                }
                
            }
            else
            {
                cout << "Deposito incorrecto " << endl;
            }
        }
    }
    
    
    cout << "Su deposito fue de $" << plazoFijo_deposito << " a " << plazoFijo_meses << " meses." << endl;
    cout << "Su ganancia por intereses fue de $" << plazoFijo_intereses << endl;
    cout << "Saldo a retirar: $" << plazoFijo_saldo << endl;
}


