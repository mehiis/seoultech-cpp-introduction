#include <iostream>
using namespace std;

namespace assignment01 {
	/* Write a program that
		- defines a structure type complexNumber withnmember variables, double real and double imag.
		- asks a user how many complex numbers he wants to input.
		- reads complex numbers from a user.
		- stores them into an array of structure.
		- computes the sum of complex numbers.
*/


	//a struct of complex numbers
	struct ComplexNumber {
		double real;
		double imag;
		char sign; // member variable to store the sign of the complex number
	};

	void calculateComplexNumbers() {
		int* amountOfComplexNumbers = new int; // pointer to store the amount of complex numbers

		//ask the user how many numbers they want to input
		cout << "How many complex numbers do you want to input? ";
		cin >> *amountOfComplexNumbers;

		ComplexNumber* complexNumbers = new ComplexNumber[*amountOfComplexNumbers]; // dynamically set an array of complex based on the user's input

		//read  numbers from the user and store them in the array
		for (int i = 0; i < *amountOfComplexNumbers; i++) {
			cout << "Enter the real part of complex number " << i + 1 << ": ";
			cin >> complexNumbers[i].real;
			cout << "Enter the imaginary part of complex number " << i + 1 << ": ";
			cin >> complexNumbers[i].imag;
		}

		ComplexNumber sum = { 0, 0 }; // initialize the sum of complex numbers to 0

		// compute the sum of complex numbers
		for (int i = 0; i < *amountOfComplexNumbers; i++) {
			sum.real += complexNumbers[i].real;
			sum.imag += complexNumbers[i].imag;
		}

		// determine the sign of the sum of complex numbers
		if(sum.imag >= 0) {
			sum.sign = '+';
		} else {
			sum.sign = '-';
			sum.imag = -sum.imag; // make the imaginary part positive for display purposes
		}

		// output the sum of complex numbers
		cout << "The sum of the complex numbers is: " << sum.real << sum.sign << sum.imag << "i" << endl;

	}

}
namespace assingment02{
	/*
	* Define a class for a type called Circle. An object of type
	Circle is used to display the area, diameter, and
	circumference of a circle based on the radius of that object. 
	*/

	double PI = 3.14159265358979323846;

	// a class of circle
	class Circle {
	public:
		Circle(); // constructor
		~Circle(); // destructor
		double getRadius(); // getter for the radius
		void setRadius(double rad); //setter for the radius
		double calculateArea(); // calculate the area of the circle
		double calculateDiameter(); // calculate the diameter of the circle
		double calculateCircumference(); // calculate the circumference of the circle
	private:
		double radius; // member variable to store the radius of the circle
	};

	// constructor for the Circle class that prompts the user to enter the radius and then calculates and displays the area, diameter, and circumference of the circle
	Circle::Circle() {
		double radius;
		cout << "Enter the radius of the circle: ";
		cin >> radius;
		setRadius(radius);
		cout << "The area of the circle is: "
			<< calculateArea() << endl;
		cout << "The diameter of the circle is: "
			<< calculateDiameter() << endl;
		cout << "The circumference of the circle is: "
			<< calculateCircumference() << endl;
	}

	// destructor for the Circle class
	Circle::~Circle() {}

	// implementation of the member functions of the Circle class
	double Circle::getRadius() {
		return radius;
	}

	// setter for the radius
	void Circle::setRadius(double rad) {
		radius = rad;
	}

	// calculate the area of the circle
	double Circle::calculateArea() {
		return PI * radius * radius;
	}

	// calculate the diameter of the circle
	double Circle::calculateDiameter() {
		return 2 * radius;
	}

	// calculate the circumference of the circle
	double Circle::calculateCircumference() {
		return 2 * PI * radius;
	}
}
namespace assingment03 {
	/*
	* Write a definition of a class named Point that might be used to store and manipulate the location of a point in the plane.
	
	• The member functions should be implemented:
		- a member function, set, to set the private data aftercreation
		- a member function to move the point a vertical distance and a horizontal distance specified by the first and second arguments.
		- a member function that rotates the point 90 degrees counterclockwise about the origin.
		- two member functions to retrieve the current coordinates of the point.
	• Test with several points exercise member functions.
	*/

