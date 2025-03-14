// functions_assignments.cpp

#include <iostream>
#include <string>

using namespace std;

// Assignment 1: Write a function called 'square' that takes an integer as input
// and returns its square (the number multiplied by itself).
// Example: square(5) should return 25.
int square (int);

int square (int a){
    return a * a;
}

// string 
string concatenate(string a, string b){
    return a + b;
}
// Assignment 2: Write a function called 'concatenate' that takes two strings as input
// and returns a single string that is the result of joining the two input strings together.
// Example: concatenate("Hello", "World") should return "HelloWorld".

// Concatenate mean? (Add two  strings together)
// "Adam" "Muhammed" "Yolo" "We in there" "swag" "life" "MONEY"
// string name = "Adam";
// write a function returns a string, and adds two strings together.
// int square (int a) {  // return a * a;
// }

// Assignment 3: Write a function called 'max' that takes two integers as input
// and returns the larger of the two integers.
// Example: max(10, 5) should return 10.

// return-type name of function (type name, type name) {
//  
//
//}
int max(int a, int b){
    // a == b
    if (a > b){
        return a;
    }else{
        // a == b, a = b, printing b is same as printing max
        return b;
    }
}

int main() {

    string combinedWords = concatenate("Sauce", "Chicken");

    int maxNumber = max(10, 10);

    cout << maxNumber << endl;

    cout << combinedWords << endl;
    cout << concatenate("Hello", "world") << endl;
        
    cout << square(10) << endl;
    
    return 0;
}