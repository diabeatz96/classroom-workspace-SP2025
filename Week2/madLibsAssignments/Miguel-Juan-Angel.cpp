#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "A (noun) ";
    string noun_1;
    cin >> noun_1;
    cout << "was arrested for (reason) ";
    string verb_1;
    cin >> verb_1;
    cout << "and the " << noun_1 << " is being held in (location) ";
    string noun_2;
    cin >> noun_2;
    cout << "The " << noun_1 << " is set for trial in (month) ";
    string verb2;
    cin >> verb2;
    cout << "Now the " << noun_1 << " has to think whether to \"Escape\" or \"Stay\" on trail (choose) ";
    string input;
    cin >> input;
    if (input == "Stay") {
        cout << "The " << noun_1 << " stayed until their trial...." << endl;
        cout << "During the trial the " << noun_1 << " felt (emotion) ";
        string adjective1;
        cin >> adjective1;
        cout << "During their trial the " << noun_1 << " had his lawyer come in" << endl;
        cout << "The " << noun_1 << " lawyer was (\"Good\" or \"Bad\" (choose)) ";
        string input2;
        cin >> input2;
        if (input2 == "Good") {
            cout << "The Lawyer did a good job" << endl;
            cout << "You are now a free " << noun_1 << "!";
        }
        else if (input2 == "Bad") {
            cout << "The Lawyer had trouble defending you" << endl;
            cout << "You have been sentenced to life in prison!!";
        }
    }
    else if (input == "Escape") {
        cout << "Well done imbecile you escaped!!! Now what? " << endl;
        cout << "What place are you escaping to? ";
        string place_1;
        cin >> place_1;
        cout << "Doesn't seem like an interesting place. Now your are free!";


    }

    return 0;
}
