#include <iostream>

using namespace std;

int main() {
    // Code-Along Challenge 1: Sum of Even Numbers

    // --- Instructions for Students ---

    // 1. Declare two integer variables:
    //    - 'n' to store the user's input number.
    //    - 'sum' and initialize it to 0. This variable will accumulate the sum of even numbers.

    int sum = 0;
    int n;

    // 2. Prompt the user to enter a number (n).
    //    - Use 'cout' to display the message "Enter a number (n): ".
    //    - Use 'cin' to read the user's input and store it in the variable 'n'.

    cout << "Enter a number" << endl;
    cin >> n;
    
    // 3. Create a 'for' loop that does the following:
    //    - Initializes a loop counter 'i' to 2 (the first even number).
    //    - Continues as long as 'i' is less than or equal to 'n'.
    //    - Increments 'i' by 2 in each iteration (to get the next even number).

    for (int i = 2; i <= n ; i += 2) {
    // 4. Inside the loop, add the current value of 'i' to the 'sum' variable.
    //    - Use the '+=' operator to add 'i' to 'sum'.
    sum += i;
    cout << i << endl;
    }

    cout << "The sum of even numbers is: " << sum << endl;

    // 5. After the loop finishes, print the final value of 'sum'.
    //    - Use 'cout' to display the message "The sum of even numbers up to " followed by the value of 'n' and then " is: " followed by the value of 'sum'.



    return 0;
}