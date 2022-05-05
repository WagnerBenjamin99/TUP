/*
* Nombre  : Ahorcado.cpp
* Programa: Juego clasico adivinar palabra
* Autor   : Wagner Benjamin
* Email   : benjaminwagner19@outlook.com
* Fecha   : 04/05/2022
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    srand(time(NULL));
    string palabrasRandom[10] = { "Casa", "UTN", "Programacion", "Patio", "Arbol", "Internet", "Boliche", "Futbol", "Computadora", "Correr" };
    string palbraSecreta = palabrasRandom[rand() % 10];
    string * progreso;
    char letraUsuario;
    int i, vidas = 5;
    int contador = 0, contadorProgreso=0;
    string enterKey;

    cout << " ------------------------------------" << endl;
    cout << "| Bienvenido al juego del ahorcado!! | " << endl;
    cout << "| Usted debe adivinar la palabra     | " << endl;
    cout << "| Tiene 5 vidas :)                   |" << endl;
    cout << " ------------------------------------ " << endl;
    cout << "Presione enter para comenzar: ";
    getline(cin, enterKey);
    system("cls");

   
    //genero string dinamico para ir almacenando letras adivinadas
    progreso = new string[palbraSecreta.size()];
    
    for (i = 0; i < palbraSecreta.size(); i++)
    {
        progreso[i] = "-";
    } 
   
    while (vidas != 0)
    {
        //contador de vidas
        cout << endl;
        cout << " ----------"                      << endl;
        cout << "|" << " VIDAS: " << vidas << " | " << endl;
        cout << " ----------"                      << endl;
        cout << endl;

        for (i = 0; i < palbraSecreta.size(); i++)
        {
            //imprimo string con palabra oculta por "-"
            cout << progreso[i];
        }
        cout << endl;
        cout << "Que letra elije: ";
        cin >> letraUsuario;
        system("cls");
        
        
        contador = 0;
        for (i = 0; i < palbraSecreta.size(); i++)
        {
            //verifico si la letra ingresada esta en la palabra
            if (letraUsuario==palbraSecreta[i])
            {
                contador++; //cuenta cuantas veces esta le letra ingresada en la palabra oculta (se reinicia en cada ciclo while) 
                contadorProgreso++; //cuenta cuantas letras adiivina el usuario en todo el juego (no se reinicia)

                //reemplazo "-" por letra adivinada
                progreso[i] = letraUsuario;
            }
            else
            {
                //resto vida si la letra no esta en la palabra
                if(contador == 0 && i == palbraSecreta.size() - 1)
                      vidas -= 1;
        
            }
        }  
        if (contadorProgreso == palbraSecreta.size())
        {
            cout << endl;
            break;
        }
    }
    if (vidas == 0)
    {
        cout << "Lo siento usted gasto las 5 vidas :( " << endl;
        cout << "\t\t -- "  << endl;
        cout << "\t\t|  |"  << endl;
        cout << "\t\t|  O " << endl;
        cout << "\t\t| -|- "<< endl;
        cout << "\t\t|  -  "<< endl;
        cout << "\t\t| | |" << endl;
        cout << "\t\t|    " << endl;
        cout << "\t\t---    "<< endl;
    }
    else
    {
        cout << "Felicidades la palabra era " << palbraSecreta << ", usted gano :D " << endl;
        cout << "Y solo utilizo " << (5-vidas) << " vidas !!! " << endl;
    }
    
    
    return 0;
}


