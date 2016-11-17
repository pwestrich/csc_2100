//CSC-2101
//Lab 3, Part 1
//Tuesday, September 18, 2012
//by Philip Westrich

#include <iostream>

int main(){
     
     long int number = 0;
     
     std::cout << "Enter any integer." << std::endl;
     std::cin >> number;
     
     if (number % 2 == 0){
          
          std::cout << "The output is: " << number << std::endl;
          
          return 0;
     }
     
     else if (number % 2 == 1){
          
          long int newnumber = number + 1;
          
          std::cout << "The output is: " << newnumber << std::endl;
          
          return 0;
          }
}