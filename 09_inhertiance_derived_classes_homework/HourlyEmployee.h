#pragma once

#include "Employee.h"

// Derived class HourlyEmployee inherits from base class Employee
class HourlyEmployee : public Employee { //class CLASS_NAME : public BASE_CLASS_NAME
public:
	HourlyEmployee();
	HourlyEmployee(const string& name, const string& ssn, double netPayment, double hourlyRate, double hoursWorked);
	~HourlyEmployee();

	void setHourlyRate(double hourlyRate);
	double getHourlyRate();

	void setHoursWorked(double hoursWorked);
	double getHoursWorked();
	void printCheck();

private:
	double hourlyRate;
	double hoursWorked;
};
