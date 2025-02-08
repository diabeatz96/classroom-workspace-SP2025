#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    /*
     * iomanip Library Assignment
     *
     * 1. Declare a double variable named 'price' and initialize it with a value (e.g., 99.99).
     * 2. Display the price with two decimal places using `setprecision()`.
     * 3. Display the price with four decimal places using `setprecision()`.
     * 4. Declare an integer variable named 'id' and initialize it with a value (e.g., 12345).
     * 5. Display the 'id' with a field width of 10, right-aligned.
     * 6. Display the 'id' with a field width of 10, left-aligned.
     * 7. Display the 'id' with a field width of 10 and a fill character of '-' (hyphen).
     */

    // Your code here






	double name = 34.978;
	cout << "Price: " << name << fixed << setprecision(4) << endl;
    
    double names = 34.978;
	cout << "Price: " << names << fixed << setprecision(4) << endl;












    return 0;
}