#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// 1. Type Conversions and Expressions
void typeConversions() {
    double d = 5.7;
    int i = 10;
    char c = 'A';

    // (int)c performs explicit type casting, converting 'A' to its ASCII integer value (65).
    // i / (int)c performs integer division: 10 / 65 = 0 (integer division truncates the decimal part).
    // d + 0 performs double addition: 5.7 + 0.0 = 5.7.  '0' is implicitly converted to a double.
    
    double number1 = 10.8;
    int number2 = (int)number1;
    double result = d + i / (int)c;

    cout << (int)c << endl;
    cout << number2 << endl;
    cout << "Type Conversions:" << endl;
    cout << "Result: " << result << " (double)" << endl;
    cout << endl;
}


// 2. Scope and Lifetime
// Global variable (accessible throughout the program)
int globalVar = 10;

void scopeLifetime() {
    // Local variable (only accessible within this function)
    int localVar = 5;



    cout << "Scope and Lifetime:" << endl;
    cout << "Local variable: " << localVar << endl;
    cout << "Global variable: " << globalVar << endl;

    // Modifying the global variable within the function
    globalVar = 20;  
    cout << "Global variable (modified in function): " << globalVar << endl;
    cout << endl;
}

int main() {
    typeConversions();

    scopeLifetime();

    cout << "Global variable (in main): " << globalVar << endl; // Global variable is modified.

    // localVar is not accessible here (outside its scope)
    // cout << "Local variable (in main): " << localVar << endl; // This would cause a compile-time error.

    // 3. Operator Precedence and Associativity
    int x = 5;
    int y = 10;
    int z = 2;

    // Order of operations:
    // 1. --y (pre-decrement): y becomes 9
    // 2. --y * z: 9 * 2 = 18
    // 3. 18 / 2: 18 / 2 = 9
    // 4. x++ (post-increment): x is used as 5 in the addition, then incremented to 6
    // 5. y % 3: 9 % 3 = 0
    // 6. 5 + 9 + 0 = 14
    int result = x++ + --y * z / 2 + y % 3;

    cout << "Operator Precedence and Associativity:" << endl;
    cout << "Result: " << result << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << endl;



    // 4. Compound Assignment and Side Effects
    int a = 10;
    a += 5;
    ////////
    a *= 5;
    a = a * 5;
    ////////
    a /= 5;
    a = a / 5;
    /////////
    a -= 5;
    a = a - 5;
    ///////
    
    // Equivalent to a = a + 5; a becomes 15
    a = a + 5; // Exact same thing

    cout << "Compound Assignment:" << endl;
    cout << "a += 5: " << a << endl;

    int b = 5;
    int c = b ++; // Post-increment: c gets the original value of b (5), then b is incremented to 6
    int d = ++b; // Pre-increment: b is incremented to 7 first, then d gets the new value (7)



    int num1 = 1;
    int num2 = num1;

    cout << num2 << endl;
    cout << num1 << endl;

    cout << "Side Effects:" << endl;
    cout << "b++: b=" << b << ", c=" << c << endl;
    cout << "++b: b=" << b << ", d=" << d << endl;



     // 5. Basic Usage of rand()

     cout << "Basic Usage of rand():" << endl;
     cout << rand() << " "; // Generates a pseudo-random integer
     cout << rand() << " "; // Generates another pseudo-random integer
     cout << rand() << " "; // And another
     cout << rand() << " ";
     cout << rand() << endl;
     // Notice that if you run the program multiple times, you'll get the SAME sequence of "random" numbers.
 
     // 2. Seeding the Random Number Generator with srand()
 
     // srand() sets the seed for the pseudo-random number generator.
     // If you use the same seed every time, you'll get the same sequence of "random" numbers.
     // To get different random numbers each time, you need to use a different seed.
 
     cout << "\nSeeding with a constant value (same sequence):" << endl;
     srand(123); // Seed with a constant value
     cout << rand() << " ";
     cout << rand() << " ";
     cout << rand() << " ";
     cout << rand() << " ";
     cout << rand() << endl;
 
 
     // 3. Using time() as a seed for truly random numbers
 
     // time(0) returns the current time in seconds since the epoch.  This is a good way to get a different seed each time the program runs.
 
     cout << "\nSeeding with time(0) (different sequence each run):" << endl;
     srand(time(0)); // Seed with the current time
     cout << rand() << " ";
     cout << rand() << " ";
     cout << rand() << " ";
     cout << rand() << " ";
     cout << rand() << endl;
 
     // 4. Generating numbers within a specific range
 
     // The modulo operator (%) can be used to restrict the range of the random numbers.
     // rand() % 10 will generate numbers between 0 and 9 (inclusive).
 
     int min = 10;
     int max = 20;
 
     // If you want a value between 1 and maximum you can do this:
                            // 0 - 19, 1 - 20
     int randomNumberTest = (rand() % max);
     // rand() % 100
     cout << randomNumberTest << endl;


     cout << "\nRandom numbers between " << min << " and " << max << ":"<< endl;
     // Generates random numbers between min and max (inclusive)
     int randomNumber = rand() % (max - min + 1) + min; 
     cout << randomNumber << " ";
     randomNumber = rand() % (max - min + 1) + min; 
     cout << randomNumber << " ";
     randomNumber = rand() % (max - min + 1) + min; 
     cout << randomNumber << " ";
     randomNumber = rand() % (max - min + 1) + min; 
     cout << randomNumber << " ";
     randomNumber = rand() % (max - min + 1) + min; 
     cout << randomNumber << endl;

     return 0;
 
     
}