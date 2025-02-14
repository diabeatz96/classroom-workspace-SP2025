#include <iostream> 
#include <string>

using namespace std;

// This lesson covers basic C++ coding conventions and fundamental concepts.

// 1. Comments:
//    - Use comments to explain your code. 
//    - Single-line comments: // This is a single-line comment
//    - Multi-line comments: /* This is a 
//                              multi-line comment */

// 2. Naming Conventions:
//    - Use meaningful variable names (e.g., age, name, studentCount).
//    - Use camelCase for variables (e.g., firstName, lastName).
//    - Use uppercase for constants (e.g., PI = 3.14159).

// 3. Data Types:
//    - int: Stores whole numbers (e.g., age = 25).
//    - double: Stores real numbers with decimal points (e.g., price = 9.99).
//    - char: Stores a single character (e.g., initial = 'A').
//    - string: Stores a sequence of characters (e.g., name = "John Doe").
//    - bool: Stores a boolean value (true or false) (e.g., isStudent = true).

// 4. Input and Output:
//    - Use cout to print output to the console.
//    - Use cin to get input from the user.

// 5. Operators:
//    - Arithmetic operators: +, -, *, /, % (modulo)
//    - Assignment operator: =
//    - Comparison operators: == (equal to), != (not equal to), >, <, >=, <=
//    - Logical operators: && (and), || (or), ! (not)

// 6. Control Flow:
//    - if/else statements: Execute code based on a condition.
//    - Example:
//       if (age >= 18) {
//         cout << "You are an adult." << endl;
//       } else {
//         cout << "You are a minor." << endl;
//       }

int main() {

  // Example demonstrating some of the concepts:

  string firstName;
  string lastName;
  int age;

  cout << "Enter your first name: ";
  cin >> firstName;

  cout << "Enter your last name: ";
  cin >> lastName;

  cout << "Enter your age: ";
  cin >> age;

  cout << "Hello, " << firstName << " " << lastName << "!" << endl;

  // && is the logical AND operator
  // || is the logical OR operator
  // ! is the logical NOT operator
  bool isStudent = true;

  if (age >= 18) {
    cout << "You are old enough to vote." << endl;
  } else {
    cout << "You are not old enough to vote." << endl;
  }

  return 0;
}