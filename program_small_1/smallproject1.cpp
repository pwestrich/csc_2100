//CSC-2100
//Small Programming Assignment #1
//"Math Tutor"
//by Philip Westrich
//Monday, September 17, 2012

#include <iostream>
#include <fstream>

int main() {
    std::ifstream inf("mathtutor.txt");                     //Read file mathtutor.txt. On my Mac, it uses the file located in
                                                            //your user's home folder. Change if needed.
    
    unsigned short correctAnswers, totalAnswers;            //Declare vaiables for correct and total answers.
    
    inf >> correctAnswers;
    inf >> totalAnswers;
    
    inf.close();                                            //Close input
    
    std::srand(time(NULL));                                 //Use current time for random number seed.
    
    unsigned int x = 0 + rand() % 500;                      //Declare two random positive whole numbers
    unsigned int y = 0 + rand() % 500;                      //from 0 to 500, inclusive.
    
    std::cout << "Welcome to the Math Tutor!" <<std::endl;
	
    std::cout << "You have answered " << correctAnswers 
			  << " questions correctly, out of " << totalAnswers 
			  << " total." <<std::endl;
			  
    std::cout << "Here is your next problem:" <<std::endl;
    
    std::cout << "  " << x << std::endl;                    //Display math problem.
    std::cout << "+ " << y << std::endl;
    std::cout << "-----" << std::endl;
        
    int yourAnswer;                                         //Variable for given answer.
    
    std::cout << "Your answer?";                            //Prompt for answer.
    std::cin >> yourAnswer;                                 //Store answer.
    
    if (x + y == yourAnswer){                               //If answer is right.
        
        std::cout << "You are correct!" << std::endl;   
        
        std::ofstream out("mathtutor.txt");                 //Write to file mathtutor.txt
        
        out << correctAnswers + 1 << std::endl;
        out << totalAnswers + 1 << std::endl;
        out.close();
        
        std::cout << "Goodbye!" << std::endl;
        
        return 0;
    }
    
    else if (x + y != yourAnswer) {                         //If answer is wrong.
        
        std::cout << "I am sorry, but your answer is incorrect." << std::endl;
        std::cout << "The correct answer was " << x + y << "." << std::endl;
        std::cout << "Please try again later." << std::endl;
        
        std::ofstream out("mathtutor.txt");                 //Write to file mathtutor.txt
        
        out << correctAnswers << std::endl;
        out << totalAnswers + 1 << std::endl;
        out.close();
        
        std::cout << "Goodbye!" << std::endl;
        
        return 0;
		    }
}
