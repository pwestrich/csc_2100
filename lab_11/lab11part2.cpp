//Lab 11 Part 2
//by Philip Westrich
//Tuesday, November 20, 2012

#include <iostream>

int main(){
     
     int array[10], *arrayPtr = array, input = 0, sum = 0;
     
     std::cout << "Please enter 10 integers." << std::endl;
     
     for (int i = 0; i < 10; i++){
          
          do{
          
               if (!std::cin){
                    
                    std::cin.clear();
                    std::cin.ignore(80, '\n');
                    std::cout << "Invalid input. Please try again." << std::endl;
               }
               
               std::cout << "Number " << (i + 1) << ": ";
               std::cin >> input;
               
          } while (!std::cin);
          
          array[i] = input;
          
     }
     
     std::cout << "You entered: " << std::endl;
     
     for (int i = 0; i < 10; i++){
          
          std::cout << *(arrayPtr + i) << std::endl;
          
          sum += *(arrayPtr + i);
     }
     
     std::cout << "And the sum of the above numbers is: " << sum << "." << std::endl;
     
     return 0;
     
}