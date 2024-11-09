#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	double v, t, a, S;

	cout << "Enter the speep \"v\":\n> ";
	cin >> v;

	cout << "Enter the time \"t\":\n> ";
	cin >> t;

	cout << "Enter the acceleration \"a\":\n> ";
	cin >> a;

	S = (v * t) + (a * pow(t, 2) / 2);

	cout << "\nDistance traveled: " << S << endl;
	_getch();

	return 0;
}