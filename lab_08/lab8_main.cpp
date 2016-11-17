//Lab 8
//"Palendromic Prime Checker"
//by Philip Westrich
//Tuesday, October 30, 2012

#include <iostream>
#include "lab8.h"

int main(){
     
     std::cout << "This program will tell you if a number is a palendromic "
          << "prime or not." << std::endl;
     
     int input = 0;
     
     while (input <= 0){
          
          std::cout << "Please enter a positive integer: ";
          std::cin >> input;
     }
     
     if (!isPrime(input)){
          
          std::cout << "The number " << input << " is not prime." << std::endl;
          std::cout << "Goodbye." << std::endl;
          
          return 0;
     }
     
     if (!isPalendrome(input)){
          
          std::cout << "The number " << input << " is not a palendrome."
                    << std::endl;
          std::cout << "Goodbye." << std::endl;
          
          return 0;
     }
     
     std::cout << "Congratulations! The number " << input
               << " is a palendromic prime!" << std::endl;
     std::cout << "Goodbye." << std::endl;
     
     return 0;
     
}
