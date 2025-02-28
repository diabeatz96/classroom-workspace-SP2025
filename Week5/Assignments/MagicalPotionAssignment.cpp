#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Magical Mana Potion Brewer

    // --- Instructions ---

    // 1. Declare an integer variable 'ingredientCount' and initialize it with a random number between 10 and 20 (inclusive).
    //    - Use 'srand(time(0))' and 'rand() % 11 + 10' to generate the random number.
    //    - Include the necessary header files.

    // 2. Display a message to the user indicating the initial ingredient count.
    //    - Use 'cout' to print a message like "You have [ingredientCount] magical ingredients!".

    // 3. Create a 'while' loop that continues as long as 'ingredientCount' is greater than 0.
    //    - Inside the loop:
    //      - Print a message "Brewing a mana potion...".
    //      - Decrement 'ingredientCount' by 1 (one ingredient per potion).
    //      - Print the remaining ingredient count using 'cout' like "Ingredients remaining: [ingredientCount]".

    // 4. After the loop finishes, print a message "You've run out of magical ingredients!".

    // --- End of Instructions ---

    return 0;
}