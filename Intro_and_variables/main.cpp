#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	const string YELLOW = "\033[33m";
	const string RESET = "\033[0m";
	
	//I didn’t want to write Russian verse in English letters. Output completely in English

	cout << YELLOW << "An oak tree greening by the ocean," << endl;
	cout << "A golden chain about it wound," << endl;
	cout << "Whereon a learned cat, in motion" << endl;
	cout << "Both day and night, will walk around," << endl;
	cout << "On walking right, he sings a ditty," << endl;
	cout << "On walking left, he tells a lay." << RESET << endl;

	_getch();
	return 0;
}