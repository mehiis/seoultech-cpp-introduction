#include <iostream>
using namespace std;

/*
• slide 18~21
• slide 25~27
*/

struct ComplexNumber {
	double real;
	double imaginary;
	char sign = '+';
};

ComplexNumber addComplexNumbers(ComplexNumber c1, ComplexNumber c2);

void slideEighteenToTwentyOne() {
	/*
	Write a program that takes two complex numbers as
	structures and adds them with the use of functions
	*/

	ComplexNumber c1, c2;

	cout << "Enter the real part of the first complex number: ";
	cin >> c1.real;
	cout << "Enter the imaginary part of the first complex number: ";	
	cin >> c1.imaginary;

	cout << "Enter the real part of the second complex number: ";
	cin >> c2.real;
	cout << "Enter the imaginary part of the second complex number: ";
	cin >> c2.imaginary;


	ComplexNumber result = addComplexNumbers(c1, c2);
	cout << "The sum of the two complex numbers is: " << result.real << " " << result.sign << " " << result.imaginary << "i" << endl;

}

ComplexNumber addComplexNumbers(ComplexNumber c1, ComplexNumber c2) {
	ComplexNumber result;
	result.real = c1.real + c2.real;
	result.imaginary = c1.imaginary + c2.imaginary;

	//handle the minus sign for the imaginary part
	if (result.imaginary < 0) {
		result.sign = '-';
		result.imaginary = -result.imaginary;
	} else {
		result.sign = '+';
	}

	return result;
}

void slideTwentyFiveToTwentySeven() {

}

int main() {
	slideEighteenToTwentyOne();
	slideTwentyFiveToTwentySeven();
	return 0;
}