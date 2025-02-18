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

// how to declare a variable
// how to initalize a variable
// starts with a data type, int, bool, char, string, or double
// int - whole numbers
// double - decimal numbers
// int number = 100;

// https://www.w3schools.com/cpp/cpp_variables.asp


#include <string>
#include <iostream>
using namespace std;
int main () {
/*

- firstName (string): Store the first name of a person (e.g., "John").
- lastName (string): Store the last name of a person (e.g., "Doe").
- age (int): Store the age of a person.
- height (double): Store the height of a person in meters.
- isEmployed (bool): Indicate whether the person is employed (true or false).

e\t ())jJaimee"";
string lastName("Morales");
int  age = 19;
double*/
// Type - Name - Value 
// string myName = "Jaimee"
string firstName= "Jaimee";
string lastName ="Morales";
int age = 19;
double height= 5.2;
// bool = true or false
bool food =  false;
// co<<ut << 
cout << age << endl;
cout << firstName << endl;
cout << food <<endl;
// true = 1, false = 0
cout<< lastName << endl;
cout << age <<  endl;
cin >> age;
cout << age;

// cin >> 
// cout <<
    return 0;
}