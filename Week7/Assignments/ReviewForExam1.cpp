// study_questions_practice.cpp

#include <iostream>
#include <string>

using namespace std;

int main() {

    int limit = 15;
    int count = 0;
    int step = 3;
    while (count < limit) {
        cout << count << " ";
        count += step;
        if (count % 2 == 0) {
            step--;
        } else {
          step++;
        }
    }
    cout << endl;
 
    // A) Output Tracing: Loop and Arithmetic
    /*
    What is the output of the following code?
    #include <iostream>
    using namespace std;
    int main() {
        int limit = 15;
        int count = 0;
        int step = 3;
        while (count < limit) {
            cout << count << " ";
            count += step;
            // 10 
            // 
            if (count % 2 == 0) {
                step--;
            } else {
              step++;
            }
        }
        cout << endl;
        return 0;
    }
    */
    // Write the output here:
    // ...

    // B) Output Tracing: Boolean Logic and Conditionals
    /*
    What is the output of the following code?

    #include <iostream>
    using namespace std;
    int main() {
        bool flag = true;
        int x = 7;
        int y = 3;
        if (x > 5 && flag) {
            x = x - y;
            if (x < 5) {
                flag = false;
            }
        } else if (x < 5) {
            x = x + y;
        }
        cout << "x: " << x << " flag: " << (flag) << endl;
        if (!flag && x * 2 == 8 || x + y == 10) {
            cout << "Result 1";
        } else {
            cout << "Result 2";
        }
        cout << endl;
        return 0;
    }
    */
    // Write the output here:
    // ...

    // C) Short Answer Questions (Code Snippets)

    // a) Loop and Conditional: Print odd numbers and their cubes.
    /*
    Write the C++ code that prints out the odd numbers from 1 to 50 and their cubes (the number raised to the 3rd power) (Multipy same number 3 times).
     Your output should be in the format: number cube
    */
    // Write your code here:
    // ...

    // b) Input and Calculation: Calculate the total cost of items with a discount.
    /*
    Write the C++ code that prompts the user for the number of items purchased and the price per item.
    If the number of items is greater than 10, apply a 10% discount to the total cost. Print the final cost.
    */
    // Write your code here:
    // ...

    // c) Loop and Accumulation: Sum of multiples of 5.
    /*
    Write the C++ code that prompts the user to enter 20 integers.
    The code should calculate and print the sum of all integers that are multiples of 5.
    */
    // Write your code here:
    // ...

    // d) Character Comparison: Check if a character is a lowercase vowel.
    /*
    Given: char ch;
    Write the C++ code that prints out "Vowel!" if 'ch' is a lowercase vowel 
    (a, e, i, o, u). Otherwise, the code prints out "Not a vowel!".
    */
    // Write your code here:
    // ...

    // D) Full Program: Calculate the cost of a gym membership.
    /*
    Write a full C++ program, including comments, that calculates the cost of a gym membership. 
    The gym offers two membership options: Basic and Premium. The Basic membership costs $30 per month, and the Premium membership costs $50 per month. If the customer signs up for a year, they get a 15% discount on the total cost. The program should prompt the user for the membership type (Basic or Premium) and the number of months. It should then calculate and print the total cost.
    */
    // Write your full program here:
    // ...

    return 0;
}