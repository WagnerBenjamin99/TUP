

#include <iostream>
using namespace std;

int main()
{
    const int radio = 5;
    double dardo_x = 0;
    double dardo_y = 0;
    double dardo_distancia = 0;

    cout << "Cual es la coordenada x del dardo?: ";
    cin >> dardo_x;
    cout << "Cual es la coordenada y del dardo ? : ";
    cin >> dardo_y;
    cout << endl;

    dardo_distancia = sqrt(dardo_x * dardo_x + dardo_y * dardo_y);

    if (dardo_distancia <= radio)
    {
        cout << "Su dardo callo a una distancia de  " << dardo_distancia << endl;
        cout << "Usted gana 100 pts !!" << endl;
    }
    else
    {
        cout << "Su dardo callo a una distancia de " << dardo_distancia << endl;
        cout << "Esta fuera del circulo " << endl;
        cout << "No suma puntos!!" << endl;
    }

    return 0;
}


