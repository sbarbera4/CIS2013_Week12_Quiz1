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
	int val;

	void print()
	{
		cout << " " << endl;
		cout << "house color: " << color << endl;
		cout << "year built: " << year << endl;
		cout << "car ports: " << garage << endl;
		cout << "number of windows: " << window << endl;
		cout << "number of doors: " << door << endl;
		cout << " " << endl;
	}

	void value()
	{
		cout << " " << endl;
		cout << "$"<< val << endl;
		cout << " " << endl;
	}
};

int main()
{
	house a;
	int print = 0;
	int stop = 0;
	int edit = 0;
	int printl = 0;

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

	cout << "if you would like to print this house please press 1. " << endl;
	cout << "if you would like to appraise this house please press 2. " << endl;
	cout << "if you would like to edit this house please press 3." << endl;
	cout << "if you would like to end this program please press 4." << endl;

	while (stop == 0)
	{
		printl = 0;
		cin >> print;

		if (print == 1)
		{
			a.print();
		}

		else if (print == 2)
		{
			a.val = (a.window + a.door + a.garage * 60000) + (a.year * 40);
			a.value();
		}
		else if (print == 3)
		{

			cout << "what would you like to edit? " << endl;
			cout << "color     [1]" << endl;
			cout << "year      [2]" << endl;
			cout << "car ports [3]" << endl;
			cout << "windows   [4]" << endl;
			cout << "doors     [5]" << endl;
			cout << "press 6 when you are done" << endl;

			
			
			while (printl == 0)
			{
				cin >> edit;

				if (edit == 1)
				{
					cout << "current color is: " << a.color << endl;
					cout << "what color would you like to make it?" << endl;
					cin >> a.color;
					cout << "color is now " << a.color << endl;
				}
				else if (edit == 2)
				{
					cout << "house was currently built in: " << a.year << endl;
					cout << "this makes the house " << (2018 - a.year) << " years old" << endl;
					cout << "what year would you prefer the house be built?" << endl;
					cin >> a.year;
					cout << "the house was now built in: " << a.year << endl;
				}
				else if (edit == 3)
				{
					cout << "there are currently " << a.garage << " car ports." << endl;
					cout << "how many would you like there to be?" << endl;
					cin >> a.garage;
					cout << "there are now " << a.garage << " car ports" << endl;
				}
				else if (edit == 4)
				{
					cout << "there are " << a.window << " windows" << endl;
					cout << "how many windows should there be? " << endl;
					cin >> a.window;
					cout << "there are now " << a.window << " windows" << endl;
				}
				else if (edit == 5)
				{
					cout << "there are " << a.door << " doors" << endl;
					cout << "how many doors should there be? " << endl;
					cin >> a.door;
					cout << "there are now " << a.door << " doors" << endl;
				}
				else if (edit == 6)
				{
					printl = 1;
				}
			}

		}
		else if (print == 4)
		{
			stop = 1;
		}
	}
	
	return 0;
}