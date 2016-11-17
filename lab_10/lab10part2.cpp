//Lab 10 Part 2
//by Philip Westrich
//CSC 2101
//Tuesday, November 13, 2012

#include <iostream>

int findPrimes(int x[], int y[], int count);

bool isPrime(int);

int main() {
     
     int x[12] = {11, 2, 56, 131, 205, 71, 30, 43, 6, 35, 9, 19};
     
     //A 2nd array that stores the prime numbers from the 1st array x
     
     int y[12];
     
     // Variable that stores the number of prime integers that are in array x;
     
     int numPrime = findPrimes(x, y, 12);
     
     for (int i =0; i < numPrime; i++)
          
          std::cout << y[i] << " ";
     
     std::cout << std::endl;
     
}


int findPrimes(int x[], int y[], int count){
     
     int numPrime = 0;
     
     for (int i = 0; i < count; i++){
          
          if (isPrime(x[i])){
               
               y[numPrime] = x[i];
               
               numPrime++;
               
          }
          
     }
     
     return numPrime;
     
}


bool isPrime(int number){
     
     bool isPrime = true;
     
     int remainder = 0;
     
     for (int divisor = 2; divisor <= (number / 2); divisor++){
          
          remainder = number % divisor;
          
          if (remainder == 0){
               
               isPrime = false;
               
               break;
               
          }
          
     }
     
     return isPrime;
     
}
