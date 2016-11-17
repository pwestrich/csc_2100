//Lab 13
//Soccer Score
//by Philip Westrich
//CSC 2101
//Tuesday December 4, 2012

#include "lab13.h"

int main(){
     
     std::cout << "This program keeps track of up to 13 players' names, scores, and jersey numbers." << std::endl;
     
     Player players[13]; //Define array of structures.
     
     for (int i = 0; i < 13; i++){ //Initialize the array.
          
          players[i].jerseyNum = 0;
          players[i].pointsScored = 0;
          
     }
     
     for (int i = 0; i < 13; i++){
          
          std::cout << "Player #" << (i+1) << "'s Name: ";
          std::cin.getline(players[i].name, NAMESIZE);
          
          do { //Make sure the jersey number is positive.
               
               if (players[i].jerseyNum < 0){
                    
                    std::cout << "Please enter a positive number." << std::endl;
                    
               }
          
               std::cout << "Player #" << (i+1) << "'s Jersey #: ";
               std::cin >> players[i].jerseyNum;
               
          } while (players[i].jerseyNum < 0);
          
          do { //Make sure the points scored is positive
               
               if (players[i].jerseyNum < 0){
                    
                    std::cout << "Please enter a positive number." << std::endl;
                    
               }
          
               std::cout << "Number of points scored by Player #" << (i +1) << ": ";
               std::cin >> players[i].pointsScored;
               std::cin.ignore(10, '\n');
               
          } while (players[i].pointsScored < 0);
          
     }
     
     int total = 0; //Variable to hold point total
     
     std::cout << "Name            Number  Points  " << std::endl;
     std::cout << "--------------------------------" << std::endl;
     
     for (int i = 0; i < 13; i++){
          
          displayPlayer(players[i]);
          
          total += players[i].pointsScored;
          
     }
     
     std::cout << "The total number of points scored by the team is :"
               << total << std::endl;
     
     return 0;
     
}

void displayPlayer(Player& currentPlayer){
     
     std::cout << std::setw(16) << currentPlayer.name
               << std::setw(8) << currentPlayer.jerseyNum
               << std::setw(8) << currentPlayer.pointsScored
               << std::endl;
     
}
