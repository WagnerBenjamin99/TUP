

#include <iostream>
using namespace std;

int main()
{
    double var_temperatura;

    //Pido a usuario que ingrese temperatura
    cout << "Cual es la temperatura? : ";
    cin >> var_temperatura;
    cout << endl;
    //Condiciones de estado
    if (var_temperatura < 0)
        cout << "Estado: HIELO";
    if (var_temperatura >= 0 && var_temperatura <= 100)
        cout << "Estado: AGUA";
    if (var_temperatura > 100)
        cout << "Estado: VAPOR";
}


