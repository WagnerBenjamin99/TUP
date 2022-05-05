

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int pozo_inicial, apuesta;
    int pozo_final;
    int jugadaMaquina;
    int jugada_player;

    cout << "Con cuantas fichas desea empezar?: ";
    cin >> pozo_inicial;
    
    pozo_final = pozo_inicial;
    
    while (pozo_final != 0 && pozo_final != 2 * pozo_inicial)
    {
        jugadaMaquina = rand() % 3 + 1; //genero jugada de la maquina aleatoriamente
        cout << "Bienvenido al piedra papel o tijera " << endl << endl;
        cout << "Usted tiene " << pozo_final << " fichas " << endl << endl;
        cout << "Cuantas fichas desea apostar?: ";
        cin >> apuesta;
        if (apuesta > pozo_final)
            cout << "No puede apostar mas fichas de las que tiene " << endl;
        else
        {
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
                {
                    cout << "Ambos jugador Piedra, EMPATE!" << endl;
                }
                else if (jugadaMaquina == 2)
                {
                    cout << "Papel envuelve a la piedra, PERDISTE :(" << endl;
                    pozo_final -= apuesta;
                }

                else
                {
                    cout << "La piedra rompe la tijera, GANASTE!!! :)" << endl;
                    pozo_final += apuesta;
                }

            }
            else if (jugada_player == 2)
            {
                if (jugadaMaquina == 1)
                {
                    cout << "La piedra envuelve al papel, GANASTE!! :)" << endl;
                    pozo_final += apuesta;
                }
                else if (jugadaMaquina == 2)
                {
                    cout << "Ambos jugan Papel, hay EMPATE! " << endl;
                }
                else
                {
                    cout << "Tijera corta papel, PERDISTE :(" << endl;
                    pozo_final -= apuesta;
                }
            }
            else
            {
                if (jugadaMaquina == 1)
                {
                    cout << "La piedra rompe la tijera. PERDISTE :(" << endl;
                    pozo_final -= apuesta;
                }
                else if (jugadaMaquina == 2)
                {
                    cout << "La tijera corta el papel, GANASTE  !! :)" << endl;
                    pozo_final += apuesta;
                }
                else
                {
                    cout << "Ambos juegan tijera, hay EMPATE!" << endl;
                }
            }
            if (pozo_final == 0)
            {
                cout << "TE QUEDASTE SIN FICHAS :( " << endl;
            }
            else if (pozo_final >= 2 * pozo_inicial)
            {
                cout << "Duplicaste tu pozo inicial, el juego termina !! " << endl;
            }
        }
    }
}


