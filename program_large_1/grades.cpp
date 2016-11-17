//Large Programming Assignment #1
//"Gradebook"
//by Philip Westrich
//Friday, November 23, 2012

#include "grades.h"
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main(){
     
     cout << "*********************" << endl;
     cout << "* G R A D E B O O K *" << endl;
     cout << "*********************" << endl;
     
     //Here we declare our arrays.
     int tests[STUDENTS][TESTS];
     int quizzes[STUDENTS][QUIZZES];
     int assignments[STUDENTS][ASSIGNMENTS];
     char names[STUDENTS][NAMESIZE];
     int howMany = readGrades(names, tests, quizzes, assignments); //The read function returns how many he read successfuly
     
     if (howMany > 0){ //If the function read at least one student, show success message
     
          cout << "Data read successfully!" << endl;
     }
     
     else { //If not, display error message and exit.
          
          cout << "Data read failure!" << endl;
          cout << "Please check the data file and its name, and try again." << endl;
          
          return 0;
     }
     
     short choice = 0; //Variable for choosing menu option.
     
     while (choice == 0){
     
          cout << "Menu" << endl;
          cout << "---------------------------------------------"     << endl;
          cout << "1. Show all grades for a student."                 << endl;
          cout << "2. Calculate a student's average."                 << endl;
          cout << "3. List all students below the class average."     << endl;
          cout << "4. List all students above the class average."     << endl;
          cout << "5. Exit."                                          << endl;
     
          while ((choice <= 0) || (choice > 5)){ //Only allow valid menu options to be chosen
          
               do { //This loop will check to make sure an integer was entered.
               
                    if (!cin){ 
                    
                         cin.clear();
                         cin.ignore(80, '\n');
                    
                    }
               
                    cout << "Your choice: ";
                    cin >> choice;
                    cin.ignore(80, '\n');
                    cout << endl;
               
               } while (!cin);
          
          }
     
          if (choice == 1){ //Show all grades for a student.
               
               showGrades(names, tests, quizzes, assignments, howMany);
               choice = 0; //Reset choice to 0 so the menu will print again.
               
          }
          
          else if (choice == 2){ // Calculate a student's average
               
               //Here we declare variables to work with, self-explanitory.
               int studentID = -1;
               int studentAverage = 0;
               char studentName[NAMESIZE];
               
               while (studentID == -1){ // While the id is -1, we will keep asking for student names to find.
               
                    cout << "Enter the student's name: ";
                    cin.getline(studentName, NAMESIZE);
               
                    studentID = findStudent(names, studentName, howMany);
                    
                    if (studentID == -1){ // If the id is still -1 after trying to find him, display the error message.
                         
                         cout << "The student does not exist. Please try again." << endl;
                         
                    }
               }
               
               studentAverage = calcStudentAVG(studentID, tests, quizzes, assignments);
               
               cout << "The average for " << names[studentID] << " is " << studentAverage
                    << ", which is letter grade " << letterGrade(studentAverage) << "." << endl;
               cout << endl;
               
               choice = 0; //Reset choice to 0 so the menu is displayed again.
               
          }
          
          else if (choice == 3){ //Display the students below the class average.
               
               belowAverage(howMany, tests, quizzes, assignments, names);
               
               choice = 0; //Reset choice to 0 so the menu is displayed again.
               
          }
          
          else if (choice == 4){ //Display the students above the class average
               
               aboveAverage(howMany, tests, quizzes, assignments, names);
               
               choice = 0; //Reset choice to 0 so the menu is displayed again.
               
          }
          
          else if (choice == 5){ //Exit.
               
               break; //Break from the loop.
          }
     }
     
     cout << "Exiting program..." << endl;
     
     return 0;

}

