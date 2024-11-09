#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	const string MAGENTA = "\033[35m";
	const string YELLOW = "\033[33m";
	const string RESET = "\033[0m";

	cout << "Name \t\t\t:" << YELLOW << "\"The war and the peace\"" << RESET << endl;
	cout << "Avtor\t\t\t:  L.N.Tolstoj" << endl;
	cout << "Izdatelstvo\t\t: Piter" << endl;
	cout << "Pages\t\t\t:" << MAGENTA << "500" << RESET << endl;

	_getch();
	return 0;
}

// in case \t may appear differently in different environments

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	const string MAGENTA = "\033[35m";
	const string YELLOW = "\033[33m";
	const string RESET = "\033[0m";

	cout << "Name        :" << YELLOW << " \"The war and the peace\"" << RESET << endl;
	cout << "Avtor       :   L.N. Tolstoj" << endl;
	cout << "Izdatelstvo :  Piter" << endl;
	cout << "Pages       :" << MAGENTA << " 500" << RESET << endl;

	_getch();
	return 0;
}