	class Point {
	public:
		Point(); // constructor
		~Point(); // destructor
		void set(int xval, int yval);
		void move(int xval, int yval);
		void rotate();
		double getX();
		double getY();
	private:
		int x;
		int y;
	};

	// default constructor initializes the point at the origin (0, 0)
	Point::Point() {
		
	
	} 
	Point::~Point() {} // destructor
	
	//set the private data after creation
	void Point::set(int xval, int yval) {
		x = xval;
		y = yval;

		cout << "Initial point set to: (" << x << ", " << y << ")" << endl;
	}
	
	// move the point a vertical distance and a horizontal distance specified by the first and second arguments
	void Point::move(int xval, int yval) {
		x += xval;
		y += yval;

		cout << "Move the point by " << xval << " horizontal and " << yval << " vertically: (" << getX() << ", " << getY() << ")" << endl;
	}

	// rotate the point 90 degrees counterclockwise about the origin
	void Point::rotate() {
		int temp = x;
		x = -y;
		y = temp;

		cout << "Rotate 90 degrees counterclockwise: (" << x << ", " << y << ")" << endl;
	}

	// retrieve the current coordinates of the point
	double Point::getX() {
		return x;
	}

	// retrieve the current coordinates of the point
	double Point::getY() {
		return y;
	}
}
namespace assingment04 
{
/*
	A class of CounterType is used to count things, so it records a count that is a nonnegative integer number.
	It has mutators to increment by 1 and decrement by 1, but no member allows the counter value to go negative.
	There is an accessor that returns the count value, and a display function that displays the count value on the screen.

	The program should increase count and then decrease count:
		- reads the maximum value named maxCount that the counter can count from a user
		- increases the count only if integers in [1, maxCount] are divisible by 3
		- decrease count maxCount times, but only decrements to zero
*/

	class CounterType {
	private:
		int count = 0; // member variable to store the count value
		int maxCount = 0; // member variable to store the maximum count value

	public:
		CounterType(int maxCount); // constructor
		~CounterType(); // destructor

		void setMaxCount(int max); // setter for the maximum count value
		int getMaxCount(); // getter for the maximum count value

		void increment(); // increment the count by 1
		void decrement(); //  decrement the count by 1

		int getCount(); // return the count value

		void display(); // display function to display the count value on the screen
	};

	// default constructor initializes count to 0 and maxCount to 0
	CounterType::CounterType(int maxCount) {
		setMaxCount(maxCount);

		// check if the user enters a negative value for maxCount
		if(getMaxCount() < 0) {
			cout << "Error: maxCount cannot be negative." << endl;
			exit(1); // exit if the user enters a negative value for maxCount
		}

		// increases the count only if integers in [1, maxCount] are divisible by 3
		for(int i = 1; i <= getMaxCount(); i++) {
			if(i % 3 == 0) {
				increment();
			}
		}

		display(); // display the count value on the screen

		// decrease count maxCount times, but only decrements to zero
		cout << "\nStarting at counter value " << getCount() << " and decrementing " << getMaxCount() << " times only decrements to zero." << endl;
		for(int i = 0; i < getMaxCount(); i++) {
			cout << getCount() << " ";
			decrement();
		}
	}

	//destructor for the CounterType class
	CounterType::~CounterType() {}

	// setter for the maximum count value
	void CounterType::setMaxCount(int max) {
		maxCount = max;
	}

	//increment the count by 1 only if integers in [1, maxCount] are divisible by 3
	void CounterType::increment() { count++; }

	//decrement the count by 1 but only decrements to zero
	void CounterType::decrement() { if(count > 0) count--; }

	// display function to display the count value on the screen
	int CounterType::getCount() {
		return count;
	}

