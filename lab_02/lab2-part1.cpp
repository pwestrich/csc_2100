//Lab #2 Part 1
//Pizza Slice Calculator
//by Philip Westrich
//Tuesday, September 11, 2012

#include <iostream>

int main(){
    
    double radius, diameter, rsquared, area;
    int slices;
    
    std::cout << "Welcome to the Pizza Slice Calculator!" << std::endl;
    std::cout << "What is the diameter (in inches) of your pizza?" << std::endl;
    
    std::cin >> diameter;
    
    radius = diameter / 2;
    rsquared = radius * radius;
    
    area = 3.14 * rsquared;
    
    slices = (int)area / 14.125;
    
    std::cout << "Your pizza should have " << slices << " even slices of area 14.125 inches squared." << std::endl;
    std::cout << "Goodbye!";
    
    return 0;
    
}
