#include <iostream> 

using namespace std;

int main() {
  // cin (character input) is an object used to read input from the user.
  // It's like a stream that receives data from the user's input.

  int age; 
  cout << "Enter your age: "; 
  cin >> age; // Read the user's input and store it in the 'age' variable

  cout << "You are " << age << " years old." << endl;

  return 0;
}