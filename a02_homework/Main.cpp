#include <iostream>
#include <cctype>
using namespace std;

//Using name spaces for separating assignments for readebility.
namespace AssignmentOneTwo {
	//Basic class for creating object that stores two values x and y. 
	//They are later passed in to distance calculation object.
	class Point {
	public:
		double _x = 0;
		double _y = 0;
		double _z = 0;

		//Point in 2D Space
		Point(double x, double y) {
			_x = x;
			_y = y;

			cout << "2D POINT (x:" << _x << ", y:" << _y << ") created." << endl;

			//debug
			//cout << "Z?: " << _z << endl;
		}

		//Point in 3D Space
		Point(double x, double y, double z) {
			_x = x;
			_y = y;
			_z = z;

			cout << "3D POINT (x:" << _x << ", y:" << _y << ", z:" << _z << ") created." << endl;
		}


	};

	//Distance calculation object which calculates distance between two 'Point' -objects.
	class DistanceCalculator {
	public:
		//constructor that takes two parametres; two points
		//after calculating it calls double function to return calculated distance between two points.
		DistanceCalculator(Point first, Point second) {
			//if the points does not have z-axis, then calculate in 2D space automatically.
			if (first._z == 0 && second._z == 0) {
				cout << "Distance between these points in 2D space is " << calculateDistance(first, second) << ".\n\n" << endl;
			}
			else
			{
				int input = -1;
				cout << "Would you like to calculate distance in 2D or 3D space?\n\nINPUTS:\nCalculate in 2D space: 2\nCalculate in 3D space: 3\nQuit = 1";


				while (input != 1) {
					switch (input) {
					case 2:
						cout << "Distance between these points in 2D space is " << calculateDistance(first, second) << ".\n\n" << endl;
						input = -1;
						break;
					case 3:
						cout << "Distance between these points in 3D space is " << calculateDistance(first, second, true) << ".\n\n" << endl;
						input = -1;
						break;
					default:
						cout << "\n\nINPUT:";
						cin >> input;
						break;
					}
				}
			}
		}

		//Calculates distance using the Euclidean formula
		//s = sqrt( (x2 - x1)^2 + (y2 - y1)^2 )
		double calculateDistance(Point first, Point second) {
			return
				sqrt(
					pow((second._x - first._x), 2) +
					pow((second._y - first._y), 2)
				);
		}

		//ASSIGNMENT 2
		//Overload function of the first, but takes in three parametres and calculates distance in 3D space.
		double calculateDistance(Point first, Point second, bool is3D) {
			return 
				sqrt(
					pow((second._x - first._x), 2) +
					pow((second._y - first._y), 2) +
					pow((second._z - first._z), 2)
			);
		}
	};
};
namespace AssignmentThree{
	class Prime {
	public:
		Prime() {
			cout << "Prime numbers between 3-100:" << endl;
			
			//loop numbers between 3-100
			for (int x = 3; x <= 100; x++) {
				if (isPrime(x)) { //call is 'isPrime' function and if it returns true, it is a prime number and it is then printed.
					cout << x << " "; 
				}
			}
		}

		//prime function that return either true/false
		bool isPrime(int num) {
			if (num % 2 == 0) //fast check if the inputed number is dividale by two it is not prime.
				return false;

			//after simple 2 divison test was passed test all numbers between 3-n.
			for (int y = 3; y < num; y++) {
				if (num % y == 0) {
					return false;
				}
			}
			
			//if(3-n) check passed -> return true
			return true;
		}
	};
}
namespace AssignmentFour{
	class FeetAndIchesToMeters {
	public:
		int feet;
		double inches;
		char input = 'y';

