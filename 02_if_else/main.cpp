#include <iostream>
using namespace std;

int a = 10;
int b = 5;
int c = 100;
int value;

void slideSeven() {
	cout << "\n\n ### SLIDE SEVEN ###" << endl;

	if (a > b) {
		cout << "A is bigger than B. Wow!" << endl;
	}
	else
	{
		cout << "A is smaller than B. Sad." << endl;
	}
}

void slideTen() {
	cout << "\n\n ### SLIDE TEN ###" << endl;
	if (a <= 100 && b <= 100) {
		cout << "A and B are smaller than 100." << endl;
	}

	if (a <= 7 || b <= 7) {
		cout << "Either A or B is smaller than 7?" << endl;
	}

	if (a != 67) {
		cout << "A is not 67!!" << endl;
	}
}

void slideEleven() {
	cout << "\n\n ### SLIDE ELEVEN ###" << endl;

	bool x = 0;		//false
	bool y = 100;	// true
	bool z = 15.5;	//true

	int count = 0, limit = 10;

	cout << "((count == 0) && (limit < 20 ))  :  " << ((count == 0) && (limit < 20)) << endl;
	cout << "\ncount == 0 && limit < 20   :   " << (count == 0 && limit < 20) << endl;
	cout << "\n(limit > 20) || (count < 0)	:	" << ((limit > 20) || (count < 0)) << endl;
	cout << "\ncount != 20	:	" << (count != 20) << endl;
	cout << "((limit/count)>7)||(limit>20)	:	" << (((count/limit)>7) || (limit > 20)) << endl;
	cout << "(5 && 7)+(!6)	:	" << ((5 && 7) + (!6)) << endl;

}

void slideFourteen() {
	cout << "\n\n\nINPUT LESS THAN 10!\n" << endl;
	cin >> value;

	if (value <= 10) {
		cout << "\nYOU WIN!!" << endl;
	}
	else {
		cout << "\nYOU LOSE!" << endl;
	}
}

void slideSeventeenEighteenTwenty() {
	cout << "\n\n\nINPUT A NUMBER: \n" << endl;
	cin >> value;

	if (value > 10) {
		cout << "Your value is bigger than 10." << endl;
	}
	else if (value < 10) {
		cout << "Your value is less than 10." << endl;
	}
	else {
		cout << "Your value is 10." << endl;
	}
}

void slideTwentyThree() {
	cout << "\n\n\nINPUT A NUMBER: \n" << endl;
	cin >> value;

	if (value > 10) {
		cout << "Your lose!" << endl;
	}
	else if (value < 10) {
		cout << "You win!" << endl;

		if (value < 5) {
			cout << "The score is 10." << endl;
		}
		else if (value > 5 && value < 10) {
			cout << "The score is 5." << endl;
		}
	}
	else {
		cout << "Your choose 10." << endl;
	}
}

void slideTwentyFive() {
	char input;
	cout << "Please enter one of [K]eep going or [q]uit: " << endl;
	cin >> input;

	switch (input) {
		case 'K':
		case 'k':
			cout << "You decided to keep going!" << endl;
			break;

		case 'Q':
		case 'q':
			cout << "You decided to quit. Bye!" << endl;
			break;


		default:
			cout << "" << endl;
			cout << "Unrecognized option: [ " << input << " ]." << endl;
			break;
	}
}

void fixedGrade() {
	double gradePoints;
	cout << "\n\nHow many points did you earn? ";
	cin >> gradePoints;

	if (gradePoints >= 10.0) cout << "Your got a S!\n";
	else if (gradePoints >= 9.0) cout << "Your got a A!\n";
	else if (gradePoints >= 8.0) cout << "Your got a B!\n";
	else if (gradePoints >= 7.0) cout << "Your got a C!\n";
	else if (gradePoints >= 6.0) cout << "Your got a D!\n";
	else if (gradePoints >= 5.0) cout << "Your got a E!\n";
	else if (gradePoints >= 0.0) cout << "Your got a F!\n";
}

int main() {
	cout << "\n\n\nMAIN START" << endl;
	
	slideSeven();
	slideTen();
	slideEleven();
	slideFourteen();
	slideSeventeenEighteenTwenty();
	slideTwentyThree();
	slideTwentyFive();
	fixedGrade();

	cout << "\n\n\nMAIN END" << endl;
	return 0;
}