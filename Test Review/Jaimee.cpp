/*
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
