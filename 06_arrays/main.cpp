#include <iostream>
using namespace std;


void slideForteen() {
	int array[10];

	for (int i = 0; i < 10; i++) {
		cout << "Enter the element " << i+1 << ": ";
		cin >> array[i];
	}

	cout << "\n\nPrint elements: ";
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}
}

void slideSixteenToSeventeen() {
	/*
	Write a program that reads in five scores using an array
	and shows how much EACH score differs from the highest score.
	*/

	int scores[5];
	int maxScore = 0;
	
	for (int i = 0; i < 5; i++) {
		cout << "Write a score " << i + 1 << ": ";
		cin >> scores[i];

		if (scores[i] > maxScore)
			maxScore = scores[i];
	}

	cout << "\n\nThe max score was " << maxScore << ".\n\nThe scores an their differences from the highest are: " << endl;
	int counter = 0;
	for (int i : scores) {
		counter++;

		if (i != maxScore)
			cout << "Score #" << counter << " is off " << maxScore << " by " << maxScore - i << endl;
		else
			cout << "Score #" << counter << " is the max score of " << maxScore << "." << endl;
	}
}

void slideTwentyOne() {
	/*Modify the program of Practice 2 with constant array size. */

	const int INT_SIZE = 5;
	int scores[INT_SIZE];
	int maxScore = 0;

	for (int i = 0; i < INT_SIZE; i++) {
		cout << "Write a score " << i + 1 << ": ";
		cin >> scores[i];

		if (scores[i] > maxScore)
			maxScore = scores[i];
	}

	cout << "\n\nThe max score was " << maxScore << ".\n\nThe scores an their differences from the highest are: " << endl;
	int counter = 0;
	for (int i : scores) {
		counter++;

		if (i != maxScore)
			cout << "Score #" << counter << " is off " << maxScore << " by " << maxScore - i << endl;
		else
			cout << "Score #" << counter << " is the max score of " << maxScore << "." << endl;
	}
}

void fillUp(int arr[], int amount) {
	for (int i = 0; i < amount; i++)
		arr[i] = i;
		
}

void slideTwentySeven() {
	/* 
	Write a fillUp function to get integer numbers to an array.
	The function has two parameters, an array and the
	number of integers you want to get
	*/

	int scores[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int numbersOfScores = 10;

	fillUp(scores, numbersOfScores);

	for(int i: scores)
		cout << scores[i] << " ";


}


void slideTwentyNine() {

}

/*Create a dynamic array and use the function fillUp to get elements of the dynamic array. */
typedef int* arrayPointer;

void slideThirtyFiveToSix() {
	int arraySize = 10;

	arrayPointer array;
	array = new int[arraySize];
	
	fillUp(array, arraySize);

	for (int i = 0; i < arraySize; i++) {
		cout << array[i] << " ";
	}
}

void slideFortyOneToThree() {
	int array[3][5] = {
		{0, 1, 2, 3, 4 },
		{5, 6, 7, 8, 9},
		{10, 11, 12, 13, 14}
	};

	int (*p)[5];
	p = array;

	cout << "p: " << p << endl;;
	cout << "p+1: " << p + 1<<endl;
	cout << "p+2: " << p + 2 << "\n\n\n" <<endl;

	cout << "p+2: " << p + 3 << endl;
	cout << "&p[2]: " << &p[3] << endl;
	cout << "*p+2: " << *p + 3 << endl;

	cout << "array[2][3] = *(*(p+2) + 3) = " << array[2][3] << " = " << *(*(p + 2) + 3) << endl;
	cout << "array[0][3] = *(*(p) + 3) = " << array[0][3] << " = " << *(*(p) + 3) << endl;
	cout << "array[1][1] = *(*(p+1) + 1) = " << array[1][1] << " = " << *(*(p + 1) + 1) << endl;
}

void slideFiftyThree() {
	/*
	Write a program that computes the squares of elements in an array, stores the squares in the same place, and prints them.
		- Input : [ 1, 2, 3, 4, 5 ]
		- Output: [ 1, 4, 9, 16, 25] 
	*/

	int elements[2][5] = { {1, 2, 3, 4, 5}, {} };

	typedef int* arrayPointer;
	arrayPointer array;

	int (*p)[5];
	p = elements;


	for (int x = 0; x < 5; x++) {
		int currentValue = *(*(p) + x);

		*(*(p + 1) + x) = currentValue * currentValue;
	}

	for (int x = 0; x < 5; x++) {
		cout << *(*(p + 1) + x) << " ";
	}
}




int main() {
	//slideForteen();
	slideSixteenToSeventeen();
	slideTwentyOne();
	//slideTwentySeven();
	//slideTwentyNine();
	//slideThirtyFiveToSix();
	//slideFortyOneToThree();
	slideFiftyThree();

	return 0;
}