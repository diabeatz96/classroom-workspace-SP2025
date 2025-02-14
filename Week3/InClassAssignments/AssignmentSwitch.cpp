#include <iostream>
#include <string>
#include <ctime> // For generating random numbers
#include <cstdlib>

using namespace std;

int main() {

  // This program will simulate a simple magic 8-ball. 
  // The 8-ball will give you a random answer to your question.

  // 1. Declare a string variable to store the user's question. 
  string question; 

  // 2. Declare an integer variable to store the random answer.
  int randomAnswer; 

  // 3. Seed the random number generator.
  // https://cplusplus.com/reference/cstdlib/srand/
  // https://cplusplus.com/reference/cstdlib/rand/
  
  srand(time(0)); 
  
  // https://cplusplus.com/reference/string/string/getline/
  // https://cplusplus.com/reference/iostream/cin/
  // https://cplusplus.com/reference/iostream/cout/

  // 4. Prompt the user to enter their question.
  //    Use cout to display the message and getline(cin, question) to read the input.

  // 5. Generate a random number between 1 and 8 (or more if you add more answers).
  //    Use the rand() function and the modulo operator (%) to achieve this. 
  //    Store the result in the randomAnswer variable.

  // 6. Use a switch statement to determine the answer based on the random number:
  //    - Create cases for each possible random number.
  //    - Inside each case, use cout to display a different answer.
  //    - Add a default case to handle unexpected values.

  // 7. Run your program and test it with different questions. 
  //    Try to come up with unique and creative answers for the 8-ball.

  // 8. (Optional) Enhance your program by:
  //    - Displaying a simple graphical representation of the 8-ball before giving the answer.
  // 

  return 0;
}