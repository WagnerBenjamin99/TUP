

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre1, nombre2, nombre3;

    cout << "Cual es el primer nombre?: ";
    getline(cin, nombre1);
    cout << "Cual es el segundo nombre?: ";
    getline(cin, nombre2);
    cout << "Cual es el tercer nombre?: ";
    getline(cin, nombre3);
    cout << endl;

    cout << "Orden alfabetico de mayor a menor : " << endl << endl;

    if (nombre1 > nombre2 && nombre1 > nombre3)
    {
        if (nombre2 > nombre3)
        {
            cout << nombre1 << "\n" << nombre2 << "\n" << nombre3 << endl;
        }
        else
        {
            cout << nombre1 << "\n" << nombre3 << "\n" << nombre2 << endl;
        }
    }
    if (nombre2 > nombre1 && nombre2 > nombre3)
    {
        if (nombre1 > nombre3)
        {
            cout << nombre2 << "\n" << nombre1 << "\n" << nombre3 << endl;
        }
        else
        {
            cout << nombre2 << "\n" << nombre3 << "\n" << nombre1 << endl;
        }
    }
    if (nombre3 > nombre1 && nombre3 > nombre2)
    {
        if (nombre1 > nombre2)
        {
            cout << nombre3 << "\n" << nombre1 << "\n" << nombre2 << endl;
        }
        else
        {
            cout << nombre3 << "\n" << nombre2 << "\n" << nombre1 << endl;
        }
    }
    cout << endl;

    return 0;
}


