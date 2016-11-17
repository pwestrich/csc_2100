//functions.h
//For use with functions.cpp
//Function prototypes shall go here fof the functions.cpp file.

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

Student *readInfo();

void printNames(Student *head);

void printStudentInfo(char input[], Student *head);

void deleteList(Student *head);

#endif
