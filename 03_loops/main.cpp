#include <iostream>
using namespace std;

void slideSix() {
	int counter = 0;
	int howManyTimes = 0;

	cout << "How many greeting do you want? " << endl;
	cin >> howManyTimes;

	while (counter < howManyTimes) {
		cout << "Hello " << endl;
		counter++;
	}

	cout << "That's all!\n" << endl;

}

void slideEight() {
	int counter = 0;
	int howManyTimes = 0;

	cout << "How many greeting do you want? " << endl;
	cin >> howManyTimes;

	do {
		if (howManyTimes <= 0)
			break;

		cout << "Hello " << endl;
		counter++;
	} while (howManyTimes > counter);

	cout << "That's all!\n" << endl;

}

void slideElevenAndThirteen() {
	int counter = 0;
	int howManyTimes = 0;

	cout << "How many greeting do you want? " << endl;
	cin >> howManyTimes;

	for (int i = 0; i < howManyTimes; i++) {
		cout << "Hello " << endl;
	}

	cout << "That's all!\n" << endl;
}


void slideFiveteen() {
	int value;

	cout << "Enter a number N: ";
	cin >> value;

	for (int i = 0; i < value; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			cout << i << " ";
		}
	}

}

void slideSeventeen() {
	for (int i = 12; i <= 14; i++) {
		cout << "\n\nTable of " << i << endl;
		for (int j = 1; j <= 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
}

void slideNineteen() {
	int inputVal = 0;
	int sum = 1;

	do{
		cout << "Enter a number: ";
		cin >> inputVal;
		sum += inputVal;
	} while (inputVal != -1);

	cout << "Sum = " << sum;
}

void slideTwentyone() {
	int value;

	cout << "Enter a number N: ";
	cin >> value;

	for (int i = 0; i < value; i++) {
		if (i % 2 == 0)
			continue;

		if (i >= 100)
			break;

		cout << i << endl;
	}
}

void slideTwentythree() {
	int number, sum = 0, count = 0;
	cout << "Enter 4 negative numbers: \n";
	while (++count <= 4) {
		cin >> number;
		if (number >= 0) {
			cout << "ERROR: positive number"
				<< " of zero was entered as the\n"
				<< count << "th number! Input ends "
				<< "with the " << count << "th number.\n"
				<< count << "th number was not added in.\n";
			break;
		}
		sum = sum + number;
	}
	cout << sum << " is the sum of the first "
		<< (count - 1) << " numbers.\n\n";
}

void slideTwentySix() {
	int number, sum = 0, count = 0;
	cout << "Enter 4 negative numbers: \n";
	while (count < 4) {
		cin >> number;
		if (number >= 0) {
			cout << "ERROR: positive number"
				<< " of zero was entered as the\n"
				<< count << "th number! Input ends "
				<< "with the " << count << "th number.\n"
				<< count << "th number was not added in.\n";
			continue;
		}
		count++;
		sum = sum + number;
	}
	cout << sum << " is the sum of the first "
		<< (count - 1) << " numbers.\n\n";
}


void taxi() {
	float distanceInKm = 0.0;

	float minutesTravelled = 0;
	float totalBill = 0.0;

	const float SERVICE_FEE = 2.0;
	const float TIME_FEE = 0.2;
	const float SHORT_DISTANCE_FEE = 0.5;
	const float LONG_DISTANCE_FEE = 1.0;

	cout << "Enter the travel distance (In kilometres): ";
	cin >> distanceInKm;
	cout << "Enter the travel duration (In minutes): ";
	cin >> minutesTravelled;

	totalBill += SERVICE_FEE;

	for (int i = 0; i < (int)distanceInKm; i++) {
		if (i >= 2) {
			totalBill += SHORT_DISTANCE_FEE;
		}
		else if (i >= 6) {
			totalBill += LONG_DISTANCE_FEE;
		}
	}

	for (int i = 0; i < (int)minutesTravelled; i++) {
		totalBill += TIME_FEE;
	}

	double metersLeft = distanceInKm - (int)distanceInKm;
	cout << metersLeft << " left" << endl;

	if (metersLeft > 0) {
		if (distanceInKm <= 2) {
			totalBill += (metersLeft / SHORT_DISTANCE_FEE);
		}
		else {
			totalBill += (LONG_DISTANCE_FEE / metersLeft);
		}
	}



	cout << "Total bill amount is $" << totalBill;
}

int main() {
	//slideSix();
	//slideEight();
	//slideElevenAndThirteen();
	//slideFiveteen();
	//slideSeventeen();
	//slideNineteen();
	//slideTwentyone();
	//slideTwentythree();
	//slideTwentySix();
	taxi();

	return 0;
}