//Lab 2 Part 2
//by Philip Westrich
//Sales Calculator
//Tuesday, September 11, 2012

# include <iostream>

int main(){
    
    double price, totalPrice, amount, tax;
    int purchased;
    
    std::cout << "Welcome to the Sales Calculator!" << std::endl;
    std::cout << "What is the price, in US dollars, of apples per pound?" << std::endl;
    
    std::cin >> price;
    
    std::cout << "How many pounds of apples were purchased?" << std::endl;
    
    std::cin >> purchased;
    
    amount = price * purchased;
    tax = amount * .0975;
    totalPrice = amount + tax;
    
    std::cout << "Price/lb              $" << price << std::endl;
    std::cout << "Quantity             lb" << purchased << std::endl;
    std::cout << "Amount                $" << amount << std::endl;
    std::cout << "Tax Total Purchase    $" << totalPrice << std::endl;
    
    return 0;
    
}