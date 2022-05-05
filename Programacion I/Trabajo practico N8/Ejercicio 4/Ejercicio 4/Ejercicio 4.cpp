/*
* Nombre  : Ejercicio 4.cpp
* Programa: Piedra papel o tijera
* Autor   : Wagner Benjamin
* Contacto: benjaminwagner19@outlook.com
*/

#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int jugadaMaquina;
    int jugada_player;

    jugadaMaquina = rand() % 3 + 1; //genero jugada de la maquina aleatoriamente
    cout << "Bienvenido al piedra papel o tijera " << endl;
    cout << "[1] Piedra " << endl;
    cout << "[2] Papel  " << endl;
    cout << "[3] Tijera " << endl;
    cout << "Cual es su jugada?: ";
    cin >> jugada_player; //pido al usuario que ingrese su jugada
    cout << "Jugada maquina: " << jugadaMaquina;
    cout << endl << endl;
    
    //analizo todos los resultados posibles
    if (jugada_player == 1)
    {
        if (jugadaMaquina == 1)
            cout << "Ambos jugador Piedra, EMPATE!" << endl;
        else if (jugadaMaquina == 2)
            cout << "Papel envuelve a la piedra, PERDISTE :(" << endl;
        else  
            cout << "La piedra rompe la tijera, GANASTE!!! :)" << endl;
    }
    else if (jugada_player == 2)
    {
        if (jugadaMaquina == 1)
            cout << "La piedra envuelve al papel, GANASTE!! :)" << endl;
        else if (jugadaMaquina == 2)
            cout << "Ambos jugan Papel, hay EMPATE! " << endl;
        else
            cout << "Tijera corta papel, PERDISTE :(" << endl;
    }
    else
    {
        if (jugadaMaquina == 1)
            cout << "La piedra rompe la tijera. PERDISTE :(" << endl;
        else if (jugadaMaquina == 2)
            cout << "La tijera corta el papel, GANASTE  !! :)" << endl;
        else
            cout << "Ambos juegan tijera, hay EMPATE!" << endl;
        
    }

    return 0;
}


