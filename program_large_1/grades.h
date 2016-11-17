//grades.h
//by Philip Westrich
//Function and constant definitions shall go here.

#define TESTS 2
#define QUIZZES 5
#define ASSIGNMENTS 4
#define NAMESIZE 41
#define STUDENTS 100
#define FILESIZE 41

//This function returns a letter grade given an average
char letterGrade(int average);

//This function reads the grades from the file, and returns the number of students he successfuly read.
int readGrades(char names[][NAMESIZE], int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS]);

//This one will show all of a student's grades.
void showGrades(char names[][NAMESIZE], int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS], int howMany);

//This one finds the student's index in the arrays and returns that number.
int findStudent(char names[][NAMESIZE], char studentName[], int howMany);

//This one calculates the class average and returns that value.
int calcClassAVG(int howMany, int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS]);

//This function finds a student's average in the class, and returns that value, given his ID.
int calcStudentAVG(int studentID, int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS]);

//This function prints all students' names who are below the class average
void belowAverage(int howMany, int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS], char names[][NAMESIZE]);

//This function prints all students' names who are above the class average
void aboveAverage(int howMany, int tests[][TESTS], int quizzes[][QUIZZES], int assignments[][ASSIGNMENTS], char names[][NAMESIZE]);
