#include "Administrator.h"

Administrator::Administrator() : SalariedEmployee(), title(""), responsibility(""), supervisor("") {}

Administrator::Administrator(const string& name, const string& ssn, double netPayment, double weeklySalary, const string& title, const string& responsibility, const string& supervisor)
	: SalariedEmployee(name, ssn, netPayment, weeklySalary), title(title), responsibility(responsibility), supervisor(supervisor) {
}

Administrator::~Administrator() {}

void Administrator::setTitle(const string& title) {
	this->title = title;
}

string Administrator::getTitle() {
	return title;
}

void Administrator::setResponsibility(const string& responsibility) {
	this->responsibility = responsibility;
}

string Administrator::getResponsibility() {
	return responsibility;
}

void Administrator::setSupervisor(const string& supervisor) {
	this->supervisor = supervisor;
}

string Administrator::getSupervisor() {
	return supervisor;
}

// input the administrator's name, social security number, title, responsibility, supervisor, and salary.
void Administrator::inputData() {
	string name, ssn, title, responsibility, supervisor;
	double salary;

	cout << "Enter the administrator's name: ";
	cin >> name;
	setName(name);

	cout << "Enter Social Security Number: ";
	cin >> ssn;
	setSsn(ssn);

	cout << "Enter a title, followed by return: ";
	cin >> title;
	setTitle(title);

	cout << "Enter the responsibility, followed by return: ";
	cin >> responsibility;
	setResponsibility(responsibility);

	cout << "Enter the supervisor's name, followed by return: ";
	cin >> supervisor;
	setSupervisor(supervisor);

	cout << "Enter salary followed by return: ";
	cin >> salary;
	setSalary(salary);
}

// input an amount and increase the administrator's salary by that amount.
void Administrator::increaseSalary(double amount) {
	double currentSalary = getSalary();
	setSalary(currentSalary + amount);
	cout << "Increase salary.";
}

// input a new supervisor's name and update the administrator's supervisor data member with the new name.
void Administrator::inputChangeSupervisor() {
	string newSupervisor;
	cout << "Change the supervisor to: ";
	cin >> newSupervisor;
	setSupervisor(newSupervisor);
}

// print the administrator's data, including name, salary, social security number, title, responsibility, and supervisor.
void Administrator::print() {
	cout << "\n\n\n-------------------------------- \nprinting Administrator's data: " << endl;

	cout << "Name: " << getName() << endl;
	cout << "Annual Salary: $" << getSalary() << endl;
	cout << "Social Security Number: " << getSsn() << endl;
	cout << "Title: " << getTitle() << endl;
	cout << "Responsibility: " << getResponsibility() << endl;
	cout << "Supervisor: " << getSupervisor() << endl;

	cout << "--------------------------------\n";
}

// Override the printCheck() function for the Administrator class to print the administrator's check information.
void Administrator::printCheck() {
	cout << "\n\n\n--------------------------------\n";
	cout << "Pay to the order of " << getName() << endl;
	cout << "The monthly salary sum of $" << (getSalary() / 12) << " dollars." << endl;
	cout << "Check Stub: NOT NEGOTIABLE" << endl;
	cout << "Employee Number: " << getSsn() << endl;

	cout << "Administrative Employee." << endl;
	cout << "--------------------------------\n\n\n";
}