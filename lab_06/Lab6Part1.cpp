//Lab 6 Part 1
//by Philip Westrich
//Tuesday, October 9, 2012

#include <iostream>

int main(){
     
     for (int i = 1; i <= 9; i++){
          
          for (int j = 1; j <= i; j++){
               
               std::cout << j;
               
          }
          
          std::cout << std::endl;
          
     }
     
     return 0;
}