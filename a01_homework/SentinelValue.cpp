/*
PRACTISE 1:
	Write a program that reads integers from the user until
	the user enters a zero or -1. The program then should
	compute the sum of the even and odd integers entered
	using infinite loop.
*/
#include <iostream>
using namespace std;

//EXTRA: i made every assignment a class so i can program them in separate files and call them from main. (Returned assignment is one .cpp file)
class SentinelValue {
public:
	void execute() {
		//variable for user's input and separate variables for sum of odd numbers and even numbers.
		int input;
		int oddSum	= 0;
		int evenSum = 0;

		//infinite loop, always true.
		while (true) {
			//ask user for an input
			cout << "Enter a number (0/-1 to quit): ";
			cin >> input;

			//if user inputs 0 or -1, infinite loop will call 'break;' which makes the program to jump out of the loop.
			if (input == 0 || input == -1)
				break;

			//check with modulo that does the given input have remainder when divided with two, if no means it is an even number
			//if not then it is odd and they are then added to their corresponding sum variable.
			if (input % 2 == 0) {
				evenSum += input;
			}
			else
			{
				oddSum += input;
			}
		}

		//when loop ends print the calculated sums for even and odd numbers.
		cout << "The sum of the EVEN integers is " << evenSum << "." << endl;
		cout << "The sum of the ODD integers is " << oddSum << "." << endl;
	}
};


