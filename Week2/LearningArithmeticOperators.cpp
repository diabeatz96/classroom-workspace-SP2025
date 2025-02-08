#include <iostream>

using namespace std;

int main() {
    /*
     * 
     * Arithmetic operators are fundamental in programming for performing mathematical calculations. 
     * They allow you to manipulate numerical values and perform operations such as addition, subtraction, 
     * multiplication, division, and finding the remainder.
     *
     * Concept:
     * 
     * C++ provides a set of arithmetic operators to perform these calculations. 
     * 
     * - **Addition (`+`)**: Adds two operands.
     * - **Subtraction (`-`)**: Subtracts the second operand from the first.
     * - **Multiplication (`*`)**: Multiplies two operands.
     * - **Division (`/`)**: Divides the first operand by the second. 
     *     - Integer division results in an integer (discards any fractional part).
     *     - Floating-point division (using `double`) results in a real number.
     * - **Modulus (`%`)**: Returns the remainder after integer division.
     * 
     * This code demonstrates the use of arithmetic operators in C++.
     */

    int num1 = 10;
    int num2 = 5;

    // Addition
    int sum = num1 + num2;
    cout << "Addition: " << num1 << " + " << num2 << " = " << sum << endl;

    // Subtraction
    int difference = num1 - num2;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << difference << endl;

    // Multiplication
    int product = num1 * num2;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << product << endl;

    // Division (integer division)
    int quotient = num1 / num2; 
    cout << "Integer Division: " << num1 << " / " << num2 << " = " << quotient << endl; 

    // Modulus (remainder)
    /*
        100
        ---
        10

        
    
    */
    int remainder = num1 % num2;
    cout << "Modulus: " << num1 << " % " << num2 << " = " << remainder << endl;

    return 0;
}