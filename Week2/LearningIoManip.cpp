#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    // Demonstrate setw() - set field width
    int number = 123;
    cout << "Number (default): " << number << endl; 
    cout << "Number (width 10): " << setw(10) << number << endl; 

    // Demonstrate setfill() - set fill character
    cout << setfill('*') << "Number (width 10): " << setw(10) << number << endl; 
    cout << setfill(' ') << "Number (width 10): " << setw(10) << number << endl; 

    // Demonstrate setprecision() - set floating-point precision
    double pi = 3.14159265;
    cout << "Pi (default precision): " << pi << endl;
    cout << "Pi (precision 2): " << fixed << setprecision(2) << pi << endl; 
    cout << "Pi (precision 4): " << fixed << setprecision(4) << pi << endl; 

    // Demonstrate left and right alignment
    string name = "John Doe";
    cout << left << setw(20) << name << " - Left aligned" << endl;
    cout << right << setw(20) << name << " - Right aligned" << endl;

    return 0;
}