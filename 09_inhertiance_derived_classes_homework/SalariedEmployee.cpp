#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee() : Employee(), salary(0.0) {}

SalariedEmployee::SalariedEmployee(const string& name, const string& ssn, double netPayment, double salary) : Employee(name, ssn, netPayment), salary(salary) {}

SalariedEmployee::~SalariedEmployee() {}

void SalariedEmployee::setSalary(double salary) {
	this->salary = salary;
}

double SalariedEmployee::getSalary() {
	return salary;
}

void SalariedEmployee::printCheck() {
	cout << "Check for " << getName() << "\n\n\n---------------------------------" <<
		"\nPay to the order of " << getName() << ".\nThe sum of " << getSalary() << " Dollars." << "\n\n\n---------------------------------" <<
		"\nCheck stub NOT NEGOTIABLE\n" << "Employee number: " << getSsn() << "\nSalaried Employee. Regular Pay: " << getSalary() << "\n\n\n---------------------------------" << endl;
}