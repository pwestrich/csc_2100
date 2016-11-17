//file.cpp
//For Lab 12
//by Philip Westrich
//Tuesday, November 27, 2012

#include <fstream>

int *readFile(std::ifstream &infile, int &num_students){
     
     infile >> num_students;
     
     if (!infile.eof()){
          
          int *array = new int[num_students];
          
          for (int i = 0; i < num_students; i++){
               
               infile >> array[i];
               
          }
          
          return array;
               
     }
     
     else return 0;
     
}
