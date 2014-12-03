/*

@author Logan Waldman
*/
#include <iostream>
#include <string>

#define AUTHOR "Logan Waldman"
using namespace std;
string _uName;
int main()
{
	cout << "Place your name here: ";
	getline(cin, _uName);
	if (_uName == AUTHOR)
	{
		cout << endl << "Welcome " << _uName;
	}
	cout << "hello" << endl;
	cout << _uName << endl << AUTHOR << endl;
	return 0;
}