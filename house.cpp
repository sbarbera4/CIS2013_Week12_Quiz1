#include <iostream>
#include <cstring>

using namespace std;

class house
{
public:
	string color;
	int year;
	int garage;
	int window;
	int door;

	void print()
	{
		cout << "house color: " << color << endl;
		cout << "year built: " << year << endl;
		cout << "car ports: " << garage << endl;
		cout << "number of windows: " << window << endl;
		cout << "number of doors: " << door << endl;
	}
};

int main()
{
	house a;
	char print;

	cout << "hello, please enter the following variables to make your house." << endl;
	cout << "what is the house color? " << endl;
	cin >> a.color;
	cout << "what year was the house built? " << endl;
	cin >> a.year;
	cout << "how many car ports are there? " << endl;
	cin >> a.garage;
	cout << "how many windows are there? " << endl;
	cin >> a.window;
	cout << "how many doors are there? " << endl;
	cin >> a.door;

	cout << "would you like to print this house? Y/N " << endl;
	cin >> print;

	if (print == 'y' || 'Y')
	{
		a.print();
	}
	return 0;
}