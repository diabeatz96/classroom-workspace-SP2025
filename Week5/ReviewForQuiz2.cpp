#include <iostream>

using namespace std;

int main() {
    // 1. Output Prediction: What is printed by the following code? Explain your reasoning step-by-step.
    int x = 10;
    char c = 'm';
    if (x > 0)
        cout << x << x << endl; // 1010
    else
        cout << c << c << endl;
    if (x > 10 || c == 'a')
        cout << x << c << endl;
    else
        cout << c << x << endl;
    if (x == 10) {
        x++; // x = x + 1;
        cout << x << endl;
    } else
        x--;
    cout << "Finally: " << x << ' ' << c << endl;

    // 1010
    // m10
    // 11
    // Finally 11 m
    
    // 2. Conditional Input and Output: Write the C++ code (does not need to be a full program, but declare all necessary variables!) that prompts the user for an integer. If the user input is NOT divisible by 10, the program prints "NO!"; otherwise, the program prints "YES!". Remember to use the modulo operator (%).
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    // 
    if (num % 10 != 0) {
        cout << "NO!" << endl;
    } else {
        cout << "YES!" << endl;
    }

    // 3. Boolean Expression Evaluation: Is the award true or false after the following code executes? Explain how you arrived at your answer.
    bool award;
    int classOf = 2028, credits = 34;
    award = (classOf == 2027 && credits > 40) || (classOf > 2027 && credits > 30);
                // false || true
    
                // 4. Boolean Logic and Comparisons: Given: int x; char z; double y; Assume all the variables have values, but we don’t know what they are.
    // Circle all the expressions below that are ALWAYS false (no matter what values the variables have):
    

    // a. x < 4 || x < 10  
    // b. z >= 'a' && z <= 'Z' number >= 95 and number <= 90 ALWAYS FALSE x = 1, y = 3,
    // c. x > y && x < y  number > number2 and number < number2 ALWAYS FALSE  x < 3, x > 3
    // d. x > 0 || x < 0 || x == 0 number is greater than or less than or equal to 0,  - 1 bil
    
    int x2;
    char z;
    double y;

    x2 = 2;
    x2 = 1000; 

    // 5. Conditional Execution and Variables: What is the output of the following code? 
    // Explain your reasoning.
    int num2 = 7;
    // 2 % 7 = 5, 1st number is less than the 2nd number 7 - 2 = 5
    // 7 % 2 = 1, REMAINDER = 1; 
    if (num2 % 2 == 0) {
        num2 += 5;
    } else {
        // 7 * 2 = 14
        num2 *= 2;
    }
    if (num2 > 10) {
        // 14 = 3 = 11
        cout << num2 - 3 << endl;
    } else {
        cout << num2 + 1 << endl;
    }

    // 11

    // 6. Modulo Operator and Divisibility: Write a C++ code snippet that prompts the user for an integer.
    // The program should then print "Divisible by 3 and 5" if the number is divisible by both 3 and 5. Otherwise, it should print "Not divisible by 3 and 5". Use the && operator in your condition.

    int newNumber; 
    cout << "Enter an integer here:" << endl; 
    cin >> newNumber;

    if( (newNumber % 3 == 0) && (newNumber % 5 == 0) ) {
        cout << "Is divisible by 3 and 5" << endl;
    } else {
        cout << "Is not divisible" << endl;
    }

    // 7. Boolean Logic and Operator Precedence: Evaluate the following Boolean expression. 
    // Is the result true or false? Explain the order of operations. bool result = true || false && true;

    // 
    bool result = true || false && true;
                     // false
    // 8. Comparison Operators and Ranges: Given an integer variable age, write a C++ condition
    //  that evaluates to true if age is between 13 and 19 (inclusive), 
    // and false otherwise. Use the appropriate comparison operators and the && operator.

    int age; 

    if (age >= 13 && age <= 19) {
        cout << "this is true";
    } else {
        cout << "this is false"
    }
    return 0;
}