/*

7) 
Write a full C++ program, including comments.

A video game awards a player a rank based on their score.

Write code that asks the user for their score. (Be sure to declare variables as needed.)

· If the score is 90 or higher
o print "Rank: Master"
· If the score is 60 to 89,
o print "Rank: Intermediate" AND
o add 5 to score.
· If the score is below 60
o print "Rank: Beginner"


*/
#include <stdio.h>
#include <iostream>

using namespace std;
int main() {
  int score ;
   cout<<  " pleuse  score ";
   cin >>  score;
   if ( score >= 90){
     cout<< " master";
   }else if ( score > 60 && score <= 89)
   {
      cout<< "Intermediate ";
   } else{
     cout << " beginning ";
   }

   

}