	int CounterType::getMaxCount() {
		return maxCount;
	}

	void CounterType::display() {
		cout << "There are " << getCount() << " numbers between 1 and " << getMaxCount() << " that are divisible by 3." << endl;
	}
}
namespace assingment05 {
	/*
	Define a class called Rectangle that has two member variables of type double to represent the width and height of a rectangle.
		• Include these member functions:
			- A constructor to construct the Rectangle class using width and height as arguments, a default constructor that initializes both width and height to 5.
			- A member function each to set width and height.
			- Member functions to get the values of width and height.
			- A member function that computes the area of the rectangle.
			- A output function to display the width, height, and area of the rectangle.
	*/

class Rectangle {
	private:
		double width; // member variable to store the width of the rectangle
		double height; // member variable to store the height of the rectangle

		

	public:
		Rectangle(double width, double height); // constructor
		Rectangle(); // default constructor that initializes both width and height to 5
		~Rectangle(); // destructor
		
		void setWidth(double w); // setter for the width
		double getWidth(); // getter for the width

		double getHeight(); // getter for the height
		void setHeight(double h); // setter for the height

		double calculateArea(); // calculate the area of the rectangle

		void display(); // output function to display the width, height, and area of the rectangle
	};

	// constructor for the Rectangle class using width and height as arguments
	Rectangle::Rectangle(double width, double height) {
		setWidth(width);
		setHeight(height);
	}

	// default constructor that initializes both width and height to 5
	Rectangle::Rectangle() {
		setWidth(5);
		setHeight(5);
	}

	Rectangle::~Rectangle() {}

	void Rectangle::setWidth(double w) { width = w; }
	double Rectangle::getWidth() { return width; }

	void Rectangle::setHeight(double h) { height = h; }
	double Rectangle::getHeight() { return height; }

	double Rectangle::calculateArea() { return width * height; }

	// output function to display the width, height, and area of the rectangle
	void Rectangle::display() {
		cout << "The width of the rectangle is " << getWidth() << endl;
		cout << "The height of the rectangle is " << getHeight() << endl;
		cout << "The area of the rectangle is " << calculateArea() << endl;
	}
}


using namespace assignment01;
using namespace assingment02;
using namespace assingment03;
using namespace assingment04;
using namespace assingment05;

int main() {
	//assignment 01
	//calculateComplexNumbers();

	//cout << endl; // add a line break between assignments

	//assignment 02S
	//Circle circle;

	//cout << endl; // add a line break between assignments

	//assignment 03
	//Point A;
	//A.set(1, 2);
	//A.rotate();
	//A.rotate();
	//A.rotate();
	//A.rotate();
	//A.rotate();

	//Point B;
	//B.set(2, 3);
	//B.move(1, 1);
	
	//Point C;
	//C.set(5, -4);
	//C.move(-5, 4);


	//assingment 04
	//int maxCount;

	//cout << "\n\nWhat is the maximum value of the counter? ";
	//cin >> maxCount;

	//CounterType ct(maxCount);

	//cout << endl; // add a line break between assignments


	//assingment 05
	double width, height;
	char input = 'y';
	
	cout << "What is the width? ";
	cin >> width;

	cout << "What is the height? ";
	cin >> height;

	Rectangle rectangle(width, height);
	rectangle.display();

	while (input == 'y' || input == 'Y') {
		cout << "\nDo you want to change the value of the width(y/n)? ";
		cin >> input;
		
		if (input == 'y' || input == 'Y') {
			cout << "What is the new width? ";
			cin >> width;
			rectangle.setWidth(width);
		} else { break; }

		cout << "Do you want to change the value of the height(y/n)? ";
		cin >> input;
		
		if(input == 'y' || input == 'Y') {
			cout << "What is the new height? ";
			cin >> height;
			rectangle.setHeight(height);
		} else { break; }

		rectangle.display();
	}

	rectangle.display();

	return 0;
}