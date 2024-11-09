#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	const string YELLOW = "\033[33m";
	const string RESET = "\033[0m";
	
	//I didn’t want to write Russian verse in English letters. Output completely in English

	cout << YELLOW << "\a\a\aAn oak tree greening by the ocean," << endl;
	_getch();
	cout << "\a\a\aA golden chain about it wound," << endl;
	_getch();
	cout << "\a\a\aWhereon a learned cat, in motion" << endl;
	_getch();
	cout << "\a\a\aBoth day and night, will walk around," << endl;
	_getch();
	cout << "\a\a\aOn walking right, he sings a ditty," << endl;
	_getch();
	cout << "\a\a\aOn walking left, he tells a lay." << RESET << endl;
	_getch();

	return 0;
}