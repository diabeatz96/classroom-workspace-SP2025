#include <iostream>

using namespace std;

int main() {
    /* 
     * Introduction to cout 
     * This section demonstrates the use of the 'cout' object to display output on the console. 
     * 
     * 'cout' is used to send data to the standard output stream (typically the screen). 
     * You can use 'cout' to display text, numbers, and the values of variables. 
     * 
     * 'cout' supports various formatting options, such as:
     *     - '\n': Inserts a newline character, moving the cursor to the next line.
     *     - '\t': Inserts a tab character, adding horizontal space. 
     *     - 'endl': Inserts a newline character and flushes the output buffer.
     * 
     */
    cout << "Hello, world!" << endl;
    cout <<"Anything you want that is not insane \t yooooo";
    cout<<"deku and luffy"<< endl;
    cout << "Toys";
    /* 
     * Variables
     * This section demonstrates the concept of variables in C++. 
     * 
     * Variables are named memory locations used to store data within a program. 
     * Each variable has a specific data type (e.g., integer, character, floating-point) 
     * that determines the type of data it can hold.
     * 
     * Declaring a variable involves specifying its data type and giving it a name. 
     * The value of a variable can be assigned during declaration or later in the program.
     */
    
    int age;
    age = 1000;
    age = 10;
    cout << "My age is: " << age << endl; 
    age = 30; 
    cout << "My new age is: " << age << endl; 
    int number;
    number = 500;
    cout << "My number is : " << (number + number) * number << endl;
    
    /* 
     * cin
     * This section demonstrates how to get input from the user using the 'cin' object.
     * 
     * 'cin' is used to read input from the standard input stream (typically the keyboard). 
     * It can be used to read values of different data types into variables. 
     */
    int userAge; 
    cout << "Enter your age: "; 
    cin >> userAge; 
    cout << "Your age is: " << userAge << endl; 



int money;
money = 50;
cout << "The amount of moeny I have is" << money << endl;
    return 0;
}
