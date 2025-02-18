#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
/*********************************/

//Illustrating assignment and operations

/*********************************/



int main1()
{
	int i = 2, j = 99;
	int ans;
	i = i + 1;
	i++;
	i = 5;
	j = 9;
	i = i - 1;
	i--;
	j--;
	ans = i + j;
	ans = i++ + j;
	ans = ++i + j;
	ans = i-- + j;
	ans = --i + j;
	ans += 2;
	ans *= 2;
	ans += j + 2 * i;
	return 0;

}