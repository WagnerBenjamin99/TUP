
#include <string>
#include <iostream>
using namespace std;

int main()
{
    double var_temperatura;
    string mensaje;

    cout << "Cual es la temperatura?: ";
    cin >> var_temperatura;
    cout << endl;

    var_temperatura >= 30.0 ? mensaje = "Hace calor!" : mensaje = "Hermoso dia!";

    cout << mensaje << endl;
    
    return 0;
}


