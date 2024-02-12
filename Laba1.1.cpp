#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
	float x;
	const float pi = 3.14;

	cout << "Enter x: " << endl;
	cin >> x;
	if (cin.fail())
	{
		cout << "Incorect input" << endl;

		return 1;
	}
	
	float Sq_of_circle = pow(pi, 2) * x;
	float Sq_of_square = pow(x, 2) / 2;
	
	cout << "Total square (x = "<< x << ") : " << Sq_of_circle - Sq_of_square << endl;

	return 0;
}
