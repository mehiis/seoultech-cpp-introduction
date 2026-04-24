#include <iostream>
using namespace std;

namespace assignmentOne {
	class HourNotationConverter
	{
	    public:
            HourNotationConverter();
		    ~HourNotationConverter();
	    private:
		    int* hours = new int;
		    int* minutes = new int;
		    char* amPm = new char;
		    char userChoice;

            // Function to change 24h to 12h
            void convert(int* h, char* p) {
                // If it is 12 or more, it is PM
                if (*h >= 12) {
                    *p = 'p';
                    // Only subtract 12 if it's afternoon but not 12
                    if (*h > 12) {
                        *h = *h - 12;
                    }
                }
                else {
                    // If it is less than 12, it is AM
                    *p = 'a';
                    // If it is 0, that means it is 12 AM (midnight)
                    if (*h == 0) {
                        *h = 12;
                    }
                }
            }

            // Function to show the result on the screen
            void printTime(int* h, int* m, char* p) {
                cout << "The time is: " << *h << ":";

                // If minutes are small like 5, we need to print 05
                if (*m < 10) {
                    cout << "0";
                }

                cout << *m << " " << *p << ".m." << endl;
            }
	    };
        //constructor
        HourNotationConverter::HourNotationConverter()
	    {
            // Loop to keep the program running
            do {
                // ask for ipnut
                cout << "Enter the hours (24h format): ";
                cin >> *hours; // Use * to put the value into the pointer address
                cout << "Enter the minutes: ";
                cin >> *minutes;

                // Call the conversion function
                convert(hours, amPm);

                // Call the output function
                printTime(hours, minutes, amPm);

                // Ask user if they want to go again
                cout << "Enter Y or y to continue, anything else quits.";
                cin >> userChoice;
                cout << endl;

            } while (userChoice == 'y' || userChoice == 'Y');
	    }

        //deconstructor
        HourNotationConverter::~HourNotationConverter()
	    {
            // Clean up memory!
            delete hours;
            delete minutes;
            delete amPm;
	    }
}

namespace assignmentTwo {
    class Converter {
    public:
        Converter();
        ~Converter();
    private:
        void ConvertToMPH(int paceMin, int paceSec, double& mph); // First definition: Converts running pace (minutes and seconds).
        void ConvertToMPH(double kph, double& mph); // Second definition: Converts KPH to MPH.
        double mph;
    };

    // We use double& for mph so the function can modify the variable in main
    void Converter::ConvertToMPH(int paceMin, int paceSec, double& mph) {
        double secspermile;

        // Calculate total seconds per mile
        secspermile = paceMin * 60 + paceSec;

        // Calculate MPH
        mph = (1.0 / secspermile) * 3600.0;

    }

    // Overloaded function
    void Converter::ConvertToMPH(double kph, double& mph) {
        // 1 mile is  ~1.61 km
        mph = kph / 1.61;
    }

    Converter::Converter() {
        // Test the first function (Pace to MPH)
        ConvertToMPH(5, 30, mph);
        cout << "5:30 pace is " << mph << " MPH." << endl;

        ConvertToMPH(7, 30, mph);
        cout << "7:30 pace is " << mph << " MPH." << endl;

        ConvertToMPH(8, 0, mph);
        cout << "8:00 pace is " << mph << " MPH." << endl;

        // Test the second function (KPH to MPH)
        ConvertToMPH(10, mph);
        cout << "10 kph is " << mph << " MPH." << endl;

        ConvertToMPH(20, mph);
        cout << "20 kph is " << mph << " MPH." << endl;

        ConvertToMPH(120, mph);
        cout << "120 kph is " << mph << " MPH." << endl << endl;
    }

    Converter::~Converter() {

    }

}

namespace assignemtThree {
    class Histogram
    {
    public:
        Histogram();
    };

    Histogram::Histogram()
    {
        //Array of grades; grades[0] will hold the count of 0s, grades[1] for 1s, etc.
        int grades[6] = { 0, 0, 0, 0, 0, 0 };

        int currentGrade = 0;

        cout << "Enter each grade and then -1 to stop:" << endl;

        // Loop to handle a number of grades
        while (currentGrade != -1) {
            cin >> currentGrade;

            // Check if the input is a valid grade between 0 and 5
            if (currentGrade >= 0 && currentGrade <= 5) {

                // If the user enters 3, it goes to grades[3] and adds 1.
                grades[currentGrade] = grades[currentGrade] + 1;

            }
            else if (currentGrade != -1) {
                // Tell the user if they typed a bad number
                cout << "That is not a valid grade. Please enter 0, 1, 2, 3, 4, or 5." << endl;
            }
        }

        // Output the histogram count at the end
        cout << endl << "The historygram for the quiz: " << endl;
        for (int i = 0; i <= 5; i++) 
            cout << grades[i] << " grade" << ( (grades[i] != 1) ? "s" : "") << " of " << i << "." << endl;
        
    }
}

using namespace assignmentOne;
using namespace assignmentTwo;
using namespace assignemtThree;

int main() {
    //HourNotationConverter();
    //Converter();
    Histogram();
	return 0;
}