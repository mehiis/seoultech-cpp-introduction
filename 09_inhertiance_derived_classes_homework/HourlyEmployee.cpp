#include "HourlyEmployee.h"

// The HourlyEmployee class should have, CONTRUCTOR(): BASE_CLASS_CONSTRUCTOR(), hourlyRate(0.0), hoursWorked(0.0).
HourlyEmployee::HourlyEmployee() : Employee(), hourlyRate(0.0), hoursWorked(0.0) {}

HourlyEmployee::HourlyEmployee(const string& name, const string& ssn, double netPayment, double hourlyRate, double hoursWorked) : Employee(name, ssn, netPayment), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

HourlyEmployee::~HourlyEmployee() {}

void HourlyEmployee::setHourlyRate(double hourlyRate) {
	this->hourlyRate = hourlyRate;
}

double HourlyEmployee::getHourlyRate() {
	return hourlyRate;
}

void HourlyEmployee::setHoursWorked(double hoursWorked) {
	this->hoursWorked = hoursWorked;
}

double HourlyEmployee::getHoursWorked() {
	return hoursWorked;
}

void HourlyEmployee::printCheck() {
	cout << "Check for " << getName() << "\n\n\n---------------------------------" <<
		"\nPay to the order of " << getName() << ".\nThe sum of " << (getHourlyRate() * getHoursWorked()) << " Dollars." << "\n\n\n---------------------------------" <<
		"\nCheck stub NOT NEGOTIABLE\n" << "Employee number: " << getSsn() << "\nHourly Employee.\nHours worked: " << getHoursWorked() << " Rate: " << getHourlyRate() << " Pay: " << (getHourlyRate() * getHoursWorked()) << "\n\n\n---------------------------------" << endl;
}