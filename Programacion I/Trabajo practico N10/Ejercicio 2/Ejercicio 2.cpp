
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int numeroSecreto, contador = 1;
    int numeroUsuario;

    numeroSecreto = rand() % 100;

    cout << "Adivine el numero secreto "   << endl;
    cout << "El numero esta entre 0 y 99 " << endl;
    cout << "Tiene 4 INTENTOS " << endl;
    cout << "COMENCEMOS : " << endl << endl;

    cout << numeroSecreto;

    while (contador <= 4)
    {
        
        cout << "Que numero elige?: ";
        cin >> numeroUsuario;

        if (contador == 4 && numeroUsuario != numeroSecreto)
        {
        cout << "\nNo te quedan mas intentos, perdiste :( " << endl;
        }
        else if (numeroUsuario == numeroSecreto)
        {
            cout << "\nFelicidades!! " << endl;
            cout << "Adivinaste en tan solo " << contador << " intentos." << endl;
            break;
        }
        else if (numeroUsuario < numeroSecreto)
        {
            cout << "Muy bajo!! " << endl << endl;
        }
        else if (numeroUsuario > numeroSecreto)
        {
            cout << "Muy alto!! " << endl << endl;
        }
        
        contador++;
    }


}

