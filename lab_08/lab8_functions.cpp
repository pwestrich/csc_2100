//This file contains all of the functions.

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
     
     if (isPrime == true)
          return true;
     else
          return false;

}

int reverse(int number){
     
     int answer = 0;
     
     bool done = false;
     
     while (!done){
          
          answer = answer * 10;
          
          answer += number % 10;
          number = number / 10;
          
          if (number == 0){
               
               done = true;
          }
     }
     
     return answer;
}

bool isPalendrome(int number){
     
     int reversedNum = reverse(number);
     
     if (number == reversedNum)
          return true;
     else
          return false;

}
