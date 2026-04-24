#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

namespace AssignmentOne {
	class MetersToInches {
	public:
		// Pointer members
		double* meters	= new double;
		double* inches	= new double;
		int* feet		= new int;

		MetersToInches() {
			char input = 'y';

		while (input == 'y') {
				cout << "\nEnter number of meters as a double: ";
				cin >> *meters;

				//if meters are below zero (not possible) ask for a new value.
				if (*meters < 0)
					continue;

				cout << "The value of meters: " << *meters << "." << endl;

				meterToFeetAndInches(meters); // Perform conversion and output results
				input = continueLoop(); // Perform conversion and output results
			}

			//free the memeory
			delete inches;
			delete feet;
		}

		/**
		 * Converts meters to feet and inches.
		 * Formula: 1 foot = 0.3048 meters.
		 */
		void meterToFeetAndInches(double* meters) {
			*feet	= (int)(*meters / 0.3048);
			*inches = (*meters / 0.3048 - *feet) * 12;

			cout << "The value converted to feet and inches is " << *feet << " and " << *inches << " inches." << endl;
		}


		/**
		 * Helper to manage the loop state.
		 * Returns a lowercase char to simplify the while-loop condition.
		 */
		char continueLoop() {
			char newInput;

			cout << "Y or y continues, any other character quits: ";
			cin >> newInput;
			newInput = tolower(newInput); // Standardize input to lowercase
			
			return newInput;
		}

	};
}


namespace AssignmentTwo {
    class Pizza {
    private:
        double size;
        double price;

    public:
        // Constructor handles diameter input
        Pizza() {
            double input;
            cin >> input;

            //check that user input valid value
            while (input <= 0) {
                cin.clear(); // clears error flags if user enters text
                cin >> input;
            }

            size = input;
        }

        // Method handles price input
        void setPrice() {
            double input;
            cin >> input;

            while (input <= 0) {
                cin >> input;
            }

            price = input;
        }

        double getPizzaDiameter() {
            return size;
        }

        double getPrice() {
            return price;
        }
    };


    class BuyingPizza {
    public:
        BuyingPizza() {
            cout << "Welcome to the Pizza Consumers Union." << endl;

            cout << "Enter diamater of a small pizza (in inches): ";
            Pizza* smallPizza = new Pizza(); //create a pointer 

            cout << "\nEnter the price of a small pizza: $";
            smallPizza->setPrice();

            cout << "\nEnter diamater of a large pizza (in inches): ";
            Pizza* largePizza = new Pizza(); // create a pointer

            cout << "\nEnter the price of a large pizza: $";
            largePizza->setPrice();

            // Pass-by-reference
            giveResults(*smallPizza, *largePizza);

            cout << "Buon Appetito!" << endl;

            // Clean pizza objects
            delete smallPizza;
            delete largePizza;
        }
          //Outputs the comparison results to the console.
        void giveResults(Pizza& smallPizza, Pizza& largePizza) {
            cout << "Small pizza:\n" << "Diameter = " << smallPizza.getPizzaDiameter()
                << " inches\nPrice = " << smallPizza.getPrice() << "$\n"
                << "Per square inch = $" << unitPrice(smallPizza) << endl;

            cout << "\n\nLarge pizza:\n" << "Diameter = " << largePizza.getPizzaDiameter()
                << " inches\nPrice = " << largePizza.getPrice() << "$\n"
                << "Per square inch = $" << unitPrice(largePizza) << endl;
        }

        
         //Calculates price per square inch and rounds to 2 decimal places.
        double unitPrice(Pizza& pizza) {
            double radius = pizza.getPizzaDiameter() / 2.0;
            double area = 3.14159 * (radius * radius);
            double unitPrice = pizza.getPrice() / area;

            // Rounds to the nearest cent
            return round(unitPrice * 100) / 100;
        }
    };
}

namespace AssignmentThree {
    class LowestTerms {
    private:
        // Member pointers
        int* numerator = new int;
        int* denumerator = new int;

