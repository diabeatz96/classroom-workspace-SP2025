#include <iostream>

using namespace std;

int main() {

    // Example 1: Simple if statement
    // This if statement checks if the age is greater than or equal to 18. 
    // If the condition is true, it prints "You are an adult."
    int age = 17;
    // <, >, <=, >=, ==, !=
    if (age != 18) { 
        cout << "You are not an adult." << endl; 
    }

    string password = "adam1234";
    
    if (password == "adam123") {
        cout << "Succesfully login" << endl;
    } else {
        cout << "Invalid password" << endl;
    }

    // Example 2: If-Else statement
    // This if-else statement checks if a number is positive.
    // If the number is greater than 0, it prints "positive".
    // Otherwise, it prints "not positive".
    int number = 0;
    if (number > 0) {
        cout << number << " is positive." << endl;
    } else if (number == 0) {
        cout << number << " is zero." << endl;
    } else {
        cout << number << " is negative." << endl;
    }

    // Example 4: Using logical AND (&&) operator
    // This example demonstrates the use of the logical AND (&&) operator.
    // The condition is true only if both x and y are greater than 0.
    int x = 10, y = 5;
    if (x > 0 && y > 0) {
        cout << "Both x and y are positive." << endl;
    }

    // Example 5: Using logical OR (||) operator
    // This example demonstrates the use of the logical OR (||) operator.
    // The condition is true if either isRaining or isSunny is true.
    bool isRaining = true;
    bool isSunny = false;
    if (isRaining || isSunny) {
        cout << "It's either raining or sunny (or both)." << endl;
    }

    return 0;
}