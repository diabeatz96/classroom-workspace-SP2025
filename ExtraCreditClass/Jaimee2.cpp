
// WHAT IS OUTPUTTED BY THIS CODE

// Q1:

// #include<iostream>

// using namespace std;

// int main()
// {

// // VARIABLES!!!
// int officeCapacity = 21;
// int office = 0; // 1
// int workers = 62;
// //

// // While the workers are greater than 0, I want you to keep looping this code over and over in between the braces.
// while (workers > 0)
// {
//     cout << "Assigning #" << office + 1 << " office\n";
//     workers -= officeCapacity; // 41 - 21
//     if (workers > 0)
//     cout << "Workers left: " << workers << endl;
//     office++;
// }

// return 0;
// }

// /*
// Write Answer Here:
//  Assign  1  office 
//  work left  41 

//   asssign 2 offfice
//   work left 20
 
//   asssign 3 office

//  work left-1
// */


// #include<iostream>

// using namespace std;

// int main()

// {

// bool discountAllowed = true; // it is now false
// int items = 4;
// double x = 4.5;


// if (items > 0 && discountAllowed) {
// items = items * 2; // 8i

//     if (items < 10) {
//         discountAllowed = false;
//     }

// } else if (items > 0) {
// items++;
// }

// cout << "Items: " << items << ' ' << items % 3 << ' ' << items / 3 << endl;

//     // true || false = true
// if ( (!discountAllowed && 6 - 1.5 == x)  || 6 + x == 0)
//     cout << "Good Day!";
// else
//     cout << "See you later!";
 

// return 0;

// }

// /*
// WRITE ANSWER HERE:
// items 8 2 2
//  good day
// */


#include <iostream>

using namespace std;

/*
    Write the C++ code that (50 times!) keeps prompting the user to enter an integer! The code prints all the integers that are EVEN.
*/


int main () {
    // I want to start at a number (part 1); I want to continue looping until this statement is not true;
    // I want to keep looping until i is not less than 10.
    // I want to increase it by one

    int x;

    for(int i = 0; i < 50; i++) {
      cout<< "please  enter  number   " ;
      cin>> x ;
      if (x % 2 == 0) {
        cout << x;
      }
    } 

    

}


// #include <iostream>

// using namespace std;

// /*
//     Write the C++ code that (10 times!) That  prints all odd numbers.
// */



// }