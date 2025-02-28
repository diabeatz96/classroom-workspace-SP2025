#include <iostream>

using namespace std;

int main() {

    // Interactive Example 1: Counting Variations

    // a. Print only odd numbers from 1 to 10
    cout << "\nOdd numbers from 1 to 10:" << endl;
    for (int i = 1; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    // b. Print numbers from 10 to 1 (counting down)
    cout << "\nNumbers from 10 to 1 (counting down):" << endl;
    for (int i = 10; i >= 1; --i) {
        cout << i << " ";
    }
    cout << endl;

    // c. Print multiples of 5 up to 50
    cout << "\nMultiples of 5 up to 50:" << endl;
    for (int i = 5; i <= 50; i += 5) {
        cout << i << " ";
    }
    cout << endl;

    // Code-Along Challenge 1: Sum of Even Numbers

    int n, sum = 0;

    cout << "\nEnter a number (n): ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    cout << "The sum of even numbers up to " << n << " is: " << sum << endl;

    // Debugging Exercise: Incorrect Loop Condition (Example 1)
    cout << "\nDebugging Example 1: Incorrect Loop Condition" << endl;
    for (int i = 1; i < 5; ++i) { // Intentionally wrong. should be i <= 5 to print 1 to 5
        cout << i << " ";
    }
    cout << endl;

    // Debugging Exercise: Off-by-one error (Example 2)
    cout << "Debugging Example 2: Off-by-one error" << endl;
    for(int i = 0; i < 5; i++) { // Should be i <= 5 to print 1 to 5 if the intention was to print 1 to 5.
        cout << i + 1 << " ";
    }
    cout << endl;

    // Debugging Exercise: Accidentally initializing i to 1 instead of 2 (Example 3)
    cout << "Debugging Example 3: Accidentally initializing i to 1 instead of 2" << endl;
    sum = 0;
    cout << "Enter a number (n): ";
    cin >> n;

    for(int i = 1; i <= n; i+=2){ //should start at 2 to add even numbers.
        sum += i;
    }
    cout << "Sum of even numbers(with bug): "<< sum << endl;

    return 0;
}