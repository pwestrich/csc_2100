//compute.cpp
//for Lab 12
//by Philip Westrich
//Tuesday, November 27, 2012

//#include "compute.h"

int calcAVG(int array[], int num_students){
     
     int sum = 0;
     
     for (int i = 0; i < num_students; i++)
          sum += array[i];
     
     return (sum / num_students);
     
}

int calcMax(int array[], int num_students){
     
     int guess = array[0];
     
     for (int i = 1; i < num_students; i++){
          
          if (array[i] > guess)
               guess = array[i];
          
     }
     
     return guess;
     
}

int calcMin(int array[], int num_students){
     
     int guess = array[0];
     
     for (int i = 1; i < num_students; i++){
          
          if (array[i] < guess)
               guess = array[i];
          
     }
     
     return guess;
     
}
