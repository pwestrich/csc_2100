//Lab 3 Part 2
//CSC-2101
//Tuesday, September 18, 2012
//by Philip Westrich

#include <iostream>

int main(){
     
     int month = 0, day = 0, year = 0;
     
     std::cout << "Please enter a date as you are prompted, in the format (mm/dd/yy)." << std::endl;
     std::cout << "Month: " << std::endl;
     
     std::cin >> month;
     
     std::cout << "Day: " << std::endl;
     
     std::cin >> day;
     
     std::cout << "Year: " << std::endl;
     
     std::cin >> year;
     
     if (month * day == year){
          
          std::cout << "You have entered a Magic Date!" << std::endl;
     
          return 0;
     }
     
     else {
          
          std::cout << "There is nothing special about this date." << std::endl;
          
          return 0;
     }

}
