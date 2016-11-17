*********************
* G R A D E B O O K *
*********************

by Philip Westrich
Friday, November 23, 2012
CSC 2100-001

Contents:
---------------------
1. Purpose
2. Compiling the program from source code
3. Formatting the data file
4. Using the program

---------------------

1. Purpose
---------------------
The purpose of this program is to:
1. Show a student’s grades
2. Calculate a student’s average
3. Show the students below the class average
4. Show the students above the class average

The program will do the above actions depending on the contents of the data file you tell it to read.

---------------------

2. Compiling from source code
--------------------------------
To build the program from its source code:
1. Make sure you have a C++ compile installed and working properley on your system
2. Open your operating system’s command line (Command Prompt, Terminal, etc.)
3. Navigate to the directory containing the source code
4. Run the following commands:
	g++ -c fileio.cpp
	g++ -o Gradebook grades.cpp fileio.o

If done correctly, an executable named “Gradebook” should appear in the same directory as the source code.

---------------------

3. Formatting the data file
------------------------------
In order for the program to work properly, the data file you give it must be in the following format:

<NAME1>
<TEST1> <TEST2>
<QUIZ1> <QUIZ2> <QUIZ3> <QUIZ4> <QUIZ5>
<ASSIGNMENT1> <ASSIGNMENT2> <ASSIGNMENT3> <ASSIGNMENT4>
<NAME2>
<TEST1> <TEST2>
<QUIZ1> <QUIZ2> <QUIZ3> <QUIZ4> <QUIZ5>
<ASSIGNMENT1> <ASSIGNMENT2> <ASSIGNMENT3> <ASSIGNMENT4>
…
<NAME99>
<TEST1> <TEST2>
<QUIZ1> <QUIZ2> <QUIZ3> <QUIZ4> <QUIZ5>
<ASSIGNMENT1> <ASSIGNMENT2> <ASSIGNMENT3> <ASSIGNMENT4>
<NAME100>
<TEST1> <TEST2>
<QUIZ1> <QUIZ2> <QUIZ3> <QUIZ4> <QUIZ5>
<ASSIGNMENT1> <ASSIGNMENT2> <ASSIGNMENT3> <ASSIGNMENT4>

Please adhere to the above format and below restrictions:
1. There may be no more than 100 students
2. Student’s names can only be 40 characters long
3. Do not enter students with identical names
4. Do not enter a nameless student
5. Do not enter a gradeless grade
6. Do not enter an invalid grade (-5, 123, q, etc.)
7. Do not enter a decimal grade (25.5, 99.2, 85.234, etc.)
8. There may be no more than 2 test grades, 5 quiz grades, and 4 assignment grades

Proper program output cannot be guaranteed if the above instructions are not followed.

------------------------------

4. Using the program
-----------------------
The first thing the program will ask for is the name of the data file to read from. In Mac OS X, the file needs to be located in your user’s Home folder. On Windows, place the file in your C drive root directory. The name of the file must also be no more than 40 characters long. Any characters over 40 will be ignored.

Proper program output cannot be guaranteed unless you do so.

After entering the filename, the program will display its menu. Select the option you wish, and follow its instructions.

After each operation is complete, the program will return to the menu. Enter “5” to exit.

------------------------------