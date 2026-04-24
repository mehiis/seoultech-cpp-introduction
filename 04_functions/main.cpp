#include <iostream>
using namespace std;


double add(double num1, double num2) {
	return num1 + num2;
}

double add(double num1, double num2, double num3) {
	return num1 + num2 + num3;
}

void run() {
	int total = add(10, 20);
	cout << "Total is " << total << ".";
}

double totalCost(int numbersPar, double pricePar) {
	const double TAXRATE = 0.05;
	double subTotal;

	subTotal = pricePar * numbersPar;

	return (subTotal + (subTotal * TAXRATE) );
}


void slideTen(){
	/*Write a program that computes the size of a doghouse
	given user’s budget. The cost of a doghouse is $10.50
	per square feet. */

	double budged;
	const double DOGHOUSE_PRICE_PER_SQUAREFEET = 10.50;

	cout << "Enter the amout budgeded for your doghouse $: ";
	cin >> budged;

	double dogHouseSizeAfforded = budged / DOGHOUSE_PRICE_PER_SQUAREFEET;

	cout << "You can affor a dog house of size " << dogHouseSizeAfforded << " square feet." << endl;

	double oneWallLenght = sqrt(dogHouseSizeAfforded);
	
	cout << "One wall lenght is " << oneWallLenght;
}

void slideTwelve() {
	/* Write a program that adds 2 integers. */

	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	
	cout << "The total is " << sum << endl;
}

void slideSeventeen(){
	/*Write a function that adds three real numbers and a driver program for testing*/

	double num1, num2, num3;
	cout << "Enter three real numbers: ";

	cin >> num1 >> num2 >> num3;

	cout << "Calling the add function...\n";
	cout << "The sum of three numbers is " << add(num1, num2, num3) << endl;
}

void slideNineteenToTwentyTwo(){
	/*
	Write a function that runs ‘add’ function defined in the
	previous slide and display the output of the function call.*/

	run();
}

void slideTwentyFourFive(){
/*
• Write a function that calculates total cost and a driver
program
- Function name: totalCost
- Input: the number of items, the price for each item
- Output: the total cost including 5% sales tax
*/

	double price, bill;
	int number;

	cout << "Enter the number of item purchased: ";
	cin >> number;

	cout << "Enter the price per item $: ";
	cin >> price;

	bill = totalCost(number, price);



}

double adding(int int1, int int2) { return int1 + int2; }

double adding(float real1, float real2) { return real1 + real2; }

void slideFourtySixToEight(){
/*Write a program that adds two integers and two real numbers using functions. */
	adding(1, 1);
	adding(1.5f, 1.5f);
}

double avveraggge(int num1, int num2) {
	return (num1 + num2) / 2;
}

double avveraggge(int num1, int num2, int num3) {
	return (num1 + num2 + num3) / 3;
}


void slideFiftyfourToSix(){
/*Can you write a program that computes the average of
two real numbers and three real numbers using
functions. */

	avveraggge(5, 10);
	avveraggge(5, 10, 10);
}

int main() {
	//slideTen();
	//slideTwelve();
	//slideSeventeen();
	//slideNineteenToTwentyTwo();
	//slideTwentyFourFive();

	return 0;
}

