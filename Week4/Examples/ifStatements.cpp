#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main2()
{
	int temp;
	cout << "Enter the high temp of the day: ";
	cin >> temp;
	//if the temp is 73 or more then turn on air
	if (temp >= 73)
	{
		cout << "open air!\n";
	}
	else
	{
		cout << "no airconditioning!\n";
	}

	//boss wants to make sure we 
	//don't sell alcohol to underage
	int age;
	cout << "Enter customer's age: ";
	cin >> age;
	if (age < 21)
	{
		cout << "Sorry, please come back in "
			<< 21 - age << " years!\n";
	}


	//how many bytes, what can it hold
	//how is it stored?
	//1 byte, either 0 (false) or 1 (true)
	bool scholarship = 1;
	scholarship = true;
	cout << scholarship;
	int credits = 40;
	double gpa = 3.3;
	scholarship = credits > 20;
	if (scholarship)
		cout << "YES COME TO ROOM 1A 108!\n";




	return 0;


}