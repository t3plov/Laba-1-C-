#include <iostream>

using namespace std;

int main()
{
	int year;

	cout << "Enter year:" << endl;
	cin >> year;

	if (cin.fail())
	{
		cout << "Incorect input" << endl;

		return 1;
	}

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	{
		cout << year << " is leap year" << endl;
	}
	else
	{
		cout << year << " is non-leap year" << endl;
	}
	return 0;
}