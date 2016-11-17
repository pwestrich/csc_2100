//Lab 5 Part 1
//Loop Practice
//by Philip Westric
//CSC-2101
//Tuesday, October 2, 2012

#include <iostream>

int main(){
     
     char choice = '0';
     
     std::cout << "1) Add Account"                     << std::endl;
     std::cout << "2) Edit Account"                    << std::endl;
     std::cout << "3) Display Account Information"     << std::endl;
     std::cout << "4) Exit"                            << std::endl;
     
     do {
          
          std::cout << "Enter your choice: ";
          std::cin >> choice;
          std::cin.ignore(80, '\n');
          
     } while (choice != '4');
     
     return 0;
}