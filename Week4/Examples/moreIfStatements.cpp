#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	int num;
	cout << "Enter an integer: ";
	cin >> num;

	if (num % 2 == 0)
		cout << "Even! ";
	else
		cout << "Odd! ";



	if (num % 2 != 1)
		cout << "Even! ";
	else
		cout << "Odd! ";


	//! flips true to false (1 to 0 ) and 
	//false to true (0 to 1)
	if (!(num % 2))
		cout << "Even! ";
	else
		cout << "Odd! ";

	//print if a number is negative or positive
	if (num < 0)
	{
		cout << "negative!";
	}
	else
	{
		if (num > 0)
			cout << "positive!";
	}

}