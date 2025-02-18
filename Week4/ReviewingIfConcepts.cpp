#include <iostream>
#include <string>

using namespace std; // Added this line

int main() {
    // Boolean Variables
    bool hasLicense = true;
    bool hasInsurance = false;
    bool isRaining = true;
    bool isSunny = false;
    int age = 20;
    int temperature = 75;
    string name = "Alice"; // No more std::

    // && (AND) Operator
    cout << "\n--- AND Operator ---" << endl; // No more std::
    cout << "hasLicense && hasInsurance: " << (hasLicense && hasInsurance) << endl;
    cout << "age > 18 && hasLicense: " << (age > 18 && hasLicense) << endl;

    if (hasLicense && hasInsurance) {
        cout << "You can drive! (AND Example)" << endl;
    } else {
        cout << "You cannot drive. (AND Example)" << endl;
    }

    // || (OR) Operator
    cout << "\n--- OR Operator ---" << endl;
    cout << "isRaining || isSunny: " << (isRaining || isSunny) << endl;
    cout << "hasInsurance || age > 16: " << (hasInsurance || age > 16) << endl;
    if (isRaining || isSunny) {
        cout << "It's either raining or sunny (or both)! (OR Example)" << endl;
    }

    // ! (NOT) Operator
    cout << "\n--- NOT Operator ---" << endl;
    cout << "!hasLicense: " << !hasLicense << endl;
    cout << "!isRaining: " << !isRaining << endl;

    bool isLoggedIn = false;
    if (!isLoggedIn) {
        cout << "Please log in. (NOT Example)" << endl;
    }

    // Combining Operators and if/else if/else
    cout << "\n--- Combined Example & if/else if/else ---" << endl;

    if (age >= 18 && hasLicense) {
        cout << "Eligible to vote and drive." << endl;
    } else if (age >= 16 && !hasLicense) {
        cout << "Eligible for learner's permit but not a license." << endl;
    } else if (age < 16) {
        cout << "Too young to drive or vote." << endl;
    }

    if (temperature > 90) {
        cout << "It's hot outside!" << endl;
    } else if (temperature > 70 && !isRaining) {
        cout << "It's a pleasant day!" << endl;
    } else {
        cout << "It's not very warm." << endl;
    }

    // String Comparisons
    cout << "\n--- String Comparison ---" << endl;
    if (name == "Alice") {
        cout << "Hello, Alice!" << endl;
    } else {
        cout << "You're not Alice." << endl;
    }

    //Operator Precedence
    cout << "\n--- Operator Precedence ---" << endl;
    bool result = true && false || true;  // && has higher precedence than ||
    cout << "true && false || true: " << result << endl; //Output is 1 (true)

    result = true || true && false;
    cout << "true || true && false: " << result << endl; //Output is 1 (true)

    return 0;
}