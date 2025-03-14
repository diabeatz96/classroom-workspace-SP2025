#include <iostream>
#include <string>

using namespace std; // Using the standard namespace for brevity

// Function Declaration (Prototype) (Function Signature):
// This tells the compiler that a function named 'greet' exists,
// what type of data it returns (void means it doesn't return anything),
// and what type of data it takes as input (a string called 'name').
void greet(string);

// Function Declaration (Prototype) for addition (Function Signature):
int add(int, int);
// -- square(int, int)

// Function Declaration (Prototype) for checking if a number is even:
bool isEven(int);

int main() {
    // Calling the 'greet' function with the argument "Alice".
    // This executes the code inside the 'greet' function.
    greet("Alice");
    greet("Bob");
    greet("Charlie");
    greet("Adam");

    // Calling the 'add' function and storing the result in the 'sum' variable.
    int sum = add(100, 50);

    cout << "The sum of 100 and 50 is: " << sum << endl;

    // Calling the 'isEven' function and using the result in an if statement.
    if (isEven(10)) {
        cout << "10 is even." << endl;
    } else {
        cout << "10 is odd." << endl;
    }

    if (isEven(7)) {
        cout << "7 is even." << endl;
    } else {
        cout << "7 is odd." << endl;
    }

    return 0; // Indicates successful program execution.
}

// Function Definition:
// This is where the actual code of the 'greet' function is written.
// It takes a string 'name' as input and prints a greeting message.
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

// Function Definition for addition:
// This function takes two integers 'a' and 'b' as input and returns their sum.
// int sum = add(5, 3);

int add(int a, int b) {
    return a + b;
}

// Function definition for checking if a number is even:
// This function takes an integer 'number' as input and returns true if it is even, false otherwise.
bool isEven(int number) {
    return (number % 2 == 0); // The modulo operator (%) gives the remainder.
}