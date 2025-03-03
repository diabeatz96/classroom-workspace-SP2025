#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Password Guessing Game (Do-While Loop)

    // --- Instructions ---

    // 1. Generate a random number between 1 and 100 (inclusive) and store it in an integer variable 'password'.
    //    - Use 'srand(time(0))' and 'rand() % 100 + 1' to generate the random number.
    //    - Include the necessary header files.

    // 2. Declare two integer variables:
    //    - 'guess' to store the user's guess.
    //    - 'attempts' and initialize it to 0.

    // 3. Declare an integer constant 'MAX_ATTEMPTS' and set it to 5. This represents the maximum number of guesses allowed.

    // 4. Display a welcome message and instructions to the user, including the range of the password and the maximum number of attempts.

    // 5. Create a 'do-while' loop that does the following:
    //    - Inside the loop:
    //      - Increment 'attempts' by 1.
    //      - Prompt the user to enter their guess.
    //      - Read the user's input and store it in the 'guess' variable.
    //      - If the 'guess' is equal to the 'password', print a "Congratulations!" message and exit the loop.
    //      - If the 'guess' is not equal to the 'password', provide feedback:
    //        - If the 'guess' is too high, print "Too high!".
    //        - If the 'guess' is too low, print "Too low!".
    //      - Print the number of attempts used so far.

    // 6. The loop should continue as long as the 'guess' is not equal to the 'password' AND 'attempts' is less than 'MAX_ATTEMPTS'.

    // 7. After the loop finishes, check if the user ran out of attempts.
    //    - If 'attempts' is equal to 'MAX_ATTEMPTS' AND the guess is not equal to the password, print a "You ran out of attempts!" message and reveal the password.

    // --- End of Instructions ---

    return 0;
}