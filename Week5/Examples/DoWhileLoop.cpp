#include <iostream>

using namespace std;

int main() {
    const double PI = 3.14159;
    const int MAX_TEMPERATURE = 10;

    int choice;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Say Hello" << endl;
        cout << "2. Say Goodbye" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Hello!" << endl;
                break;
            case 2:
                cout << "Goodbye!" << endl;
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 3);

    int positiveNumber;
    do {
        cout << "\nEnter a positive integer: ";
        cin >> positiveNumber;
    } while (positiveNumber <= 0);
    
    cout << "You entered: " << positiveNumber << endl;

    return 0;
}