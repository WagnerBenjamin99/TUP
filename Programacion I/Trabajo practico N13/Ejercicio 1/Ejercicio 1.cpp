

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int matriz[5][5];
    int i, j;
    int suma = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j] = 10 * (i + 1);
            cout << setw(6) << matriz[i][j];
            if ((i== 0 && j == 0) || (i == 0 && j==4))
            {
                suma += matriz[i][j];
            }
            else if((i == 4 && j == 0) || (i == 4 && j == 4))
            {
                suma += matriz[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "La suma de las esquinas es: " << suma << endl;


}


