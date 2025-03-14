
// WHAT IS OUTPUTTED BY THIS CODE

// Q1:

// #include<iostream>

// using namespace std;

// int main()
// {
    
// int officeCapacity = 21;
// int office = 0;
// int workers = 62;
//        // - 10 / 0
// while (workers > 0)
// {
//     cout << "Assigning #" << office + 1 << " office\n";
//     workers -= officeCapacity; // 62 - 21 
//     // 41
//     // -1 
//     if (workers > 0)
//     cout << "Workers left: " << workers << endl;
//     // 0 + 1 = office = 1
//     office++;
// }

// return 0;
// }

// /*
// Write Answer Here:
// assigning # 1 office 
// Workers left 41

// Write Answer Here:
// assigning # 2 office 
// Workers left 20

// Write Answer Here:
// assigning # 3 office 

// */


// #include<iostream>

// using namespace std;

// int main()

// {

// bool discountAllowed = true; // false
// int items = 4;
// double x = 4.5;


// if (items > 0 && discountAllowed) {
// items = items * 2; // 8

//     if (items < 10) {
//         discountAllowed = false;
//     }

// } else if (items > 0) {
// items++;
// }

// cout << "Items: " << items << ' ' << items % 3 << ' ' << items / 3 << endl;
// if ((!discountAllowed && 6 - 1.5 == x)  || 6 + x == 0)
//     cout << "Good Day!";
// else
//     cout << "See you later!";


// return 0;

// }

// /*
// WRITE ANSWER HERE:

// Items:8 2 2
// Good day


// */


// #include <iostream>

// using namespace std;

// /*
//     Write the C++ code that (50 times!) keeps prompting the user to enter an integer! The code prints out the sum of all the integers that are EVEN.
// */

// int main () {
//     int num;
//     int sum;

//     for( int i = 0;i <=50;i++){
//         cout << "Please enter an integer!" << endl;
//         cin >> num;
//         if (num % 2 == 0) {
//           sum += num;      
//         }
//     }
// cout << "This is the sum of the even numbers" << sum << endl;

    

// }


// #include <iostream>

// using namespace std;

// /*
//     Write the C++ code that (10 times!) That  prints all odd numbers.
// */

// int main () {
//     int num;
//     int sum;
//     int oddNum;
//         // 0 // UNTIL THIS IS FALSE, WE KEEP RUNNING THE LOOP UNTIL I IS NOT <= 10 WE KEEP LOOPING
                
//     for( int i = 1; i < 200; i++){
//         oddNum = i;
//         if( oddNum % 2 != 0) {
//             cout << oddNum << endl;
//         } else {
//             cout << "This is an even number" << i << endl;
//         }

        
//     }

//     return 0;

// }