		FeetAndIchesToMeters() {
			while (input == 'y') {
				cout << "Enter feet as an integer: ";
				cin >> feet;

				cout << "Enter inches as a double: ";
				cin >> inches;

				double meters = feetAndInchToMeters(feet, inches); //calculate feet and inches as meters
				double centimeteres = metersToCm(meters); //convert meters to centimeters

				printResult(meters, centimeteres); //print result in separate function

				cout << "Type Y/y to continue..." << endl;
				cin >> input;
				input = tolower(input); //convert all inputs to lowercase, so system does not have to compute Y and y seperately.
			}
		}

		//simple convertion function that returns feetandinches as metres with the formula given in the assignment.
		double feetAndInchToMeters(int feet, double inches) {
			return 0.3048 * (feet + inches/12.0);
		}

		//simple convertion from meters to cm 1m = 100cm.
		double metersToCm(double meters) {
			return meters * 100;
		}

		//function simply prints the given doubles.
		void printResult(double meters, double centimeres) {
			cout << "Given values are " << meters << " in meters and " << centimeres << " in centimeters." << endl;
		}
	};
}
namespace AssignmentFive {
	class MetersToInchAndFeet {
	public:
		double meters = 0;
		char input = 'y';

		MetersToInchAndFeet() {
			while (input == 'y') {
				cout << "\n\nEnter a number of meters as a double: "; 
				cin >> meters;

				calculateFeetAndInches(meters);

				cout << "Type Y/y to continue..." << endl;
				cin >> input;
				input = tolower(input); //convert all inputs to lowercase, so system does not have to compute Y and y seperately.
			}
		}


		//function that does the convertions to feet & inches
		void calculateFeetAndInches(double meters) {
			double rawFeet = meters * 3.28084; //first calculate whole value to feet value with decimals.
			int feet = (int)rawFeet; //cut out the decimals and get only the feet in integer.

			double inches = (rawFeet - feet) * 12; //iches are calculated with rawValue-feet -> convert the remaining decimal values to inches.

			cout << "Converted to feet and inches is: " << feet << " feet. " << inches << " inches." << endl; //print value
		}


	};
}

//MAIN
using namespace AssignmentOneTwo;
using namespace AssignmentThree;
using namespace AssignmentFour;
using namespace AssignmentFive;

namespace AssignmentFive{

	class ConverterDriver {
	public:
		char input = 'y';
		int conversionType = 0;

		ConverterDriver() {
			while (input == 'y') {
				cout << "\n\n### Welcome to unit converter. ###\nEnter 1 to do Feet to Meters coversion.\nEnter 2 to doo Meters to Feet conversion.\n\nSelect conversion: ";

				cin >> conversionType;

				switch (conversionType) {
					case 1:
						FeetAndIchesToMeters(); //use the class which converts feet to meters if user presses 1
						break;
					case 2:
						MetersToInchAndFeet(); //use the class which converts meters to feet if user presses 2
						break;
					default:
						cout << "\n\n### Welcome to unit converter. ###\nEnter 1 to do Feet to Meters coversion.\nEnter 2 to doo Meters to Feet conversion.\n\nSelect conversion: ";
						break;
				}
				
				cout << "Type Y/y to choose another conversion..." << endl;
				cin >> input;
				input = tolower(input); //convert all inputs to lowercase, so system does not have to compute Y and y seperately.
			}
			

		}
	};
}

using namespace AssignmentFive;

int main() {
	//*ASSINMENT ONE
	//Point first2D = Point(150.1, 0);
	//Point second2D = Point(-205.4, -20);

	//DistanceCalculator(first2D, second2D);

	//*ASSIGNMENT TWO
	//Point first3D = Point(-100, -30, -1);
	//Point second3D = Point(-12, 29, -9);

	//DistanceCalculator(first3D, second3D);

	//*ASSINGMENT THREE
	//Prime();

	//*ASSIGNMENT FOUR
	//FeetAndIchesToMeters();1


	//*ASSIGNMENT FIVE
	//MetersToInchAndFeet();

	//*ASSIGNEMNTE SIX
	ConverterDriver();

	return 0;
}

