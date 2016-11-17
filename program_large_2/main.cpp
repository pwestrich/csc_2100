//Large Programming Assignment #2
//"Student List"
//by Philip Westrich
//CSC 2100
//Thursday, December 6, 2012

#include "definitions.h"
#include "functions.h"

int main(){
     
     std::cout << "This program will keep track of students' names, ages, GPAs,"
               << " and semester of graduation." << std::endl;
     std::cout << "Please enter the information as prompted. To stop "
               << "entering names, enter a blank name." << std::endl;
     
     /*   readInfo will get input from the user and create the linked list. He
          will also return a pointer to the head of the list, and keep track of
          how many people he read. */
     
     Student *head = readInfo();
     
     bool done = false;
     char input[NAMESIZE];
     
     while (!done) {
          
          printNames(head); //Print the names of the entered students.
          
          std::cout << "Which student do you want? ";
          std::cin.getline(input, NAMESIZE);
          
          if (input[0] == '\0'){ //If an empty name is created...
               
               break; //Move on.
               
          }
     
          else { //Otherwise, try to find matching students.
               
               std::cout << "Here are the students matching '" << input << "':" << std::endl;
               
               printStudentInfo(input, head);
               
          }
          
          std::cout << "-------------------------------------------------------" << std::endl;
          
     }
     
     std::cout << "Exiting program..." << std::endl;
     
     deleteList(head); //Delete the list to prevent memory leaks.
     
     return 0;

}
