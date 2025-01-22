#include<iostream>
#include<string>
using namespace std;
int main()
{
	//variables
	int items; //number of items purchased
	int coupons;
	//assign a value items = 7;
	//prompt the user
	cout << "How many items do you have? ";
	cin >> items;
	coupons = items / 7;
	cout << "Coupons awarded: " << coupons
		<< endl;
	int extra = items % 7;
	cout << "Get " << 7 - extra << " more item(s) "
		<< "for another coupon! " << endl;







	return 0;
}