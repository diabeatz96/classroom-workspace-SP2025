#include <iostream>

using namespace std;

int main() {
    // 1. Output Prediction: What is printed by the following code? Explain your reasoning step-by-step.
    int x = 10;
    char c = 'm';
    if (x > 0)
        cout << x << x << endl;
    else
        cout << c << c << endl;
    if (x > 10 || c == 'a')
        cout << x << c << endl;
    else
        cout << c << x << endl;
    if (x == 10) {
        x++;
        cout << x << endl;
    } else
        x--;
    cout << "Finally: " << x << ' ' << c << endl;

    // 2. Conditional Input and Output: Write the C++ code (does not need to be a full program, but declare all necessary variables!) that prompts the user for an integer. If the user input is NOT divisible by 10, the program prints "NO!"; otherwise, the program prints "YES!". Remember to use the modulo operator (%).
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num % 10 != 0) {
        cout << "NO!" << endl;
    } else {
        cout << "YES!" << endl;
    }

    // 3. Boolean Expression Evaluation: Is the award true or false after the following code executes? Explain how you arrived at your answer.
    bool award;
    int classOf = 2028, credits = 34;
    award = (classOf == 2027 && credits > 40) || (classOf > 2027 && credits > 30);

    // 4. Boolean Logic and Comparisons: Given: int x; char z; double y; Assume all the variables have values, but we don’t know what they are.
    // Circle all the expressions below that are ALWAYS false (no matter what values the variables have):
    // a. x < 4 || x < 10  
    // b. z >= 'a' && z <= 'Z'  
    // c. x > y && x < y  
    // d. x > 0 || x < 0 || x == 0
    
    int x2;
    char z;
    double y;

    // 5. Conditional Execution and Variables: What is the output of the following code? Explain your reasoning.
    int num2 = 7;
    if (num2 % 2 == 0) {
        num2 += 5;
    } else {
        num2 *= 2;
    }
    if (num2 > 10) {
        cout << num2 - 3 << endl;
    } else {
        cout << num2 + 1 << endl;
    }

    // 6. Modulo Operator and Divisibility: Write a C++ code snippet that prompts the user for an integer.
    // The program should then print "Divisible by 3 and 5" if the number is divisible by both 3 and 5. Otherwise, it should print "Not divisible by 3 and 5". Use the && operator in your condition.


    // 7. Boolean Logic and Operator Precedence: Evaluate the following Boolean expression. 
    // Is the result true or false? Explain the order of operations. bool result = true || false && true;

    bool result = true || false && true;

    // 8. Comparison Operators and Ranges: Given an integer variable age, write a C++ condition
    //  that evaluates to true if age is between 13 and 19 (inclusive), 
    // and false otherwise. Use the appropriate comparison operators and the && operator.

    return 0;
}