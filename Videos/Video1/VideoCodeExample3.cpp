#include <iostream>

using namespace std; 

int main() {
  // Variables are like containers that hold data.
  // They have a name and a data type.

  // Declare an integer variable named 'age'
  int age; 
  age = 30; // Assign the value 30 to the 'age' variable

  // Declare and initialize a double variable named 'price'
  double price = 19.99; 

  // Declare a character variable named 'initial'
  char initial = 'A';

  // Declare a string variable named 'name'
  string name = "John Doe"; 

  // Display the values of the variables
  cout << "Age: " << age << endl;
  cout << "Price: " << price << endl;
  cout << "Initial: " << initial << endl;
  cout << "Name: " << name << endl;

  // You can change the value of a variable later in the program
  age = 31; 
  cout << "New Age: " << age << endl;

  return 0; // Indicate successful execution
}