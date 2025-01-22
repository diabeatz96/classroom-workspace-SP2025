#include<iostream>
#include<string>
using namespace std;
int main()
{
	int number;
	double value, x,  y; //8 bytes floating point
	char letter; //1 byte holds a character
	//ASCII
	letter = '9';
	letter = 'L';
	letter = '\t';
	letter = '+';
	cout << letter + 15; //58
	letter = 'a' + 1;
	cout << letter; //b
	//class not native to C++
	string name; //holds sequences of characters (literal strings"
	string message = "Have a nice day!";
	name = "Joe";
	cout << name << ' ' << message << endl; 



	return 0;

}