//Lab 10 Part 1
//by Philip Westrich
//CSC 2101
//Tuesday, November 13, 2012

#include <iostream>

void oddOrEven(int x[], int count, int& numEven, int& numOdd);

int main(){
     
     int x[12] = {11, 2, 56, 77, 205, 200, 30, 43, 6, 35, 9, 19};
     
     int count = 12;
     
     int numOdd = 0; // Variable to store number of odd integers;
     
     int numEven = 0; // Variable to store number of even integers;
     
     oddOrEven(x, count, numEven, numOdd);
     
     std::cout << "Number of odd integers: " << numOdd << std::endl;
     
     std::cout << "Number of even integers: " << numEven << std::endl;

     
}

void oddOrEven(int x[], int count, int& numEven, int& numOdd){
     
     for (int i = 0; i < count; i++){
          
          if (x[i] % 2 == 0){
               
               numEven++;
               
          }
          
          else {
               
               numOdd++;
               
          }
          
     }
     
}
