//Lab 6 Part 2
//"Prime Number Generator"
//by Philip Westrich
//Tuesday, October 10, 2012

#include <iostream>

int main(){
     
     int remainder = 0;
     int number = 2;
     int primesPrinted = 0;
     
     bool isPrime = true;
     
     do {
          
          for (int divisor = 2; divisor <= (number / 2); divisor++){
               
               remainder = number % divisor;
               
               if (remainder == 0){
                    
                    isPrime = false;
                    
                    break;
                    
               }
          }
          
          if (isPrime == true){
               
               std::cout << number << std::endl;
               
               primesPrinted++;
               
          }
          
          isPrime = true;
          
          number++;
          
          
     } while (primesPrinted <= 20);
     
     return 0;
}