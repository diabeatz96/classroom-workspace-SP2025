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
    string vehicle;
    string place;
    string food;
    string game;
    string activity;
    string country;
    string air_vehicle;
    string kids_toy;
    string old_phone_type;
    string military_vehicle;

    cout << "Please input a vehicle (All Inputs require \"_\" for spaces): ";
    cin >> vehicle;
    cout << endl;
    cout << "Please input a place: ";
    cin >> place;
    cout << endl;
    cout << "Please input a kind of food: ";
    cin >> food;
    cout << endl;
    cout << "Please input a game: ";
    cin >> game;
    cout << endl;
    cout << "Please input an activity: ";
    cin >> activity;
    cout << endl;
    cout << "Please input a country: ";
    cin >> country;
    cout << endl;
    cout << "Please input an air vehicle: ";
    cin >> air_vehicle;
    cout << endl;
    cout << "Please input a kids toy: ";
    cin >> kids_toy;
    cout << endl;
    cout << "Please input a type of old phone: ";
    cin >> old_phone_type;
    cout << endl;
    cout << "Please input a military vehicle: ";
    cin >> military_vehicle;
    cout << endl;
 
    cout << "Me and my friend took our " << vehicle << " and went to the " << place << ". After we ate " << food << " and played " << game << ".\n";
    cout << "Soon after we started " << activity << ", but my friend lives in " << country << " and had to take his " << air_vehicle << " home.\n";
    cout << "On the ride he played with his " << kids_toy << " to cure his boredom. When he landed he called me on his " << old_phone_type << " and I told him I'll pick him up in my ";
    cout << military_vehicle;
	return 0;
}
/*OUTPUT:
Please input a vehicle (All Inputs require "_" for spaces): lamborghini_aventador

Please input a place: club

Please input a kind of food: fried_moose_knuckles

Please input a game: call_of_duty

Please input an activity: juggling

Please input a country: north_korea

Please input an air vehicle: paracopter

Please input a kids toy: thingamajig

Please input a type of old phone: nokia

Please input a military vehicle: tank

Me and my friend took our lamborghini_aventador and went to the club. After we ate fried_moose_knuckles and played call_of_duty.
Soon after we started juggling, but my friend lives in north_korea and had to take his paracopter home.
On the ride he played with his thingamajig to cure his boredom. When he landed he called me on his nokia and I told him i'll pick him up in my tank*/