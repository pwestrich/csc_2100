//lab13.h
//For use with lab13.cpp
//by Philip Westrich

#ifndef LAB13_H
#define LAB13_H

#define NAMESIZE 16

#include <iostream>
#include <iomanip>

struct Player {
     
     char name[NAMESIZE];
     int jerseyNum;
     int pointsScored;
     
};

void displayPlayer(Player& currentPlayer);

#endif
