//Lab 7 Part 2
//"Number Reverser"
//by Philip Westrich
//Tuesday, October 23, 2012

#include <iostream>

int reverse(int number);

int main(){
     
     int number = 0, answer = 0;
     
     std::cout << "Give me a positive integer, and I'll reverse him for you."
               << std::endl;
     
     do {
     
          std::cout << "Number: ";
          std::cin >> number;
          
     } while (number <= 0);
     
     answer = reverse(number);
     
     std::cout << "Answer: " << answer << std::endl;
     
     return 0;
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
