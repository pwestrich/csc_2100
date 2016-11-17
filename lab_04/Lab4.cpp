//Lab 4
//Tax Calculator
//by Philip Westrich
//Tuesday, September 25, 2012

#include <iostream>

int main(){
     
     const int SIZE = 81;
     int category = 0;
     long double income = 0, taxableIncome = 0;
     
     char name[SIZE];
     
     std::cout << "Tax Filing Categories:" << std::endl;
     std::cout << "1) Single" << std::endl;
     std::cout << "2) Married Filing Jointly" << std::endl;
     std::cout << std::endl;
     
     std::cout << "Your Tax Filing Category: ";
     std::cin >> category;
     std::cin.ignore(20, '\n');
     
     std::cout << "Your First and Last Name: ";
     std::cin.getline(name, SIZE);
     
     std::cout << "Your 2011 Taxable Income: ";
     std::cin >> income;
     
     if (category == 1){
          
          if (income > 60000){
               
               taxableIncome = income * .25;
               
               std::cout << name << ", your 2011 income tax is " << taxableIncome << " dollars." << std::endl;
               
               return 0;
          }
     
          else if (income > 40000){
               
               taxableIncome = income * .20;
               
               std::cout << name << ", your 2011 income tax is " << taxableIncome << " dollars." << std::endl;
               
               return 0;
          }
          
          else if (income > 10000){
               
               taxableIncome = income * .15;
               
               std::cout << name << ", your 2011 income tax is " << taxableIncome << " dollars." << std::endl;
               
               return 0;
          }
          
          else if (income > 0){
               
               taxableIncome = income * .10;
               
               std::cout << name << ", your 2011 income tax is " << taxableIncome << " dollars." << std::endl;
               
               return 0;
          }
          
          else if (income < 0){
               
               std::cout << "You can't have negative income! That's debt!" << std::endl;
               
               return 0;
          }
          
          else {
               
               std::cout << "Invalid input. Please try again." << std::endl;
               
               return 0;
          }
          
     }
     
     else if (category == 2){
          
          if (income > 150000){
               
               taxableIncome = income * .25;
               
               std::cout << name << ", your 2011 income tax is " << taxableIncome << " dollars." << std::endl;
               
               return 0;
          }
          
          else if (income > 60000){
               
               taxableIncome = income * .20;
               
               std::cout << name << ", your 2011 income tax is " << taxableIncome << " dollars." << std::endl;
               
               return 0;
          }
          
          else if (income > 20000){
               
               taxableIncome = income * .15;
               
               std::cout << name << ", your 2011 income tax is " << taxableIncome << " dollars." << std::endl;
               
               return 0;
          }
          
          else if (income > 0){
               
               taxableIncome = income * .10;
               
               std::cout << name << ", your 2011 income tax is " << taxableIncome << " dollars." << std::endl;
               
               return 0;
          }
          
          else if (income < 0){
               
               std::cout << "You can't have negative income! That's debt!" << std::endl;
               
               return 0;
          }
          
          else {
               
               std::cout << "Invalid input. Please try again." << std::endl;
               
               return 0;
          }
     }
     
     else {
          
          std::cout << "Invalid input. Please try again." << std::endl;
          
          return 0;
     }
     
}
