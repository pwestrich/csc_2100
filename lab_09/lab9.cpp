//Lab 9
//by Philip Westrich
//Tuesday, November 6, 2012
//Election Day

#include <iostream>
#include <iomanip>

char compute_grade(float average, float grade); //Function prototype.

int main(){
     
     const unsigned short SIZE = 5; //Number of students.

	std::cout << "Please enter the ID and grade for each student." << std::endl;
     std::cout << "Grades can be decimal values, but must be between 0 and 100, inclusive." << std::endl;
     std::cout << "ID#s must be positive integer values." << std::endl;
	
	unsigned short id[SIZE]; //For large ID#s.
	float grades[SIZE];
     char letter[SIZE];
     
     for (int i = 0; i < SIZE; i++){ //Initialize the arrays.
          
          grades[i] = id[i] = 0;
          letter[i] - '\0';
     }

	for (int i = 0; i < SIZE; i++){

		do { //Input checking.
               
               if (!std::cin){
                    
                    std::cin.clear();
                    std::cin.ignore(80, '\n');
                    std::cout << "Bad input! Please try again." << std::endl;
               }
               
               std::cout << "Student " << (i + 1) << ":" << std::endl;
               std::cout << "ID# ";
               std::cin >> id[i];
               
          } while (!std::cin);
          
          do { //Input checking, again.
          
               if (!std::cin){
                    
                    std::cin.clear();
                    std::cin.ignore(80, '\n');
                    std::cout << "Bad input! Please try again." << std::endl;
               }
               
               do { //More input checking, for bad grade values.
                    
                    std::cout << "Grade: ";
                    std::cin >> grades[i];
                    
                    if (!std::cin){ 
                         
                         break;
                         
                         /* If a bad grade value is entered (< 0 or >100), this break
                            statement is needed to bust out of the do-while loop, 
                            so it doesn't become infinite, and C++ can fix the
                            misbehaving user input. */
                    }
                    
                    if ((grades[i] < 0) || (grades[i] > 100)){
                         
                         std::cout << "Bad input! Please try again." << std::endl;
                    }
                    
               } while ((grades[i] < 0) || (grades[i] > 100));
               
          } while (!std::cin);
     }
     
     float average = 0;
     
     for (int i = 0; i < SIZE; i++){ //Loop adds all grades together.
          
          average += grades[i];
     }
     
     average = average / SIZE; //Calculates average.
     
     for (int i = 0; i < SIZE; i++){ //Generates characters for the letter[SIZE] array.
          
          letter[i] = compute_grade(average, grades[i]);
     }
     
     std::cout << std::setw(16) << "ID#"
               << std::setw(8) << "Score"
               << std::setw(8) << "Grade"
               << std::endl;
     std::cout << "--------------------------------" << std::endl;
     
     for (int i = 0; i < SIZE; i++){ //Outputs the IDs, grades, and letters.
          
          std::cout << std::setw(16) << id[i]
                    << std::setw(8) << std::showpoint << std::setprecision(4) << grades[i]
                    << std::setw(8) << letter[i]
                    << std::endl;
     }

}

char compute_grade(float average, float grade){ //Function for returning appropriate letter.
     
     if ((grade <= (average + 10)) && (grade >= (average - 10))){
          
          return 'S';
     }
     
     else if (grade > (average + 10)){
          
          return 'O';
     }
     
     else {
          
          return 'U';
          
     }
     
}
