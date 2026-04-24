#include <iostream>
using namespace std;

class SentinelValue {
public:
	void execute() {
		//variable for user's input and separate variables for sum of odd numbers and even numbers.
		int input;
		int oddSum = 0;
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

class Primes {
public:
	void execute() {
		//for loop starts from value 3 and stops when counter hits 101 (loop between 3-100).
		cout << "\n\n ## PRIME NUMBERS BETWEEN 3-100 ###\n";
		for (int i = 3; i < 101; i++) {
			//each loop starts with prime being true, if it remains true to the end of the loop then it is a prime number.
			bool isPrime = true;

			//nested loop which checks modulo of every number between 2-(i-1).
			for (int j = 2; j < i; j++) {
				//if i % j remainder is 0, that means the number was succesfully divided with number that was not 1 or itself.
				if (i % j == 0)
					isPrime = false; //this is not a prime number then
			}

			//if number was not dividable with any numbers in nested loop means it was a prime number and thus printed.
			if (isPrime)
				cout << " " << i << " ";
		}
		cout << "\n\n";
	}
};

class GradeCalculator {
public:
	void execute() {
		double amountOfSubjects = 0;
		double totalPoints = 0;
		char grade;

		//asks user to input the amout of subjects preferably as an int.
		cout << "### Grade Calculator ###\nS = 10 p.\nA = 9 p.\nB = 8 p.\nC = 7p.\nD = 6p.\nE = 5 p.\nF = 0 p.\n\nEnter the number of subjects: ";
		cin >> amountOfSubjects;

		//loops through amount of subjects given by the user and asks what grade user has obtained for every subject
		//(int)amountOfSubjects turns double value to be an int.
		for (int i = 0; i < (int)amountOfSubjects; i++) {
			cout << "Enter the grade obtained for subject " << (i + 1) << ": ";
			cin >> grade;

			totalPoints += gradeConverter(grade); //uses a helper function to give the correct points and adds it to the sum
		}

		//calculate average of the given subjects, check that the total is not 0 so the program will not crash.
		if (totalPoints != 0) {
			double average = totalPoints / amountOfSubjects; //basic average calculation
			double roundedAverage = round(average * 100) / 100; // round it two decimals

			cout << "Your grade point average is " << roundedAverage << ".\n\n";
		}
	}


	//helper function that returns int value depending on the character given as a parameter
	int gradeConverter(char grade) {
		switch (grade) {
		case 'S':
		case 's':
			return 10;
		case 'A':
		case 'a':
			return 9;
		case 'B':
		case 'b':
			return 8;
		case 'C':
		case 'c':
			return 7;
		case 'D':
		case 'd':
			return 6;
		case 'E':
		case 'e':
			return 5;
		default:
			return 0;
		}
	}
};


class BabylonianAlgorithm {
public:
	void execute() {
		int userInput; //number that user inputs
		int counter = 1;

		cout << "\n\n ## BABYLONIAN ALGORITHM ###\n";
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
		if (newGuess >= 0)
			cout << "The square root of " << userInput << " is approximately " << round(newGuess * 100) / 100 << ".";
		else
			cout << "NULL";
	}
};


class GuessTheNumber {
public:
	void execute() {
		srand(static_cast<unsigned int>(time(0))); //for random number seeding, with help of this the random number each time is different.

		int randomNum = rand() % 100 + 1; //calculate the random number. without the srand seeding, program gave always number 42
		int guess = -1; //initialize the guess to be -1 (a number that cannot be possible with the guess)
		int roundNum = 0; //round calculator

		cout << "\n\n ## GUESS THE NUMBER50 ###\n";
		//debug
		//cout << "The correct number is " << randomNum << ".";

		//the loop will be active as long as the random number is not guessed
		while (randomNum != guess) {
			roundNum++; //add round counter
			cout << "\n\nTrial " << roundNum << "...\nEnter a guess between 1 and 100 : ";
			cin >> guess; //ask for input

			//conditional opetarion for cheking if the guessed number is too small or big
			(guess > randomNum) ? cout << "\nYour guess is bigger than the random number." : cout << "\nYour guess is smaller than the random number.";
		}

		//announce the correct answer after breaking from the loop.
		cout << "\n\nYou guess is right! The secret number was " << randomNum << ".";
	}
};

int main() {
	SentinelValue sentinelValue;
	sentinelValue.execute();

	Primes primes;
	primes.execute();

	GradeCalculator gc;
	gc.execute();

	BabylonianAlgorithm ba;
	ba.execute();

	GuessTheNumber gn;
	gn.execute();
	return 0;
}