#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Interactive Example 2: Number Guessing Game

    // --- Instructions for Students ---

    // 1. Generate a random number between 1 and 20 (inclusive).
    //    - Use 'srand(time(0))' to seed the random number generator.
    //    - Use 'rand() % 20 + 1' to generate a random number in the desired range.


    // 2. Declare variables:
    //    - 'guess' to store the user's guess.
    //    - 'guessesRemaining' and initialize it to 5 (or your chosen guess limit).


    // 3. Display a welcome message and instructions to the user.
    //    - Tell them the range of numbers and the number of guesses they have.


    // 4. Create a 'while' loop that does the following:
    //    - Continues as long as the user's 'guess' is not equal to the 'secretNumber'
    //      AND 'guessesRemaining' is greater than 0.
    

        // 5. Inside the loop, prompt the user to enter their guess.
        //    - Use 'cout' to display a message like "Enter your guess: ".
        //    - Use 'cin' to read the user's input and store it in the 'guess' variable.
    

        // 6. Check if the guess is correct.
        //    - If the guess is correct, print a "Congratulations!" message and exit the loop (using 'break').


        // 7. If the guess is incorrect, provide feedback.
        //    - If the guess is too high, print "Too high!".
        //    - If the guess is too low, print "Too low!".


        // 8. Decrement 'guessesRemaining' by 1.
   
        // 9. Display the number of remaining guesses.
       

        // 10. After the loop, check if the user ran out of guesses.
        //     - If 'guessesRemaining' is 0, print a "You ran out of guesses!" message and reveal the secret number.


        // --- End of Instructions ---

    return 0;
}