#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double R_0, R_1, R_2, R_3;

	cout << "Enter the value of three current resistances in series: " << endl;
	cin >> R_1 >> R_2 >> R_3;

	R_0 = 1 / (1 / R_1 + 1 / R_2 + 1 / R_3);

	cout << "\nYour result = " << R_0;
	_getch();

	return 0;
}