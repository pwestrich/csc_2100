//fileio.cpp
//by Philip Westrich
//This part of the program will read data from the given file.

#include "grades.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int readGrades(char names[][NAMESIZE], int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS]){
     
     char filename[FILESIZE]; //Name of file to be read from
     char nameBuffer[NAMESIZE];
     int howMany = 0; //Number of students read
     
     cout << "Please enter the name of the data file you would like to read: ";
     cin.getline(filename, FILESIZE);
     
     ifstream infile(filename);
     
     infile.getline(nameBuffer, NAMESIZE);
     
     while (!infile.eof()){ //This loop reads each student until we run out of names to read.
          
          strcpy(names[howMany], nameBuffer);
          
          for (int j = 0; j < TESTS; j++){ //Loop reads all tests
               
               infile >> tests[howMany][j];
               
          }
          
          for (int j = 0; j < QUIZZES; j++){ //Loop reads all quizzes
               
               infile >> quizzes[howMany][j];
               
          }
          
          for (int j = 0; j < ASSIGNMENTS; j++){ //Loop reads all assignmants
               
               infile >> assignments[howMany][j];
               
          }
          
          if (!infile){ //If there is an error in reading data...
               
               infile.close(); //...close the file...
               
               return -1; //...and return -1 to indicate error.
               
          }
          
          howMany++;     //This adds to the number of students the program has successfully read.
          
          if (howMany == 100){ //This limits the loop to read only 100 names, so we don't leave the bounds of the arrays.
               
               break;
          }
          
          infile.ignore(10, '\n');
          infile.getline(nameBuffer, NAMESIZE);
          
     }
     
     infile.close();
     
     
     return howMany; //This function returns the number of students he successfully read.
          
}
