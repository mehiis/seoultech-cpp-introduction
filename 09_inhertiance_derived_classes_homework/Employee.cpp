#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() : name(""), ssn(""), netPayment(0.0) {}

Employee::Employee(const string& name, const string& ssn, double netPayment) : name(name), ssn(ssn), netPayment(netPayment) {}

Employee::~Employee() {}

string Employee::getName() {
	return name;
}

void Employee::setName(const string& name) {
	this->name = name;
}

string Employee::getSsn() {
	return ssn;
}

void Employee::setSsn(const string& ssn) {
	this->ssn = ssn;
}

double Employee::getNetPay() {
	return netPayment;
}

void Employee::setNetPay(double netPayment) {
	this->netPayment = netPayment;
}

//If the printCheck() function is called for an object of the Employee class, it should print an error message and terminate the program.
void Employee::printCheck() {
	cout << "ERROR: printCheck FUNCTION CALLED FOR AN UNDIFFERENTIATED EMPLOYEE. Aborting the program. Check with the author of program about this bug.\n";
	//exit(1); //Uncomment this line to terminate the program when printCheck() is called for an object of the Employee class. Commented out for demo purposes.
}