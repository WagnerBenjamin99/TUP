// Ejercicio 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    double punto1_x, punto1_y;
    double punto2_x, punto2_y;
    double distanciaP1, distanciaP2;

    cout << "Cuales son las coordenadas del punto 1" << endl;
    cout << "Coordenada X: ";
    cin >> punto1_x;
    cout << "Coordenada Y: ";
    cin >> punto1_y;
    cout << endl;

    cout << "Cuales son las coordenadas del punto 2" << endl;
    cout << "Coordenada X: ";
    cin >> punto2_x;
    cout << "Coordenada Y: ";
    cin >> punto2_y;
    cout << endl;

    distanciaP1 = sqrt(punto1_x * punto1_x + punto1_y * punto1_y);
    distanciaP2 = sqrt(punto2_x * punto2_x + punto2_y * punto2_y);

    if (distanciaP1 < distanciaP2)
    {
        cout << "El punto 1 esta mas cerca del origen " << endl;
        cout << "A una distancia de " << distanciaP1 << endl;
    }
    if (distanciaP1 > distanciaP2)
    {
        cout << "El punto 2 esta mas cerca del origen " << endl;
        cout << "A una distancia de " << distanciaP2 << endl;
    }
    if (distanciaP1 == distanciaP2)
    {
        cout << "Ambos puntos estan a la misma distancia del origen " << endl;
        cout << "A una distancia de " << distanciaP1 << endl;
    }
        




}


