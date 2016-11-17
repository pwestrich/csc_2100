//Lab 5 Part 2
//For-Loop Practice
//by Philip Westrich
//CSC-2101
//Tuesday, October 2, 2012

#include <iostream>

int main(){
     
     int count = 0;
     
     std::cout << "Please enter an integer between 1 and 30: ";
     std::cin >> count;
     std::cin.ignore(80, '\n');
     
     while (count <=1 || count >= 30){
          std::cout << "Invalid input! Please enter an integer between 1 and 30: ";
          std::cin >> count;
          
     }

     for (int i = 0; i < count; i++) {
          
          std::cout << "**";
          
     }
     
     std::cout << std::endl;
     
     return 0;
}
