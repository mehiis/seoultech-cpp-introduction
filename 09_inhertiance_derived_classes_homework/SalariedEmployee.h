#pragma once

#include "Employee.h"

// Derived class SalariedEmployee inherits from base class Employee
class SalariedEmployee : public Employee {
public:
	SalariedEmployee();
	SalariedEmployee(const string& name, const string& ssn, double netPayment, double weeklySalary);
	~SalariedEmployee();

	void setSalary(double salary);
	double getSalary();
	void printCheck();
private:
	double salary;
};
