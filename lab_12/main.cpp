//Lab 12 - More Pointers
//by Philip Westrich
//Tuesday, November 27, 2012

#include <iostream>
#include <fstream>

#include "compute.h"
#include "file.h"

int main(){
     
     char input[81];
     
     std::cout << "What is the name of the datafile? ";
     std::cin.getline(input, 80);
     
     std::ifstream infile(input);
     
     if (!infile){
          
          std::cout << "Error reading file. Please check your file and its name and try again." << std::endl;
          
          return 0;
          
     }
     
     int num_students = 0, *array = readFile(infile, num_students);
     
     while (array != 0){
          
          std::cout << "Number of students:     " << num_students << std::endl;
          std::cout << "Maximum number watched: " << calcMax(array, num_students) << std::endl;
          std::cout << "Minimum number watched: " << calcMin(array, num_students) << std::endl;
          std::cout << "Average number watched: " << calcAVG(array, num_students) << std::endl;
          
          delete [] array;
          
          array = readFile(infile, num_students);
          
     }
     
     infile.close();
     
     return 0;
     
}
