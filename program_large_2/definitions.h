//definitions.h
//by Philip Westrich
//for use with main.cpp
//Large Assignment #2
//CSC 2100

#ifndef DEFINITIONS_H

#define DEFINITIONS_H
#define NAMESIZE 41
#define SEMSIZE 4
#define NUMCORRECTSEMS 28

#include <iostream>
#include <iomanip>
#include <cstring>

struct Student { //Here's the definition for our Student data type.
     
     char name[NAMESIZE];
     short age;
     float gpa;
     char sem[SEMSIZE];
     Student *next;
     
};

//This array contains all of the correct input for semesters.
const char correctSems[NUMCORRECTSEMS][SEMSIZE] =
     {"S13", "S14", "S15", "S16", "S17", "S18", "S19",
      "F13", "F14", "F15", "F16", "F17", "F18", "F19",
      "s13", "s14", "s15", "s16", "s17", "s18", "s19",
      "f13", "f14", "f15", "f16", "f17", "f18", "f19"};

#endif
