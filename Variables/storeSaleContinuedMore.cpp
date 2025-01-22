#include<iostream>
#include<string>

using namespace std;
int main()
{
	//variables
	int items; //number of items purchased
	int freeItems;

	cout << "How many items do you have? ";
	cin >> items;
	
	freeItems = items / 8;

	return 0;
}