/*
Complete the following tasks:

a) Declare and initialize variables:

firstName (string): Store the first name of a person (e.g., "John").
lastName (string): Store the last name of a person (e.g., "Doe").
age (int): Store the age of a person.
height (double): Store the height of a person in meters.
isEmployed (bool): Indicate whether the person is employed (true or false).
b) Print the values of all variables to the console using cout.

c) Modify the age variable by adding 5 to the current age.

d) Concatenate the firstName and lastName variables to create a full name string and print it.

e) Check the value of isEmployed and print an appropriate message (e.g., "Employed" or "Not Employed").

*/

// declare variables
// initalize variables

// int, bool, char, string, double - 
//

// https://www.w3schools.com/cpp/cpp_variables.asp


/*

Objective:

Write a C++ program that calculates and displays the average of five numbers entered by the user.

Instructions:

Input:

Prompt the user to enter five numbers one by one.
Store each number in a separate variable (e.g., num1, num2, num3, num4, num5).
Calculate the Average:

Calculate the sum of the five numbers.
Divide the sum by 5.
Output:

Display the calculated average to the console.
Example:

Input:

Enter number 1: 7
Enter number 2: 3
Enter number 3: 9
Enter number 4: 1
Enter number 5: 5
Output:

The average of the set is: 5

*/


#include <iostream>
#include <string>

using namespace std;

int main () {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    cout << "Enter 5, 1 digit numbers " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    // PEMDAS
    // Parentheses - Add all the numbers - then divide
    int sum = (num1+num2+num3+num4+num5) / 5;
    cout << "Your average is" << sum << endl;
    
    // int sum = 
    
}



// Question #1
    // string FName= "John";
    // string LName= "Doe";
    // int num = 17;
    // double myHeight = 1.8288;
    // bool isEmployed = true;
    // char myAlphabet = 'x';
    // cout << "My first name is " << FName << endl;
    // cout << "My last name is " << LName << endl;
    // cout << "My age is " << num << endl;
    // cout << "My fake height in meters is " << myHeight << endl;
    
    // num = num + 5;
    // cout << num << endl;
    // cout << FName + " " + LName;

    // if ( isEmployed == false ) {
    //     cout << "You are homeless " << endl;
        
    // } else if ( isEmployed == true ) {
    //     cout << "You live in a home " << endl;
        
    // }

    // if(num > 10) {
    //     cout << "Num greater than 10" << endl;
    // }