/*
Write a program to calculate the grade point average
(GPA) of a student by getting their grades for all their
subjects.
	- The program should input the number of subjects,
	followed by the grade obtained in each subject.
	
	- The program should calculate the average of the
	grade points and print it using switch statement.
*/

#include <iostream>
#include <cmath>
using namespace std;

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