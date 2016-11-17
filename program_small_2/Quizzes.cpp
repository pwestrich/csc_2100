//Small Progrmming Assignment #2
//'Quizzes'
//Wednesday, October <x>, 2012
//CSC-2100
//by Philip Westrch

#include <iostream>
#include <iomanip>

int main(){
     
     int students = 0, quizzes = 0;                                             //Number of students and quizzes. Set to 0 for good measure.
     const int SIZE = 80;                                                       //Size of student names.
     
     std::cout << "This program will calculate students' quiz averages, "
               << "given the number of students, number of quizzes, "
               << "and individual student name."
               << std::endl;
     
     std::cout << "How many students? ";
     std::cin >> students;
     std::cin.ignore(80, '\n');
     
     std::cout << "How many quizzes? ";
     std::cin >> quizzes;
     std::cin.ignore(80, '\n');
     
     
     while ((students > 9 || students <= 0) || (quizzes <=0 || quizzes > 9)){   //Loop to validate quizzes & students is nonnegative & <= 9

          std::cout << "Invalid input. Please try again. " << std::endl;
          
          std::cout << "How many students? ";
          std::cin >> students;
          std::cin.ignore(80, '\n');
          
          std::cout << "How many quizzes? ";
          std::cin >> quizzes;
          std::cin.ignore(80, '\n');
               
          }
     
     
     int studentCount = 0, quizCount = 0;                                       //Variables for the loop's counters
     
     for (studentCount = 1; studentCount <= students; studentCount++){          //Loop for repeating the process for each student
          
          char studentName[SIZE];
          double quizTotal = 0;
          
          std::cout << "Enter the name of Student " << studentCount << " :";
          std::cin.getline(studentName, SIZE);
          
          
          for (quizCount = 1; quizCount <= quizzes; quizCount++){               //Loop for gathering quiz grades
               
               double quizGrade = 0;
               
               std::cout << "Enter quiz grade " << quizCount
                         << " for " << studentName << ": ";
               std::cin >> quizGrade;
               std::cin.ignore(80, '\n');
               
               while (quizGrade < 0 || quizGrade > 100){                        //Loop to validate 0<= Grade <= 100
                    
                    std::cout << "Invalid entry. Grades must be "
                              << "between 0 and 100, inclusive."
                              << std::endl;
                    std::cout << "Please try again."
                              << std::endl;
                    
                    std::cout << "Enter quiz grade " << quizCount
                              << " for " << studentName
                              << ": ";
                    std::cin >> quizGrade;
                    std::cin.ignore(80, '\n');
                    
               }
               
               quizTotal += quizGrade;                                          //Keep a running total of the quizzes for averaging later
          }
          
          double averageGrade = (quizTotal / quizzes);                          //Actually take the average of the grades
          
          std::cout << studentName << " has an average quiz grade of "
                    << std::setprecision(4) << std::showpoint                   //Always show decimal, 4 significant digits (2 decimal places, or 100.0)
                    << averageGrade << ", which is a letter grade ";
          
          if (averageGrade >= 90.00){                                           //If-statement for letter grade display
               
               std::cout << "A." << std::endl;
          }
          
          else if (averageGrade >= 80.00){
               
               std::cout << "B." << std::endl;
          }
          
          else if (averageGrade >= 70.00){
               
               std::cout << "C." << std::endl;
          }
          
          else if (averageGrade >= 60.00){
               
               std::cout << "D." << std::endl;
          }
          
          else {
               
               std::cout << "F." << std::endl;
          }
     }
     
     std::cout << "All grades have been calculated." << std::endl;
     std::cout << "Goodbye." << std::endl;
     
     return 0;                                                                  //Done!
     
}

