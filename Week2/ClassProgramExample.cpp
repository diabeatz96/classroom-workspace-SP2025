#include <iostream>
#include <string> // Include the string header for string variables

using namespace std;

int main() {
    /*
     * In-Class Explanation: C++ Variable Types
     *
     * Variables are like containers used to store data within a program. 
     * Each variable has a specific data type that determines the kind of 
     * information it can hold and how much memory it occupies.
     *
     * 1. **int:** 
     *    - Represents whole numbers (e.g., 10, -5, 0).
     *    - Used for counting, indexing, and other operations involving integers.
     *    - Example: 
     */
    int age = 25; 
    int score = 95; 
    cout << "Age: " << age << endl;
    cout << "Score: " << score << endl;

    /*
     * 2. **double:**
     *    - Represents real numbers with decimal points.
     *    - Used for calculations involving fractions, decimals, and more precise values.
     *    - Example:
     */
    double price = 9.99; 
    double pi = 3.14159;
    cout << "Price: " << price << endl;
    cout << "Pi: " << pi << endl;

    /*
     * 3. **char:**
     *    - Represents a single character (e.g., 'a', '!', '$').
     *    - Enclosed in single quotes.
     *    - Example:
     */
    char initial = 'J'; 
    char symbol = '%';
    cout << "Initial: " << initial << endl;
    cout << "Symbol: " << symbol << endl;

    /*
     * 4. **bool:**
     *    - Represents a logical value: either true or false.
     *    - Often used for conditions and decision-making in programs.
     *    - Example:
     */
    bool isStudent = true;
    bool isRaining = false;
    cout << "Is Student: " << isStudent << endl; 
    cout << "Is Raining: " << isRaining << endl; 

    /*
     * 5. **string:**
     *    - Represents a sequence of characters (e.g., "Hello", "world").
     *    - Enclosed in double quotes. 
     *    - Requires the <string> header: #include <string>
     *    - Example:
     */
    string name = "John Doe";
    string city = "New York";
    cout << "Name: " << name << endl;
    cout << "City: " << city << endl;

    return 0;
}