#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class GuessTheNumber {
public:
	void execute() {
		srand(static_cast<unsigned int>(time(0))); //for random number seeding, with help of this the random number each time is different.

		int randomNum = rand() % 100 + 1; //calculate the random number. without the srand seeding, program gave always number 42
		int guess = -1; //initialize the guess to be -1 (a number that cannot be possible with the guess)
		int roundNum = 0; //round calculator

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

