//Lab 7 Pert 1
//"POW!"
//by Philip Westrich
//Tuesday, October 23, 2012

#include <iostream>

double pow(double base, int power);

int main(){
     
     double base = 0.0, answer = 0.0;
     int power = 0;
     
     std::cout << "If you give me a base and a power, I will calculate it."
               << std::endl;
     
     std::cout << "Please enter positive numbers only" << std::endl;
     
     do {
     
          std::cout << "Base: ";
          std::cin >> base;
     
          std::cout << "Power: ";
          std::cin >> power;
          
     } while (base <= 0.0 || power <= 0);
     
     answer = pow(base, power);
     
     std::cout << std::showpoint << "The answer is: "
     << answer << std::endl;
     
     return 0;
}


double pow(double base, int power){
     
     double sum = 1.0;
     
     for (int i = 1; i <= power; i++){
          
          sum = sum * base;
     }
     
     return sum;
}