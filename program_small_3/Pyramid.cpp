//Small Programming Assignment #3
//"Counting Pyramid"
//by Philip Westrich
//Tuesday, October 30, 2012

#include <iostream>
#include <iomanip>

void printPyramid(int);

int main(){
     
     int input = 0;
     
     std::cout << "This program will print out a number pyramid, "
               << "given a number of rows to print."
               << std::endl;
     
     while (input <= 0 || input > 15){
          
          std::cout << "Please enter a number from 1 to 15: ";
          std::cin >> input;
     }
     
     printPyramid(input);                                                       //Call function to print the pyramid
     
     return 0;
}

void printPyramid(int input){
     
     for (int line = 1; line <= input; line++){
          
          for (int spaces = input; spaces > line; spaces--){                    //Mechanism for centering the pyramid
               
               std::cout << "    ";
          }
          
          for (int number = line; number != 0; number--){                       //The numbers for the left half of the pyramid
               
               std::cout << std::setw(4) << number;
          }
          
          for (int number = 2; number <= line; number++){                       //The numbers for the right half of the pyramid
               
               std::cout << std::setw(4) << number;
          }
          
          std::cout << std::endl;                                               //Newline to make new levels of pyramid
          
     }
}
