#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
	const double pi = 3.14;
	double S, L, R;

	cout << "Enter the circumference length:\n> "; 
	cin >> L;

	R = L / (2 * pi);
	S = pi * pow(R, 2);

	cout << "\nThe area of the circle (S) is: " << S << endl;
	_getch();

	return 0;
}