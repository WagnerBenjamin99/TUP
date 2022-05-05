#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int arrContadores[10] = { };
    int arrNumeros[10];
    int i, j;
    double probabilidad = 0;

    for (i = 0; i < 10; i++)
    {
        arrNumeros[i] = rand() % 10;
        cout << arrNumeros[i] << "  ";
    }
    cout << endl;
    for (j = 0; j < 10; j++)
    {
        ;
        for (i = 0; i < 10; i++)
        {
           
            if (j == arrNumeros[i])
            {
                
                arrContadores[j] = arrContadores[j] + 1;

            };
            
        }
        probabilidad = arrContadores[j];
        cout << "El numero " << j << " salio " << arrContadores[j] << " veces" << endl;
        cout << "La probabilidad de que salga es de " << (probabilidad/10)*100 <<"%\n" << endl;
    }

}


