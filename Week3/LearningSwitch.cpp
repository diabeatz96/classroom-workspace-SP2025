#include <iostream>

using namespace std;

int main() {
  int dayOfWeek;

  cout << "Enter the day of the week (1-7): ";
  cin >> dayOfWeek;

  cout << "PICK A GAME (1-4)";
  
  int videoGameNumber;
  cin >> videoGameNumber;

  switch(videoGameNumber) {
    case 1: 
      cout << "Marvel Rivals" << endl;
      break;
    case 2:
      cout << "Fortnite" << endl;
      break;
    case 3:
      cout << "Apex Legends" << endl;
      break;
    case 4:
      cout << "Halo 1000" << endl;
      break;
    default:
      cout << "Pacman" << endl;
      break;
    
  }
  // Switch case statement
  switch (dayOfWeek) { 
    // dayOfWeek == 1
    case 1: // If dayOfWeek is 1
      cout << "Today is Monday." << endl;
      break; // Exit the switch statement
    // dayOfWeek == 2
    case 2: // If dayOfWeek is 2
      cout << "Today is Tuesday." << endl;
      break; // Exit the switch statement
    case 3: // If dayOfWeek is 3
      cout << "Today is Wednesday." << endl;
      break; // Exit the switch statement
    case 4: // If dayOfWeek is 4
      cout << "Today is Thursday." << endl;
      break; // Exit the switch statement
    case 5: // If dayOfWeek is 5
      cout << "Today is Friday." << endl;
      break; // Exit the switch statement
    case 6: // If dayOfWeek is 6
      cout << "Today is Saturday." << endl;
      break; // Exit the switch statement
    case 7: // If dayOfWeek is 7
      cout << "Today is Sunday." << endl;
      break; // Exit the switch statement
    default: // If dayOfWeek doesn't match any case
      cout << "Invalid day of the week." << endl;
  }

  cout << "\nUsing if-else:\n";

  if (dayOfWeek == 1) {
    cout << "Today is Monday." << endl;
  } else if (dayOfWeek == 2) {
    cout << "Today is Tuesday." << endl;
  } else if (dayOfWeek == 3) {
    cout << "Today is Wednesday." << endl;
  } else if (dayOfWeek == 4) {
    cout << "Today is Thursday." << endl;
  } else if (dayOfWeek == 5) {
    cout << "Today is Friday." << endl;
  } else if (dayOfWeek == 6) {
    cout << "Today is Saturday." << endl;
  } else if (dayOfWeek == 7) {
    cout << "Today is Sunday." << endl;
  } else {
    cout << "Invalid day of the week." << endl;
  }

  return 0;
}