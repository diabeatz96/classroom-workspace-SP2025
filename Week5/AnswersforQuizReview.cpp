#include <iostream>
#include <string> // For string comparisons in question 4

using namespace std;

int main() {
    // 1. Output Prediction
    int x = 10;
    char c = 'm';
    if (x > 0)
        cout << x << x << endl; // Output: 1010
    else
        cout << c << c << endl;
    if (x > 10 || c == 'a') // false || false
        cout << x << c << endl;
    else
        cout << c << x << endl; // Output: m10
    if (x == 10) { // true
        x++;
        cout << x << endl; // Output: 11
    } else
        x--;
    cout << "Finally: " << x << ' ' << c << endl; // Output: Finally: 11 m

    // Topics: Conditional statements (if-else), output (cout), variable assignment, increment operator (++)

    // 2. Conditional Input and Output
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num % 10 != 0) {
        cout << "NO!" << endl;
    } else {
        cout << "YES!" << endl;
    }

    // Topics: Input (cin), modulo operator (%), conditional statements

    // 3. Boolean Expression Evaluation
    bool award;
    int classOf = 2028, credits = 34;
    award = (classOf == 2027 && credits > 40) || (classOf > 2027 && credits > 30); // false || true = true
    cout << "Award: " << award << endl; // Output: Award: 1 (true)

    // Topics: Boolean variables, logical operators (&&, ||), comparison operators

    // 4. Boolean Logic and Comparisons
    // a. x < 4 || x < 10  ALWAYS true
    // b. z >= 'a' && z <= 'Z'  Can be true or false depending on z.
    // c. x > y && x < y  ALWAYS false
    // d. x > 0 || x < 0 || x == 0 ALWAYS true

    // Topics: Logical operators, comparison operators, character comparisons

    // 5. Conditional Execution and Variables
    int num2 = 7;
    if (num2 % 2 == 0) { // false
        num2 += 5;
    } else {
        num2 *= 2; // num2 becomes 14
    }
    if (num2 > 10) { // true
        cout << num2 - 3 << endl; // Output: 11
    } else {
        cout << num2 + 1 << endl;
    }

    // Topics: Conditional statements, modulo operator, arithmetic operators

    // 6. Modulo Operator and Divisibility
    int num3;
    cout << "Enter an integer: ";
    cin >> num3;
    if (num3 % 3 == 0 && num3 % 5 == 0) {
        cout << "Divisible by 3 and 5" << endl;
    } else {
        cout << "Not divisible by 3 and 5" << endl;
    }

    // Topics: Modulo operator, logical AND operator, conditional statements

    // 7. Boolean Logic and Operator Precedence
    bool result = true || false && true; // true || (false && true) = true || false = true
    cout << "Result: " << result << endl; // Output: Result: 1 (true)

    // Topics: Boolean operators, operator precedence (&& before ||)

    // 8. Comparison Operators and Ranges
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 13 && age <= 19) {
        cout << "Teenager" << endl;
    } else {
        cout << "Not a teenager" << endl;
    }

    // Topics: Comparison operators, logical AND operator, ranges, conditional statements

    return 0;
}