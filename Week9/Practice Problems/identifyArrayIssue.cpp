#include <iostream>
#include <string>
using namespace std;

// Function to print an array of strings
void printAnimeList(const string animeList[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << animeList[i] << endl;
    }
}

// Function to add " (Subbed)" to the end of each anime name in the array
void addSubbedVersion(string animeList[], int size) {
    for (int i = 0; i < size; ++i) {
        animeList[i] += " (Subbed)"; 
    }
}

int main() {
    const int MAX_ANIME = 5;
    string animeNames[MAX_ANIME];
    string input;

    cout << "Enter " << MAX_ANIME << " anime names:" << endl;
    for (int i = 0; i < MAX_ANIME; ++i) {
        cout << "Anime " << i << ": ";
        getline(cin, animeNames[i]); 
    }
    
     for (int i = 0; i < MAX_ANIME; ++i) {
        if (animeNames[i].length() > 20) {
            cout << "Anime name too long: " << animeNames[i] << endl;
            animeNames[i] = ""; 
        }
    }

    cout << "\nList of anime names:" << endl;
    printAnimeList(animeNames, MAX_ANIME);

    addSubbedVersion(animeNames, MAX_ANIME);
    cout << "\nList of anime names after adding '(Subbed)':" << endl;
    printAnimeList(animeNames, MAX_ANIME); 
    
    string animeNames2[3] = {"Attack on Titan", "Fullmetal Alchemist", "Demon Slayer"};
    printAnimeList(animeNames2, 3); 
    
    int arr[3] = {1, 2, 3};
    cout << arr[2] << endl; 
    

    cout << animeNames[2] << endl; 

    return 0;
}
