#include <iostream>
#include "../labThree/person.cpp"
using namespace std;

void slideTen() {
	int num;
	int* p1; //missä
	p1 = &num;
	*p1 = 17;


	cout << p1 << endl;
	cout << *p1 << endl;
	cout << &p1 << endl;


}

void slideEighteen() {


	
}


void swapData(int* var1, int* var2) {
	int temp = *var2;

	*var2 = *var1;
	*var1 = temp;

	cout << "Swapped" << endl;
}

void slideTwenty() {
	int num1 = 10;
	int num2 = 20;

	swapData(&num1, &num2);
}

void slideTwentyFour() {
	int* p1;
	p1 = new int;

	cout << "Enter a number: ";
	cin >> *p1;

	*p1 = *p1 + 7;

	cout << "p* is " << *p1 << endl;
	cout << "p is " << p1 << endl;

	cout << "Enter a number: ";
	cin >> *p1;

	*p1 = *p1 + 7;

	cout << "p* is " << *p1 << endl;
	cout << "p is " << p1 << endl;
}

void slideThirtySixToSeven() {
	/* Write a program using integer pointers.
- Declare two integer variables(data1, data2) that store
10 and 20
- Declare an integer variable ‘sum’ and a pointer
variable ‘p’
- Store ‘100’ and ‘200’ to data1 and data2 using ‘p’ and
compute sum
- Print out the sum of data1 and data2 using ‘p’*/

	int data1 = 10;
	int data2 = 20;
	int sum;
	int* p;

	p = &data1;
	*p = 100;
	sum = *p;
	cout << "data1 is: " << data1 << endl;

	p = &data2;
	*p = 200;
	sum += *p;
	cout << "data2 is: " << data2 << endl;

	cout << "sum is: " << sum << endl;
}

void slideFortyThree() {

}

void slideFortyEightToNine() {
	int data1 = 10;
	int data2 = 20;
	int* p1 = &data1;
	int* p2 = &data2;

	*p1 = 300;

	cout << "data1: " << data1;
	


}

int incrementBasic(int x) {
	x++;
	return x;
}

void incrementAsterisk(int* x) {
	(*x)++;
}

void incrementAt(int& x) {
	x++;
}

void slideFiftyTWO() {
	int n = 5;

	n = incrementBasic(n);
	cout << n << endl;

	incrementAsterisk(&n);
	cout << n << endl;

	incrementAt(n);

	cout << n << endl;



}

void swwapValues(int& one, int& two) {
	int temp = one;
	one = two;
	two = temp;
}

void slideFiftyNineToSixtyOne() {
	int value1 = 20;
	int value2 = 40;

	cout <<"val1: " << value1 << "  val2:" << value2 << endl;

	swwapValues(value1, value2);


	cout <<"val1: " << value1 << "   val2:" << value2 << endl;
}

double pi = 3.14159;

void calculateCiruAndArea(double radius, double& area, double& circum) {
	area = pi * radius * radius;
	circum = pi * (2 * radius);
}

void sixtyTwoToThree() {
	/*
	Write a void function that takes the radius of the circle,
	and two parameters to compute the area and the
	circumference Use a value of 3.14159 for 𝜋.
	*/

	double rad(0), area(0), circu(0);

	cout << "What is circles radius?: ";
	cin >> rad;

	calculateCiruAndArea(rad, area, circu);

	cout << " The area of the circle is : " << area << endl;
	cout << " The circumference of the circle is : "
		<< circu << endl << endl;


}

void sixrtSeven() {
	int* envelope = new int;
	*envelope = 100;

	delete envelope;
}


void changeNameToPirkko(Person person) {
	person._name = "Pirkko";
}

void changeNameToPirrkko(Person& person) {
	person._name = "Pirrkko";
}

void changeNameToPirrlkko(Person* person) {
	person->_name = "Pirrkko";
}

int main() {
	//slideTen();
	//slideTwenty();
	//slideTwentyFour();
	//slideThirtySixToSeven();
	//slideFortyEightToNine();
	//slideFiftyTWO();
	//slideFiftyNineToSixtyOne();
	//sixtyTwoToThree();
	
	Person* envelope = new Person("Johan", 19);
	Person matti = Person("Matti", 54);
	Person* matti2 = envelope;
	
	envelope = &matti;

	changeNameToPirrkko(*matti2);

	cout << matti._name << endl;
	//cout << matti2._name;

	changeNameToPirkko(matti);
	changeNameToPirrkko(matti);
	changeNameToPirrlkko(envelope);

	sixrtSeven();
	delete envelope;

	return 0;
}