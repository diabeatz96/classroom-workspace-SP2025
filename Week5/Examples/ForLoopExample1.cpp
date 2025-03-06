#include <iostream>

using namespace std;

int main() {
    // Demonstrating for and while loops

    // // 1. for loop: Counting from 1 to 5
    // cout << "For loop: Counting from 1 to 5" << endl;
    // for (int i = 1; i <= 5; i = i + 2) {
    //     cout << i << " " << endl;   
    // }

    bool secretAnswer = false;
    string secretString = "";

    while(secretAnswer == false) {
        cout << "Enter secret answer:";
        cin >> secretString;

        if(secretString == "gd5") {
            secretAnswer = true;
        }
    
    }

    cout << endl;
    cout << "After the loop";


}