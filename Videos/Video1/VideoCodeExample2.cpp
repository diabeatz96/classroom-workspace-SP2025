#include <iostream> 

using namespace std; 

int main() {
  // cout (character output) is an object used to display output to the console.
  // It's like a stream where you "insert" data using the << operator.

  cout << "Hello, world!" << endl; // Print "Hello, world!" to the console and move to the next line

  // endl is a manipulator that inserts a newline character. 
  // This moves the cursor to the beginning of the next line.

  cout << "This is a single line." << endl; 
  cout << "This is another line." << endl;

  // Escape sequences allow you to include special characters within strings.
  cout << "This line contains a tab: \t now my selection is tabbed" << endl; // \t lets us create a tab.
  cout << "This line contains a newline within the string: \n" << endl; // \n will do the same thing as endl.

  cout << "Hello there!" << endl;
  
  return 0; // Indicate successful program execution
}