void showGrades(char names[][NAMESIZE], int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS], int howMany){
     
     //Variables to work with.
     char studentName[NAMESIZE];
     int studentID = -1;
     
     while (studentID == -1){ //While the id is a bad number
          
          cout << "Please enter a student's name: ";
          cin.getline(studentName, NAMESIZE);
          cout << endl;
     
          studentID = findStudent(names, studentName, howMany);
          
          if (studentID == -1){ //If the id is still -1 after we try to find him, display error message.
               
               cout << "The student does not exist. Please try again." << endl;
               
          }
          
     }
     
     //If finding the id was successful, print out his grades, using said id
     cout << "The following are " << studentName << "'s grades:" << endl;
     cout << setw(12) << "Tests:";
     
     for (int i = 0; i < TESTS; i++){ //Print tests
          
          cout << setw(4) << tests[studentID][i];
     }
     
     cout << endl;
     cout << setw(12) << "Quizzes:";
     
     for (int i = 0; i < QUIZZES; i++){ //Print quizzes
          
          cout << setw(4) << quizzes[studentID][i];
     }
     
     cout << endl;
     cout << "Assignments:";
     
     for (int i = 0; i < ASSIGNMENTS; i++){ //Print assignments.
          
          cout << setw(4) << assignments[studentID][i];
     }
     
     cout << endl; //Double newline to put a space between the grades and menu.
     cout << endl;
     
}

void belowAverage(int howMany, int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS], char names[][NAMESIZE]){
     
     int classAverage = calcClassAVG(howMany, tests, quizzes, assignments); //First, find the class average.
     
     cout << "The following students are below the class average:" << endl;
     cout << "---------------------------------------------------" << endl;
     
     for (int i = 0; i < howMany; i++){ //This loop will compare each student's individual average with the class average.
          
          if (classAverage > calcStudentAVG(i, tests, quizzes, assignments)){ //If the student's average is less...
               
               cout << names[i] << endl; //...print his name.
               
          }
          
     }
     
     cout << endl; //Newline to put space between the names list and menu.
     
}

void aboveAverage(int howMany, int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS], char names[][NAMESIZE]){
     
     int classAverage = calcClassAVG(howMany, tests, quizzes, assignments); //First, find the class average.
     
     cout << "The following students are above the class average:" << endl;
     cout << "---------------------------------------------------" << endl;
     
     for (int i = 0; i < howMany; i++){ //This loop will compare each student's individual average with the class average.
          
          if (classAverage < calcStudentAVG(i, tests, quizzes, assignments)){ //If the student's average is greater...
               
               cout << names[i] << endl; //...print his hame.
               
          }
          
     }
     
     cout << endl;
     
}


int calcStudentAVG(int studentID, int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS]){
     
     //These are the variables for summing the student's grades.
     int  sumTests = 0,
          sumQuizzes = 0,
          sumAssign = 0,
          studentAverage = 0; //And his average.
     
     for (int i = 0; i < TESTS; i++){ //Sum tests.
          
          sumTests += tests[studentID][i];
     }
     
     for (int i = 0; i < QUIZZES; i++){ //Sum quizzes
          
          sumQuizzes += quizzes[studentID][i];
          
     }
     
     for (int i = 0; i < ASSIGNMENTS; i++){ //Sum assignments
          
          sumAssign += assignments[studentID][i];
          
     }
     
     //Now, calculate the average using the given formula.
     studentAverage = (((sumTests / TESTS) * 0.50) + ((sumQuizzes / QUIZZES) * 0.15) + ((sumAssign / ASSIGNMENTS) * 0.35));
     
     return studentAverage; //Return his average.
     
}

int calcClassAVG(int howMany, int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS]){
     
     //Variables to work with.
     int sumAvereges = 0;
     
     for (int i = 0; i < howMany; i++){ //This loop will find each student's average, and add it to the sum.
          
          sumAvereges += calcStudentAVG(i, tests, quizzes, assignments);
          
     }
          
     return (sumAvereges / howMany); //Return the class average.
     
}

int findStudent(char names[][NAMESIZE], char studentName[], int howMany){
     
     for (int i = 0; i < howMany; i++){ //This loop will search the names array for the given name
          
          if (0 == strcmp(names[i], studentName)){
               
               return i; //The function will return his location in the array if he is found
               
          }
     }
     
     return -1; //Otherwise, return -1 to indicate an error
     
}

char letterGrade(int average){ //This function will return the appropriate letter grade given a student's average.
     
     if (average >= 90)
          
          return 'A';
     
     else if (average >= 80)
          
          return 'B';
     
     else if (average >= 70)
          
          return 'C';
     
     else if (average >= 60)
          
          return 'D';
     
     else
          return 'F';
}