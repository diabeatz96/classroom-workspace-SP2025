#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
     * Assignment: Mad Libs Generator
     *
     * **Instructions:**
     *
     *   1. **Teamwork:** Work in groups of 2-3 students.
     *   2. **Choose a Story:** Make a story template for your Mad Libs game.
     *      - Must include at least 10 words user input
     *      - Example: "The [adjective] [noun] [adverb] [verb]ed to the [place]."
     *   3. **Declare Variables:**
     *      - Declare string variables to store user input for each word in your story template
     *        (e.g., noun1, noun2, adjective1, verb, place).
     *   4. **Get User Input:**
     *      - Use 'cout' to prompt the user to enter the words for each variable.
     *      - Use 'cin' to read the user's input and store it in the corresponding variables.
     *   5. **Generate the Story:**
     *      - Use 'cout' to display the completed story, substituting the user's input
     *        into the appropriate places in the story template.
     *   6. **Submit:** Submit the completed C++ code file to Brightspace.
     *
     * **Bonus Points:**
     *   - Create a more creative and complex story template.
     *
     * **Winner:** The team with the most creative and well-implemented Mad Libs game
     *   will win the right to choose the Brightspace course background for one week!
     */
    cout << " There was a _____ who _____ and he was about to _____ which was very _____ however he _____ and made it. " << endl;
    
    string word1;
    string word2;
    string word3;
    string word4;
    string word5;
    string word6;

    cin >> word1;
    cin >> word2;
    cin >> word3;
    cin >> word4;
    cin >> word5;
    cin >> word6;

    cout << " there was a " + word1 + " who " + word2 + " and he was about to "+ word3+ " which was very " + word4 + " however he " + word5 + " amd made it.";


    

    return 0;
}