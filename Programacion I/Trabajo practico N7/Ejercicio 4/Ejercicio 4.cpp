

#include <iostream>
using namespace std;
int main()
{
    double saldo_inicial = 60000;
    double tasa_cambio = 200;
    double hora, conversion, monto_dolares;

    cout << "Bienvenido a la web del banco." << endl;
    cout << "Ingrese hora de la operacion: ";
    cin >> hora;
    cout << endl;
    
    if (hora >= 9 && hora <= 15)
    {
        cout << "Su saldo actual es de $" << saldo_inicial << endl;
        cout << "Cuantos dolares deseas comprar?: " << endl;
        cout << "Recuerde que la cotizacion actual es de $200 " << endl << endl;
        cout << "Monto : ";
        cin >> monto_dolares; 

        conversion = monto_dolares * 200;

        if (saldo_inicial >= conversion)
        {
            saldo_inicial -= conversion;
            cout << "Transaccion realizada. " << " Usted compro " << monto_dolares;
            cout << " dolares" << " por $" << tasa_cambio << " c/u" << endl;
            cout << "Su saldo remanente es $" << saldo_inicial << endl;
        }
        else
        {
            cout << "Saldo insuficiente ! " << endl;
        }
    }
    else
    {
        cout << "No se encuentra en el horario de cambio del banco " << endl;
        cout << "Recuerde que nuestro horario es de 9AM - 15 PM" << endl;
    }

    return 0;
}


