// Hora actual - investigacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <time.h>
#include <string>
using namespace std;

void dayData()
{
    time_t now = time(0);
    struct tm hora;
    char buf[80];
    time(&now);
    localtime_s(&hora, &now);
    
    
    if (hora.tm_hour < 13)
    {
        cout << "Buenos dias " << endl;
    }
    else if(hora.tm_hour >= 13 && hora.tm_hour <= 20 )
    {
        cout << "Buenas tardes" << endl;
    }
    else
    {
        cout << "Buenas noches" << endl;
    }

    cout << "Son las " << hora.tm_hour << ":" << hora.tm_min << endl;
    
}
int main()
{
    
    
    dayData();
    
    return 0;
}


