//functions.cpp
//For use with Large Assignmebt #2, CSC 2100
//by Philip Westrich

#include "definitions.h"

/*   This function will read the input from the user and
     create the linked list. */

Student *readInfo(){
     
     //Variables for reading input.
     char nameBuffer[NAMESIZE], semBuffer[SEMSIZE];
     short ageBuffer = 0;
     float gpaBuffer = 0.0;
     bool done = false; //Bool for if we're done taking in input.
     bool inputValid = false; //Is the semester of graduation input valid?
     Student *head = NULL; //The beginning of the linked list
     Student *temptr = NULL; //A temporary pointer.
     
     while (!done){ //While we're still entering stuff
          
          do {
               
               if (!std::cin){ //If too many things were entered, fix it and ask again.
                    
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                    std::cout << "Names must be no more than " << (NAMESIZE - 1)
                              << " in length." << std::endl;
                    std::cout << "Please try again." << std::endl;
                    
               }
               
               std::cout << "Enter a student's name: ";
               std::cin.getline(nameBuffer, NAMESIZE);
               
          } while (!std::cin);
          
          if (nameBuffer[0] == '\0'){ //If the entered name is the null string...
               
               done = true; //We're done.
               continue; //Move on.
               
          }
     
          do { //Check for a valid age
          
               do { //Check to make sure an integer was entered
               
                    if (!std::cin){ //If there was bad input, let's fix it.
               
                         std::cin.clear();
                         std::cin.ignore(80, '\n');
                         ageBuffer = 0;
               
                    }
          
                    std::cout << "Age: ";
                    std::cin >> ageBuffer;
          
               } while (!std::cin);
               
          } while ((ageBuffer < 1) || (ageBuffer >120));
     
          do { //Check to make sure a valid GPA was entered
          
               do { //Check to make sure an integer was entered
                    
                    if (!std::cin){//If there was bad input, let's fix it.
                    
                         std::cin.clear();
                         std::cin.ignore(80, '\n');
                         gpaBuffer = 0;
                    
                    }
               
                    std::cout << "GPA: ";
                    std::cin >> gpaBuffer;
                    std::cin.ignore(80, '\n');
               
               } while (!std::cin);
          
          } while ((gpaBuffer <= 0.0) || (gpaBuffer > 4.0));
     
          while (inputValid == false){ //While the semester input is bad...
          
               std::cout << "Graduation Semester: ";
               std::cin.getline(semBuffer, SEMSIZE);
               
               if (!std::cin){ //If too many characters were entered, let's fix it.
                    
                    std::cin.clear();
                    std::cin.ignore(80, '\n');
                    continue; //Ask for input agan.
                    
               }
               
               for (int i = 0; i < NUMCORRECTSEMS; i++){ //Lets loop through the array of valid input.
                    
                    if (std::strcmp(semBuffer, correctSems[i]) == 0){ //If they are the same string...
                         
                         inputValid = true; //The input is valid
                         break; //Stop checking.
                         
                    }
                    
               }
          
          }
          
          //Now that we're done entering and checking that student's input, let's put it into a linked list.
          
          temptr = new Student; //Here's out new student.
          
          std::strcpy((*temptr).name, nameBuffer);
          (*temptr).age = ageBuffer;
          (*temptr).gpa = gpaBuffer;
          std::strcpy((*temptr).sem, semBuffer);
          (*temptr).next = head; //We're going to tack him onto the front of the list; the previous first
                                 //student is now the second, and so forth.
          
          head = temptr; //The new student is now the beginning.
          
          inputValid = false; //Reset the flag for the next round.
          
     }
     
     return head; //When finished altogether, return a pointer to the beginning of the linked list.
     
}

void printNames(Student *head){
     
     Student *next = head;
     
     std::cout << "Here are the students you entered:" << std::endl;
     
     while (next != NULL){ //While the next student isn't null...
          
          std::cout << (*next).name << std::endl; // Print a name.
          
          next = (*next).next; //Go to the next student.
          
     }
     
}

void printStudentInfo(char input[], Student *head){
     
     //Create a pointer for the current student to be searched, starting with the head of the list
     Student *currentStudent = head;
     bool printAtLeastOne = false; //bool to keep track if we've printed at least one name.
     
     while (currentStudent != NULL){ //While we're still in the list (no segfaults!)...
          
          if (std::strstr((*currentStudent).name, input) != 0){ //... see if the string is found in the name.
               
               //If so, lets print his info.
               std::cout << "Name: " << (*currentStudent).name << std::endl;
               std::cout << "Age: "  << (*currentStudent).age << std::endl;
               std::cout << "GPA: "  << std::showpoint << std::fixed
               << std::setprecision(3) << (*currentStudent).gpa << std::endl;
               std::cout << "Semester of Graduation: " << (*currentStudent).sem
                         << std::endl;
               std::cout << std::endl;
               
               printAtLeastOne = true; //And set the flag to true.
               
          }
          
          currentStudent = (*currentStudent).next; //Advance to the next student.
          
     }
     
     if (printAtLeastOne == false){ //If no names were printed, print an error message.
          
          std::cout << "Sorry, no names matching " << input << " were found." << std::endl;
          std::cout << "Please try again." << std::cout;
          
     }
          
}

void deleteList(Student *head){ //Delete the linked list.
     
     bool done = false; 
     Student *next = (*head).next;
     
     while (!done){
          
          delete head; //Delete item #1 in the list
          
          head = next; //The head of the list is now the next item down.
          
          if (head == NULL){ //If we've reached the end of the list...
               
               break; //We're done.
               
          }
          
          next = (*head).next; //The next item down is now down one more
          
     }
     
}
