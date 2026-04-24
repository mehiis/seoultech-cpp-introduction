/*
Write a program that inputs a double for n:
	- iterates through the Babylonian algorithm until the guess is within 1% of the previous guess
	- outputs the answer as a double to two decimal places.
	- Your answer should be accurate even for large values of n.
*/

#include <iostream>
#include <cmath>
using namespace std;

class BabylonianAlgorithm {
public:
	void execute() {
		int userInput; //number that user inputs
		int counter = 1;

		cout << "Enter a number: ";
		cin >> userInput;
		
		double newGuess = userInput / 2; //first guess is half of the n
		double r = 0; //helper value for iterations
		double presentage = 1; //calculated prestage difference
		double prevGuess = 0; //previous guess, for calculating the presentage


		while (presentage >= 0.01) {
			if (userInput <= 0) //dont calculate squareroot of negative value, because it wil be an imaginary value.
				break;

			r = userInput / newGuess; // helper value to help to calculate new guess
			prevGuess = newGuess; //save the previous guess before calculating the new one
			newGuess = (newGuess + r) / 2; //calculate a new guess
			presentage = (abs(newGuess - prevGuess) / prevGuess); //check the prosentual difference between new and old guess, when its < 1% exit the loop.

			//print to console the status of each iteration
			cout << "Iter " << counter << ": The guess is " << presentage * 100 << "% of the previous guess." << endl;
			counter++; //add round
		}

		
		//after getting out the loop the correct answer is printed with .2 decimal accuracy.
		if(newGuess >= 0)
			cout << "The square root of " << userInput << " is approximately " << round(newGuess * 100) / 100 << ".";
		else
			cout << "NULL";
	}
};