    public:
        //Constructor: Handles the UI loop for inputting fractions.
        //Uses (\033[F) to put every input on the same line.
        
        LowestTerms() {
            *denumerator = 1; // Initialize to prevent immediate loop exit
            
            cout << "Find the lowest terms in the fraction...\n"
                << "Write only INTEGERS, input one number at the time...\n"
                << "Input 0 as denumerator to exit the program...\n\n\n";

            while (*denumerator != 0) {
                // Get Numerator
                cin >> *numerator;
                // Move cursor up and print "/" to simulate a fraction look
                cout << "\033[F" << *numerator << "/";

                // Get Denominator
                cin >> *denumerator;

                // Save original values for the final output display
                int ogNum = *numerator;
                int ogDenum = *denumerator;

                // Attempt to simplify the fraction
                if (convertToLowestTerms(*numerator, *denumerator)) {
                    // if simplified to a whole number (e.g., 5/5), just print 1
                    if (*numerator != *denumerator)
                        cout << "\033[F" << ogNum << "/" << ogDenum << " = " << *numerator << "/" << *denumerator << "          " << endl;
                    else
                        cout << "\033[F" << ogNum << "/" << ogDenum << " = 1          " << endl;
                }
            }

            //remove from memory
            delete numerator;
            delete denumerator;
        }

        bool convertToLowestTerms(int& num, int& denum) {
            // division by zero is undefined
            if (denum == 0) {
                cout << "\033[FEXIT" << endl;
                return false;
            }

            int temp = 2;

            // Determine the starting point for finding the Greatest Common Divisor
            if (num > denum)
                temp = num;
            else if (num < denum)
                temp = denum;
            else {
                // If equal, the lowest is always 1/1
                num = 1;
                denum = 1;
                return true;
            }

            // loop every number from top to bottom and find the highest number that both denum and num are dividable.
            for (int i = temp; i >= 1; i--) {
                if (denum % i == 0 && num % i == 0) {
                    num = num / i;
                    denum = denum / i;
                    return true;
                }
            }

            return true;
        }
    };
}

namespace AssignmentFour {

    class PrecustorToSorting {
    public:
        PrecustorToSorting() {
            int x, y, z;

            x = 10; y = 20; z = 30;
            sort(&x, &y, &z);

            cout << x << " " << y << " " << z << endl;

            x = 20; y = 10; z = 30;
            sort(&x, &y, &z);


            cout << x << " " << y << " " << z << endl;

            x = 20; y = 30; z = 10;
            sort(&x, &y, &z);

            cout << x << " " << y << " " << z << endl;
        }

        /*
            Algorithm:
            1. Init z & sort X <=> Y
            2. Compare middle with z → place z in correct position
            3. Final check to ensure first < middle
        */
        void sort(int* x, int* y, int* z) {
            // Will store sorted values
            int firstPos;     // smallest value
            int middlePos;    // middle value
            int lastPos = *z; // assume z is largest initially

            // Step 1: sort x and y
            // After this: firstPos <= middlePos
            if (*x < *y) {
                firstPos = *x;
                middlePos = *y;
            }
            else {
                firstPos = *y;
                middlePos = *x;
            }

            // Step 2: compare middle value with z
            // If z is smaller than middle, swap them
            // After this: middlePos <= lastPos
            if (middlePos > lastPos) {
                int temp = middlePos;
                middlePos = lastPos;
                lastPos = temp;
            }

            // Step 3: final adjustment
            // Ensure firstPos is still the smallest
            if (middlePos < firstPos) {
                int temp = middlePos;
                middlePos = firstPos;
                firstPos = temp;
            }

            // Write sorted values back through pointers
            *x = firstPos; 
            *y = middlePos;
            *z = lastPos;    
        }
    };
}

using namespace AssignmentOne;
using namespace AssignmentTwo;
using namespace AssignmentThree;
using namespace AssignmentFour;


int main() {
	MetersToInches();
	BuyingPizza();
    LowestTerms();
    PrecustorToSorting();

	return 0;
}