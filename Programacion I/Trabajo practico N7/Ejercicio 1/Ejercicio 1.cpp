

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double arg_x;
	double Heaviside = 0;

	cout << "Cual es el valor del argumento x?: ";
	cin >> arg_x;

	if (arg_x >= 0)
	{
		Heaviside = 1;
		cout << "g(x) = " << Heaviside << endl;
    }
	else
	{
		Heaviside = 0;
		cout << "g(x) = " << Heaviside << endl;
	}

	return 0;
}


