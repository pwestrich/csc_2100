// This program demonstrates the use of pointer variables

// It finds the area of a rectangle taking length and width information from the user.

// It prints the area. It also determines which among length and width is greater and generates message accordingly.

// Philip Westrich
// Lab 11 Part 1
// Tuesday, November 20, 2012



#include <iostream>

using namespace std;



int main()

{
     
     int length; // holds length
     
     int width; // holds width
     
     int area; // holds area
     
     int *lengthPtr; // pointer to point to length
     
     int *widthPtr; // pointer to point to width
     
     
     
     cout << "Please input the length of the rectangle: ";
     
     cin >> length;
     
     cout << "Please input the width of the rectangle: ";
     
     cin >> width;
     
     // Fill in code to make lengthPtr point to length (holds the address of lenghth variable)
     lengthPtr = &length;
     
     // Fill in code to make widthPtr point to width (holds the address of width variable)
     widthPtr = &width;
     
     // Fill in code to find the area by using only the pointer variables
     area = *lengthPtr * *widthPtr;
     
     cout << "The area is " << area << endl;
     
     
     
     if (*lengthPtr > *widthPtr)
     
          cout << "The length is greater than the width" << endl;
     
     else if (*lengthPtr < *widthPtr)
     
          cout << "The width is greater than the length" << endl;
     
     else
     
          cout << "The width and length are the same" << endl;
     
     return 0;
     
     
     
}